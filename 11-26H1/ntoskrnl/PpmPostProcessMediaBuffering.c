/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x1409C1AD0
 * Callers:
 *     PpmApplyProfile @ 0x1409C15D8 (PpmApplyProfile.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     RtlSubtractAffinityEx @ 0x14025CBE8 (RtlSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x140452B10 (PoCopyDeepIdleMask.c)
 *     PpmCheckApplyResetNotification @ 0x1404B5518 (PpmCheckApplyResetNotification.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

int PpmPostProcessMediaBuffering()
{
  int result; // eax
  struct _KAFFINITY_EX v1; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v2; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v3[264]; // [rsp+140h] [rbp+38h] BYREF

  memset_0(v3, 0, 0x100uLL);
  memset_0(&v1.8, 0, sizeof(v1.8));
  result = PpmCheckApplyResetNotification();
  if ( PpmPlatformStates )
  {
    *(_QWORD *)&v1.Count = 2097153LL;
    memset_0(&v1.8, 0, sizeof(v1.8));
    PoCopyDeepIdleMask(&v1.Count);
    v2 = 2097153LL;
    memset_0(v3, 0, 0x100uLL);
    result = RtlSubtractAffinityEx((struct _KAFFINITY_EX *)&stru_140FC11F0.WaitRegister, &v1, (__int64)&v2);
    if ( result )
      return PopExecuteOnTargetProcessors((__int64)&v2, (__int64)PpmResetInterruptRate, 0LL, 0LL);
  }
  return result;
}
