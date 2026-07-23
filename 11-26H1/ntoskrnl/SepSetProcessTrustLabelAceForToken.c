/*
 * XREFs of SepSetProcessTrustLabelAceForToken @ 0x140406340
 * Callers:
 *     SeCopyClientToken @ 0x1409025C0 (SeCopyClientToken.c)
 *     SepFinalizeTokenAcls @ 0x140902AEC (SepFinalizeTokenAcls.c)
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObSetSecurityObjectByPointer @ 0x1408F2970 (ObSetSecurityObjectByPointer.c)
 *     RtlAddProcessTrustLabelAce @ 0x140901BA0 (RtlAddProcessTrustLabelAce.c)
 *     ObGetObjectSecurity @ 0x140935120 (ObGetObjectSecurity.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlAddAce @ 0x1409E03E0 (RtlAddAce.c)
 *     ObReleaseObjectSecurity @ 0x140A67A90 (ObReleaseObjectSecurity.c)
 *     RtlQueryInformationAcl @ 0x140A73FB0 (RtlQueryInformationAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A93E90 (RtlSetSaclSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall SepSetProcessTrustLabelAceForToken(_QWORD *Object)
{
  ACL *v2; // rbp
  int v3; // r13d
  unsigned __int8 *v4; // r15
  ULONG v5; // r12d
  NTSTATUS result; // eax
  _WORD *v7; // rdi
  NTSTATUS Acl; // ebx
  __int16 v9; // ax
  __int64 v10; // rax
  ACL *v11; // r14
  ACL *v12; // rbx
  unsigned int i; // ecx
  ULONG v14; // ebx
  ACL *Pool2; // rax
  ACL *v16; // r14
  BOOLEAN v17[4]; // [rsp+30h] [rbp-78h] BYREF
  ULONG AclRevision; // [rsp+34h] [rbp-74h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp-70h] BYREF
  _OWORD v20[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h]
  __int64 AclInformation; // [rsp+68h] [rbp-40h] BYREF
  int v23; // [rsp+70h] [rbp-38h]

  AclInformation = 0LL;
  SecurityDescriptor = 0LL;
  v17[0] = 0;
  v2 = 0LL;
  v23 = 0;
  AclRevision = 0;
  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  if ( !Object )
    return -1073741811;
  v3 = 8;
  v4 = (unsigned __int8 *)Object[138];
  v5 = 2;
  result = ObGetObjectSecurity(Object, &SecurityDescriptor, v17);
  v7 = SecurityDescriptor;
  Acl = result;
  if ( result < 0 )
    goto LABEL_3;
  if ( !SecurityDescriptor )
    return result;
  v9 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v9 & 0x10) == 0 )
    goto LABEL_30;
  if ( v9 >= 0 )
  {
    v11 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v10 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v10 )
    {
LABEL_30:
      Acl = 0;
      goto LABEL_31;
    }
    v11 = (ACL *)((char *)SecurityDescriptor + v10);
  }
  if ( !v11 )
    goto LABEL_30;
  v2 = v11 + 1;
  v12 = v11 + 1;
  for ( i = 0; i < v11->AceCount; ++i )
  {
    if ( v12->AclRevision == 20 )
      goto LABEL_16;
    v12 = (ACL *)((char *)v12 + v12->AclSize);
  }
  v12 = 0LL;
LABEL_16:
  if ( !v4 )
  {
    if ( v12 )
      goto LABEL_19;
LABEL_28:
    Acl = 0;
    goto LABEL_3;
  }
  if ( v12 && RtlEqualSid(&v12[1], v4) )
  {
    *(_DWORD *)&v12->AceCount &= 0x2001Eu;
    goto LABEL_28;
  }
LABEL_19:
  Acl = RtlQueryInformationAcl(v11, &AclInformation, 0xCu, AclSizeInformation);
  if ( Acl >= 0 )
  {
    v3 = HIDWORD(AclInformation);
    Acl = RtlQueryInformationAcl(v11, &AclRevision, 4u, AclRevisionInformation);
    if ( Acl >= 0 )
    {
      v5 = AclRevision;
      if ( (unsigned __int8)(v11->AclRevision - 2) > 2u )
        goto LABEL_24;
      Acl = 0;
      if ( !v11->AceCount )
      {
        Acl = -1073741811;
        goto LABEL_3;
      }
      if ( v2 >= (ACL *)((char *)v11 + v11->AclSize) )
      {
LABEL_24:
        Acl = -1073741811;
        goto LABEL_3;
      }
LABEL_31:
      if ( v4 )
      {
        v14 = v3 + 4 * v4[1] + 16;
        Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
        v16 = Pool2;
        if ( Pool2 )
        {
          Acl = RtlCreateAcl(Pool2, v14, v5);
          if ( Acl >= 0 )
          {
            if ( !v2 || (Acl = RtlAddAce(v16, v5, 0, v2, HIDWORD(AclInformation) - 8), Acl >= 0) )
            {
              Acl = RtlAddProcessTrustLabelAce(v16, 2u, 0, v4, 0x14u, 0x2001Eu);
              if ( Acl >= 0 )
              {
                Acl = RtlCreateSecurityDescriptor(v20, 1u);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetSaclSecurityDescriptor(v20, 1u, v16, 0);
                  if ( Acl >= 0 )
                  {
                    WORD1(v20[0]) |= v7[1] & 0x2830;
                    Acl = ObSetSecurityObjectByPointer(Object, 504LL, v20);
                  }
                }
              }
            }
          }
          ExFreePoolWithTag(v16, 0);
        }
        else
        {
          Acl = -1073741670;
        }
      }
    }
  }
LABEL_3:
  if ( v7 )
    ObReleaseObjectSecurity(v7, v17[0]);
  return Acl;
}
