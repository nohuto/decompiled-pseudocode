/*
 * XREFs of ExCpuSetResourceManagerAccessCheck @ 0x1404E7FA4
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     NtAcquireProcessActivityReference @ 0x140B272F0 (NtAcquireProcessActivityReference.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1402B63B0 (SeAccessCheckWithHint.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140920670 (SeCaptureSubjectContextEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall ExCpuSetResourceManagerAccessCheck(KPROCESSOR_MODE a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  __int64 v5; // [rsp+90h] [rbp+8h] BYREF
  __int64 v6; // [rsp+98h] [rbp+10h] BYREF

  LODWORD(v6) = 0;
  LODWORD(v5) = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a1 || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a1) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(
    (__int64)&ExpCpuSetSecurityDescriptor,
    7,
    (__int64)&SubjectContext,
    0,
    1u,
    0,
    0LL,
    &ExpRestrictedGenericMapping,
    a1,
    (unsigned int *)&v6,
    (int *)&v5);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)v5;
}
