/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x1409D42F8
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x140837A74 (EtwpSetCoverageSamplerInformation.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x140A31734 (EtwpQueryCoverageSamplerInformation.c)
 *     NtSetDefaultLocale @ 0x140B10920 (NtSetDefaultLocale.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     RtlRunOnceExecuteOnce @ 0x1409D46E0 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall ExCheckFullProcessInformationAccess(char a1)
{
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-20h] BYREF
  __int64 v4; // [rsp+90h] [rbp+10h] BYREF
  __int64 v5; // [rsp+98h] [rbp+18h] BYREF
  PVOID Context; // [rsp+A0h] [rbp+20h] BYREF

  LODWORD(v5) = 0;
  Context = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a1 != 1 )
    return -1073741790;
  result = RtlRunOnceExecuteOnce(
             &ExpFullProcessInfoInit,
             (PRTL_RUN_ONCE_INIT_FN)ExpInitFullProcessSecurityInfo,
             0LL,
             &Context);
  LODWORD(v4) = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
    SeAccessCheckWithHint(
      (__int64)Context,
      7,
      (int *)&SubjectContext,
      0,
      1u,
      0,
      0LL,
      &ExpRestrictedGenericMapping,
      1,
      (unsigned int *)&v5,
      (int *)&v4);
    SeReleaseSubjectContext(&SubjectContext);
    return v4;
  }
  return result;
}
