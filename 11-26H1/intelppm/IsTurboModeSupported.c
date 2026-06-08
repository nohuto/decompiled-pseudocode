/*
 * XREFs of IsTurboModeSupported @ 0x140005C34
 * Callers:
 *     SetGV3PerfStateAndTurbo @ 0x140002540 (SetGV3PerfStateAndTurbo.c)
 *     SetGV3PerfState @ 0x140002A60 (SetGV3PerfState.c)
 *     SetTurboDisablePolicy @ 0x140004910 (SetTurboDisablePolicy.c)
 *     InitDriver @ 0x14004A03C (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x140010330 (GetCpuIdInfo.c)
 */

bool IsTurboModeSupported()
{
  __int128 v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  GetCpuIdInfo(0LL, &v1);
  if ( (unsigned int)v1 < 6 )
    return 0;
  GetCpuIdInfo(6LL, &v2);
  return (v2 & 2) != 0;
}
