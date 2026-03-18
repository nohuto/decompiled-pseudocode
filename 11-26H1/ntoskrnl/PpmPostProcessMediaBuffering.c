/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x140946160
 * Callers:
 *     PpmApplyProfile @ 0x140945C68 (PpmApplyProfile.c)
 * Callees:
 *     RtlSubtractAffinityEx @ 0x14025B408 (RtlSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1403EDFE0 (PoCopyDeepIdleMask.c)
 *     PopExecuteOnTargetProcessors @ 0x140428780 (PopExecuteOnTargetProcessors.c)
 *     PpmCheckApplyResetNotification @ 0x1404BBD38 (PpmCheckApplyResetNotification.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
    result = RtlSubtractAffinityEx((struct _KAFFINITY_EX *)&stru_140FC01F0.WaitRegister, &v1, (__int64)&v2);
    if ( result )
      return PopExecuteOnTargetProcessors((__int64)&v2, (__int64)PpmResetInterruptRate, 0LL, 0LL);
  }
  return result;
}
