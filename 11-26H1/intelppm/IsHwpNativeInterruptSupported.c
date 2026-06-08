/*
 * XREFs of IsHwpNativeInterruptSupported @ 0x14002950C
 * Callers:
 *     ConnectHwpInterrupt @ 0x14002A7C0 (ConnectHwpInterrupt.c)
 *     InitDriver @ 0x14004A03C (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x140010330 (GetCpuIdInfo.c)
 */

bool IsHwpNativeInterruptSupported()
{
  char v0; // bl
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v0 = 0;
  v3 = 0LL;
  GetCpuIdInfo(0, &v2);
  if ( (unsigned int)v2 >= 6 )
  {
    GetCpuIdInfo(6u, &v3);
    return (v3 & 0x180) == 384;
  }
  return v0;
}
