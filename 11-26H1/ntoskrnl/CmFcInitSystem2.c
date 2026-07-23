/*
 * XREFs of CmFcInitSystem2 @ 0x140CF3EC8
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1404A6470 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeAssignSecurity @ 0x1408E7210 (SeAssignSecurity.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF6E68 (CmFcManagerStartRuntimePhase.c)
 */

__int64 CmFcInitSystem2()
{
  int started; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-28h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+70h] [rbp+8h] BYREF

  ExplicitDescriptor = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  started = SeConvertStringSecurityDescriptorToSecurityDescriptor(
              (__int64)L"O:SYG:SYD:(A;;GA;;;SY)(A;;GA;;;BA)",
              1,
              (__int64)&ExplicitDescriptor,
              0LL);
  if ( started >= 0 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    started = SeAssignSecurity(
                0LL,
                ExplicitDescriptor,
                &CmFcFeatureConfigSecurityDescriptor,
                0,
                &SubjectContext,
                &CmFcFeatureConfigMapping,
                PagedPool);
    SeReleaseSubjectContext(&SubjectContext);
    if ( started >= 0 )
    {
      started = CmFcManagerStartRuntimePhase();
      if ( started >= 0 )
        started = 0;
    }
  }
  if ( ExplicitDescriptor )
    ExFreePoolWithTag(ExplicitDescriptor, 0);
  return (unsigned int)started;
}
