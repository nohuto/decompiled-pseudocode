/*
 * XREFs of IsProcGV3Capable @ 0x140005E24
 * Callers:
 *     ValidatePStateCapability @ 0x14002B0A0 (ValidatePStateCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x140010330 (GetCpuIdInfo.c)
 */

bool IsProcGV3Capable()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  GetCpuIdInfo(1LL, &v1);
  return (BYTE8(v1) & 0x80) != 0;
}
