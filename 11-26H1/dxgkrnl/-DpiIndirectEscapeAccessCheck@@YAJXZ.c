/*
 * XREFs of ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x1403D68AC
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140250AE0 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 DpiIndirectEscapeAccessCheck(void)
{
  ULONG v0; // eax
  void *Pool2; // r15
  ULONG v2; // eax
  void *v3; // rdi
  ULONG v4; // eax
  void *v5; // rsi
  ULONG v6; // eax
  __int64 v7; // rax
  void *v8; // r14
  NTSTATUS Acl; // r12d
  ULONG v11; // r12d
  ULONG v12; // r12d
  ULONG v13; // r12d
  ULONG v14; // r12d
  struct _ACL *v15; // rax
  struct _ACL *v16; // rbx
  BOOLEAN v17; // al
  ACCESS_MASK PreviouslyGrantedAccess[2]; // [rsp+28h] [rbp-69h]
  PPRIVILEGE_SET *Privileges; // [rsp+30h] [rbp-61h]
  PGENERIC_MAPPING GenericMapping; // [rsp+38h] [rbp-59h]
  KPROCESSOR_MODE AccessMode[8]; // [rsp+40h] [rbp-51h]
  PACCESS_MASK GrantedAccess; // [rsp+48h] [rbp-49h]
  int AccessStatus; // [rsp+58h] [rbp-39h] BYREF
  DWORD v24; // [rsp+5Ch] [rbp-35h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-31h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-11h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+Fh]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A8h] [rbp+17h] BYREF
  struct _GENERIC_MAPPING v29; // [rsp+B0h] [rbp+1Fh] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  v27 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v0 = RtlLengthRequiredSid(2u);
  Pool2 = (void *)ExAllocatePool2(257LL, v0, 1953656900LL);
  v2 = RtlLengthRequiredSid(1u);
  v3 = (void *)ExAllocatePool2(257LL, v2, 1953656900LL);
  v4 = RtlLengthRequiredSid(6u);
  v5 = (void *)ExAllocatePool2(257LL, v4, 1953656900LL);
  v6 = RtlLengthRequiredSid(6u);
  v7 = ExAllocatePool2(257LL, v6, 1953656900LL);
  v8 = (void *)v7;
  if ( Pool2 && v3 && v5 && v7 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    RtlInitializeSid(Pool2, &IdentifierAuthority, 2u);
    *RtlSubAuthoritySid(Pool2, 0) = 32;
    *RtlSubAuthoritySid(Pool2, 1u) = 544;
    RtlInitializeSid(v3, &IdentifierAuthority, 1u);
    *RtlSubAuthoritySid(v3, 0) = 18;
    RtlInitializeSidEx(v5, &IdentifierAuthority, 6LL, 84LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    LODWORD(GrantedAccess) = 2109097600;
    *(_DWORD *)AccessMode = 1466607281;
    LODWORD(GenericMapping) = -1424805804;
    LODWORD(Privileges) = 1617898341;
    PreviouslyGrantedAccess[0] = -123880637;
    RtlInitializeSidEx(
      v8,
      &IdentifierAuthority,
      6LL,
      80LL,
      *(_QWORD *)PreviouslyGrantedAccess,
      Privileges,
      GenericMapping,
      *(_QWORD *)AccessMode,
      GrantedAccess);
    v11 = RtlLengthSid(v8);
    v12 = RtlLengthSid(v5) + v11;
    v13 = RtlLengthSid(v3) + v12;
    v14 = RtlLengthSid(Pool2) + 56 + v13;
    v15 = (struct _ACL *)ExAllocatePool2(257LL, v14, 1953656900LL);
    v16 = v15;
    if ( v15 )
    {
      Acl = RtlCreateAcl(v15, v14, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v16, 2u, 0x1F0000u, v3);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v16, 2u, 0x1F0000u, Pool2);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v16, 2u, 0x1F0000u, v5);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAce(v16, 2u, 0x1F0000u, v8);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v16, 0);
                if ( Acl >= 0 )
                {
                  v24 = 0;
                  v29.GenericRead = 0x20000;
                  v29.GenericWrite = 0x20000;
                  v29.GenericExecute = 0x20000;
                  v29.GenericAll = 2031616;
                  AccessStatus = 0;
                  v17 = SeAccessCheck(
                          SecurityDescriptor,
                          &SubjectContext,
                          0,
                          0x1F0000u,
                          0,
                          0LL,
                          &v29,
                          1,
                          &v24,
                          &AccessStatus);
                  Acl = AccessStatus;
                  if ( v17 )
                    Acl = 0;
                }
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v16, 0);
    }
    else
    {
      Acl = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 1210;
    }
  }
  else
  {
    Acl = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 1219;
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)Acl;
}
