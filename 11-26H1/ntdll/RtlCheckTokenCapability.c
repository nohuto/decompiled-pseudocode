/*
 * XREFs of RtlCheckTokenCapability @ 0x180059240
 * Callers:
 *     RtlCapabilityCheck @ 0x180059720 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlValidSid @ 0x1800276B0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800276F0 (RtlValidAcl.c)
 *     RtlIsCapabilitySid @ 0x1800591F0 (RtlIsCapabilitySid.c)
 *     ZwAccessCheck @ 0x18015EE40 (ZwAccessCheck.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtQueryInformationToken @ 0x18015F260 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x18015F420 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x18015F440 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x18015F680 (NtDuplicateToken.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  unsigned __int8 v6; // si
  HANDLE v7; // rcx
  unsigned __int8 *v8; // rbx
  __int16 v9; // ax
  unsigned __int8 AclRevision; // di
  _BYTE *v11; // rdx
  unsigned int i; // r8d
  unsigned __int16 v13; // cx
  _BYTE *v14; // rcx
  unsigned int j; // r8d
  unsigned __int16 v16; // r8
  int v17; // ebx
  HANDLE ClientToken; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-B8h] BYREF
  ULONG PrivilegeSetLength; // [rsp+4Ch] [rbp-B4h] BYREF
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-B0h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE TokenHandlea; // [rsp+58h] [rbp-A8h] BYREF
  __int128 SecurityDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v26; // [rsp+70h] [rbp-90h]
  ACL *p_Acl; // [rsp+80h] [rbp-80h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  PSID TokenInformation[12]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v30; // [rsp+120h] [rbp+20h] BYREF
  int v31; // [rsp+128h] [rbp+28h]
  ACL Acl; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v33[152]; // [rsp+138h] [rbp+38h] BYREF
  _PRIVILEGE_SET PrivilegeSet; // [rsp+1D0h] [rbp+D0h] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  memset_thunk_772440563353939046(&Acl, 0, 0xA0uLL);
  ClientToken = 0LL;
  v30 = 0LL;
  v31 = 0;
  memset(&ObjectAttributes, 0, 44);
  p_Acl = 0LL;
  PrivilegeSetLength = 0;
  SecurityDescriptor = 0LL;
  v26 = 0LL;
  memset_thunk_772440563353939046(TokenInformation, 0, 0x58uLL);
  ReturnLength = 0;
  TokenHandlea = 0LL;
  *HasCapability = 0;
  if ( !RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    v17 = -1073741811;
    goto LABEL_47;
  }
  v6 = 2;
  if ( TokenHandle )
  {
    v7 = TokenHandle;
    ClientToken = TokenHandle;
LABEL_4:
    ReturnLength = 88;
    NtQueryInformationToken(v7, 1u, TokenInformation, 0x58u, &ReturnLength);
    v8 = (unsigned __int8 *)TokenInformation[0];
    LOBYTE(SecurityDescriptor) = 1;
    if ( (SWORD1(SecurityDescriptor) & 0x8000u) == 0 )
    {
      *((_QWORD *)&SecurityDescriptor + 1) = 0LL;
      if ( TokenInformation[0] )
        *((PSID *)&SecurityDescriptor + 1) = TokenInformation[0];
      v9 = WORD1(SecurityDescriptor) & 0xFFFE;
      WORD1(SecurityDescriptor) = v9;
      if ( v9 >= 0 )
      {
        *(_QWORD *)&v26 = 0LL;
        if ( TokenInformation[0] )
          *(PSID *)&v26 = TokenInformation[0];
        WORD1(SecurityDescriptor) = v9 & 0xFFFD;
      }
    }
    Acl = (ACL)10485762LL;
    if ( RtlValidSid(TokenInformation[0]) && Acl.AclRevision <= 4u )
    {
      AclRevision = 2;
      if ( Acl.AclRevision > 2u )
        AclRevision = Acl.AclRevision;
      if ( RtlValidAcl(&Acl) )
      {
        v11 = v33;
        for ( i = 0; i < Acl.AceCount; ++i )
        {
          if ( v11 >= (_BYTE *)&Acl + Acl.AclSize )
            goto LABEL_25;
          v11 += *((unsigned __int16 *)v11 + 1);
        }
        if ( v11 > (_BYTE *)&Acl + Acl.AclSize )
          v11 = 0LL;
        v13 = 4 * (v8[1] + 4);
        if ( v11 && &v11[v13] <= (_BYTE *)&Acl + Acl.AclSize )
        {
          *((_WORD *)v11 + 1) = v13;
          *(_WORD *)v11 = 0;
          *((_DWORD *)v11 + 1) = 65537;
          memmove(v11 + 8, v8, 4LL * v8[1] + 8);
          ++Acl.AceCount;
          Acl.AclRevision = AclRevision;
        }
      }
    }
LABEL_25:
    if ( RtlValidSid(CapabilitySidToCheck) && Acl.AclRevision <= 4u )
    {
      if ( Acl.AclRevision > 2u )
        v6 = Acl.AclRevision;
      if ( RtlValidAcl(&Acl) )
      {
        v14 = v33;
        for ( j = 0; j < Acl.AceCount; ++j )
        {
          if ( v14 >= (_BYTE *)&Acl + Acl.AclSize )
            goto LABEL_39;
          v14 += *((unsigned __int16 *)v14 + 1);
        }
        if ( v14 > (_BYTE *)&Acl + Acl.AclSize )
          v14 = 0LL;
        v16 = 4 * (*((unsigned __int8 *)CapabilitySidToCheck + 1) + 4);
        if ( v14 && &v14[v16] <= (_BYTE *)&Acl + Acl.AclSize )
        {
          *((_WORD *)v14 + 1) = v16;
          *(_WORD *)v14 = 0;
          *((_DWORD *)v14 + 1) = 65537;
          memmove(v14 + 8, CapabilitySidToCheck, 4LL * *((unsigned __int8 *)CapabilitySidToCheck + 1) + 8);
          ++Acl.AceCount;
          Acl.AclRevision = v6;
        }
      }
    }
LABEL_39:
    if ( (_BYTE)SecurityDescriptor == 1 && (SWORD1(SecurityDescriptor) & 0x8000u) == 0 )
    {
      p_Acl = &Acl;
      WORD1(SecurityDescriptor) = WORD1(SecurityDescriptor) & 0xFFF3 | 4;
    }
    PrivilegeSetLength = 56;
    v17 = ZwAccessCheck(
            &SecurityDescriptor,
            ClientToken,
            0x10001u,
            (PGENERIC_MAPPING)&RtlpCheckTokenCapabilityGenericMapping,
            &PrivilegeSet,
            &PrivilegeSetLength,
            &GrantedAccess,
            &AccessStatus);
    if ( v17 >= 0 )
    {
      if ( !AccessStatus && GrantedAccess == 65537 )
        *HasCapability = 1;
      v17 = 0;
    }
LABEL_47:
    if ( TokenHandle )
      return v17;
    goto LABEL_55;
  }
  v17 = NtOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0, &ClientToken);
  if ( v17 == -1073741700 )
  {
    v17 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0, &TokenHandlea);
    if ( v17 < 0 )
      goto LABEL_55;
    ObjectAttributes.SecurityQualityOfService = &v30;
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ObjectAttributes.SecurityDescriptor = 0LL;
    v30 = 0x20000000CLL;
    LOWORD(v31) = 1;
    v17 = NtDuplicateToken(TokenHandlea, 8u, &ObjectAttributes, 0, TokenImpersonation, &ClientToken);
    NtClose(TokenHandlea);
  }
  if ( v17 >= 0 )
  {
    v7 = ClientToken;
    goto LABEL_4;
  }
LABEL_55:
  if ( ClientToken )
    NtClose(ClientToken);
  return v17;
}
