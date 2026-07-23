/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x180059E10
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x180059088 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCheckTokenMembership @ 0x1800596C0 (RtlCheckTokenMembership.c)
 *     RtlCapabilityCheck @ 0x180059720 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlValidSid @ 0x1800276B0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800276F0 (RtlValidAcl.c)
 *     RtlInitializeSidEx @ 0x18005BAD0 (RtlInitializeSidEx.c)
 *     ZwAccessCheck @ 0x18015EE40 (ZwAccessCheck.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenThreadTokenEx @ 0x18015F420 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x18015F440 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x18015F680 (NtDuplicateToken.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembershipEx(HANDLE TokenHandle, PSID SidToCheck, ULONG Flags, PBOOLEAN IsMember)
{
  unsigned __int8 v8; // si
  __int16 v9; // ax
  unsigned __int8 AclRevision; // di
  _BYTE *v11; // rcx
  unsigned int i; // r8d
  unsigned __int16 v13; // r8
  unsigned __int8 v14; // bl
  _BYTE *v15; // rdx
  unsigned int j; // r8d
  int v17; // eax
  unsigned __int16 v18; // cx
  int v19; // edi
  _BYTE *v21; // rdx
  unsigned int k; // r8d
  unsigned int v23; // r9d
  unsigned __int16 v24; // cx
  PPRIVILEGE_SET PrivilegeSet; // [rsp+20h] [rbp-E0h]
  ULONG PrivilegeSetLength; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS AccessStatus; // [rsp+44h] [rbp-BCh] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE ClientToken; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE TokenHandlea; // [rsp+58h] [rbp-A8h] BYREF
  __int128 SecurityDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+70h] [rbp-90h]
  ACL *p_Acl; // [rsp+80h] [rbp-80h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-48h] BYREF
  int v36; // [rsp+C0h] [rbp-40h]
  ACL Acl; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v38[232]; // [rsp+D8h] [rbp-28h] BYREF
  char Sid; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned __int8 v40; // [rsp+1C1h] [rbp+C1h]
  _PRIVILEGE_SET v41; // [rsp+210h] [rbp+110h] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  memset_thunk_772440563353939046(&Sid, 0, 0x44uLL);
  memset_thunk_772440563353939046(&Acl, 0, 0xECuLL);
  ClientToken = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  PrivilegeSetLength = 0;
  v35 = 0LL;
  v36 = 0;
  p_Acl = 0LL;
  TokenHandlea = 0LL;
  *IsMember = 0;
  memset(&ObjectAttributes, 0, 32);
  SecurityDescriptor = 0LL;
  v32 = 0LL;
  if ( (Flags & 0xFFFFFFFC) == 0 )
  {
    v8 = 2;
    if ( TokenHandle )
    {
      ClientToken = TokenHandle;
    }
    else
    {
      v19 = NtOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, 0, &ClientToken);
      if ( v19 == -1073741700 )
      {
        v19 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0, &TokenHandlea);
        if ( v19 < 0 )
          goto LABEL_54;
        ObjectAttributes.SecurityQualityOfService = &v35;
        ObjectAttributes.Length = 48;
        memset(&ObjectAttributes.RootDirectory, 0, 20);
        ObjectAttributes.SecurityDescriptor = 0LL;
        v35 = 0x20000000CLL;
        LOWORD(v36) = 1;
        v19 = NtDuplicateToken(TokenHandlea, 0xCu, &ObjectAttributes, 0, TokenImpersonation, &ClientToken);
        NtClose(TokenHandlea);
      }
      if ( v19 < 0 )
        goto LABEL_54;
    }
    LOBYTE(SecurityDescriptor) = 1;
    if ( (SWORD1(SecurityDescriptor) & 0x8000u) == 0 )
    {
      *((_QWORD *)&SecurityDescriptor + 1) = 0LL;
      if ( SidToCheck )
        *((_QWORD *)&SecurityDescriptor + 1) = SidToCheck;
      v9 = WORD1(SecurityDescriptor) & 0xFFFE;
      WORD1(SecurityDescriptor) = v9;
      if ( v9 >= 0 )
      {
        *(_QWORD *)&v32 = 0LL;
        if ( SidToCheck )
          *(_QWORD *)&v32 = SidToCheck;
        WORD1(SecurityDescriptor) = v9 & 0xFFFD;
      }
    }
    Acl = (ACL)15466498LL;
    if ( RtlValidSid(SidToCheck) && Acl.AclRevision <= 4u )
    {
      AclRevision = 2;
      if ( Acl.AclRevision > 2u )
        AclRevision = Acl.AclRevision;
      if ( RtlValidAcl(&Acl) )
      {
        v11 = v38;
        for ( i = 0; i < Acl.AceCount; ++i )
        {
          if ( v11 >= (_BYTE *)&Acl + Acl.AclSize )
            goto LABEL_25;
          v11 += *((unsigned __int16 *)v11 + 1);
        }
        if ( v11 > (_BYTE *)&Acl + Acl.AclSize )
          v11 = 0LL;
        v13 = 4 * (*((unsigned __int8 *)SidToCheck + 1) + 4);
        if ( v11 && &v11[v13] <= (_BYTE *)&Acl + Acl.AclSize )
        {
          *((_WORD *)v11 + 1) = v13;
          *(_WORD *)v11 = 0;
          *((_DWORD *)v11 + 1) = 1;
          memmove(v11 + 8, SidToCheck, 4LL * *((unsigned __int8 *)SidToCheck + 1) + 8);
          ++Acl.AceCount;
          Acl.AclRevision = AclRevision;
        }
      }
    }
LABEL_25:
    if ( (Flags & 3) != 0 )
    {
      LODWORD(PrivilegeSet) = 1;
      RtlInitializeSidEx(&Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, PrivilegeSet);
      if ( RtlValidSid(&Sid) )
      {
        if ( Acl.AclRevision <= 4u )
        {
          v14 = 2;
          if ( Acl.AclRevision > 2u )
            v14 = Acl.AclRevision;
          if ( RtlValidAcl(&Acl) )
          {
            v15 = v38;
            for ( j = 0; j < Acl.AceCount; ++j )
            {
              if ( v15 >= (_BYTE *)&Acl + Acl.AclSize )
                goto LABEL_40;
              v15 += *((unsigned __int16 *)v15 + 1);
            }
            v17 = v40;
            if ( v15 > (_BYTE *)&Acl + Acl.AclSize )
              v15 = 0LL;
            v18 = 4 * v40 + 16;
            if ( v15 && &v15[v18] <= (_BYTE *)&Acl + Acl.AclSize )
            {
              *((_WORD *)v15 + 1) = v18;
              *(_WORD *)v15 = 0;
              *((_DWORD *)v15 + 1) = 1;
              memmove(v15 + 8, &Sid, (unsigned int)(4 * v17 + 8));
              ++Acl.AceCount;
              Acl.AclRevision = v14;
            }
          }
        }
      }
    }
LABEL_40:
    if ( (Flags & 2) != 0 )
    {
      LODWORD(PrivilegeSet) = 2;
      RtlInitializeSidEx(&Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, PrivilegeSet);
      if ( RtlValidSid(&Sid) )
      {
        if ( Acl.AclRevision <= 4u )
        {
          if ( Acl.AclRevision > 2u )
            v8 = Acl.AclRevision;
          if ( RtlValidAcl(&Acl) )
          {
            v21 = v38;
            for ( k = 0; k < Acl.AceCount; ++k )
            {
              if ( v21 >= (_BYTE *)&Acl + Acl.AclSize )
                goto LABEL_41;
              v21 += *((unsigned __int16 *)v21 + 1);
            }
            if ( v21 > (_BYTE *)&Acl + Acl.AclSize )
              v21 = 0LL;
            v23 = 4 * v40 + 8;
            v24 = 4 * v40 + 16;
            if ( v21 && &v21[v24] <= (_BYTE *)&Acl + Acl.AclSize )
            {
              *((_WORD *)v21 + 1) = v24;
              *(_WORD *)v21 = 0;
              *((_DWORD *)v21 + 1) = 1;
              memmove(v21 + 8, &Sid, v23);
              ++Acl.AceCount;
              Acl.AclRevision = v8;
            }
          }
        }
      }
    }
LABEL_41:
    if ( (_BYTE)SecurityDescriptor == 1 && (SWORD1(SecurityDescriptor) & 0x8000u) == 0 )
    {
      p_Acl = &Acl;
      WORD1(SecurityDescriptor) = WORD1(SecurityDescriptor) & 0xFFF3 | 4;
    }
    PrivilegeSetLength = 56;
    v19 = ZwAccessCheck(
            &SecurityDescriptor,
            ClientToken,
            1u,
            (PGENERIC_MAPPING)&RtlpCheckTokenMembershipGenericMapping,
            &v41,
            &PrivilegeSetLength,
            &GrantedAccess,
            &AccessStatus);
    if ( v19 >= 0 )
    {
      v19 = 0;
      if ( AccessStatus )
      {
        if ( AccessStatus == -1073741790 )
          goto LABEL_48;
        goto LABEL_47;
      }
      if ( GrantedAccess != 1 )
      {
LABEL_47:
        v19 = AccessStatus;
        goto LABEL_48;
      }
      *IsMember = 1;
    }
LABEL_48:
    if ( TokenHandle )
      return v19;
LABEL_54:
    if ( ClientToken )
      NtClose(ClientToken);
    return v19;
  }
  return -1073741811;
}
