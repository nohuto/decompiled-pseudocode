/*
 * XREFs of PiAuCheckTokenMembership @ 0x1407A8310
 * Callers:
 *     PiAuCheckClientInteractive @ 0x1407A8248 (PiAuCheckClientInteractive.c)
 * Callees:
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     RtlLengthSid @ 0x1404872D0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409D8260 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AABBB0 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuCheckTokenMembership(void *Src, BOOLEAN *a2)
{
  ULONG v4; // ebx
  ACL *Pool2; // rax
  ACL *v6; // rdi
  NTSTATUS Acl; // ebx
  ACL *v8; // rsi
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-9h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-5h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-1h] BYREF
  GENERIC_MAPPING GenericMapping; // [rsp+78h] [rbp+1Fh] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GenericMapping.GenericWrite = 0x20000;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericRead = 131073;
  GenericMapping.GenericAll = 2031617;
  *a2 = 0;
  v4 = 3 * (RtlLengthSid(Src) + 20);
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
  v6 = Pool2;
  if ( Pool2 )
  {
    v8 = Pool2 + 5;
    RtlCreateSecurityDescriptor(Pool2, 1u);
    RtlSetOwnerSecurityDescriptor(v6, Src, 0);
    RtlSetGroupSecurityDescriptor(v6, Src, 0);
    Acl = RtlCreateAcl(v8, v4 - 40, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce((int)v8, 2, 0, 1, Src, 0);
      if ( Acl >= 0 )
      {
        Acl = RtlSetDaclSecurityDescriptor(v6, 1u, v8, 0);
        if ( Acl >= 0 )
        {
          SeCaptureSubjectContext(&SubjectContext);
          *a2 = SeAccessCheck(
                  v6,
                  &SubjectContext,
                  0,
                  1u,
                  0,
                  0LL,
                  &GenericMapping,
                  KeGetCurrentThread()->PreviousMode,
                  &GrantedAccess,
                  &AccessStatus);
          SeReleaseSubjectContext(&SubjectContext);
          Acl = 0;
        }
      }
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
