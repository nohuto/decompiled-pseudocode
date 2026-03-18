/*
 * XREFs of WdipAccessCheck @ 0x140513C6C
 * Callers:
 *     WdiUpdateSem @ 0x140532B84 (WdiUpdateSem.c)
 * Callees:
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     RtlLengthRequiredSid @ 0x1408E9A40 (RtlLengthRequiredSid.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409F49E0 (RtlAddAccessAllowedAce.c)
 *     RtlInitializeSid @ 0x140A6AF80 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 WdipAccessCheck()
{
  ACL *v0; // rbx
  _DWORD *Pool2; // rax
  _DWORD *v2; // rdi
  __int64 v4; // rax
  int v5; // r14d
  ACL *v6; // rax
  ACL *v7; // rsi
  NTSTATUS AccessStatus; // [rsp+58h] [rbp-9h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+5Ch] [rbp-5h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+64h] [rbp+3h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp+7h] BYREF
  GENERIC_MAPPING GenericMapping; // [rsp+88h] [rbp+27h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v0 = 0LL;
  GenericMapping.GenericRead = 131073;
  GenericMapping.GenericWrite = 0x20000;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericAll = 2031617;
  GrantedAccess = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  RtlLengthRequiredSid(6u);
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  v2 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  AccessStatus = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
  if ( AccessStatus >= 0 )
  {
    v4 = *(_QWORD *)&RtlpBootStatHandleLock.WaitRegister.Flags;
    v2[2] = 80;
    v2[3] = -1324354722;
    v2[4] = 78537857;
    v2[5] = 698502321;
    v2[6] = 558674196;
    v2[7] = 1451644582;
    v5 = 4 * (*((unsigned __int8 *)v2 + 1) + *((unsigned __int8 *)SeAliasAdminsSid + 1) + *(unsigned __int8 *)(v4 + 1))
       + 108;
    v6 = (ACL *)ExAllocatePool2(0x100uLL);
    v0 = v6;
    if ( v6 )
    {
      v7 = v6 + 5;
      AccessStatus = RtlCreateSecurityDescriptor(v6, 1u);
      if ( AccessStatus >= 0 )
      {
        AccessStatus = RtlCreateAcl(v7, v5 - 40, 2u);
        if ( AccessStatus >= 0 )
        {
          AccessStatus = RtlAddAccessAllowedAce(v7, 2u, 1u, SeAliasAdminsSid);
          if ( AccessStatus >= 0 )
          {
            AccessStatus = RtlAddAccessAllowedAce(v7, 2u, 1u, *(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags);
            if ( AccessStatus >= 0 )
            {
              AccessStatus = RtlAddAccessAllowedAce(v7, 2u, 1u, v2);
              if ( AccessStatus >= 0 )
              {
                AccessStatus = RtlSetDaclSecurityDescriptor(v0, 1u, v7, 0);
                if ( AccessStatus >= 0 )
                {
                  SeCaptureSubjectContext(&SubjectContext);
                  SeAccessCheck(v0, &SubjectContext, 0, 1u, 0, 0LL, &GenericMapping, 1, &GrantedAccess, &AccessStatus);
                  SeReleaseSubjectContext(&SubjectContext);
                }
              }
            }
          }
        }
      }
    }
    else
    {
      AccessStatus = -1073741670;
    }
  }
  ExFreePoolWithTag(v2, 0);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  return (unsigned int)AccessStatus;
}
