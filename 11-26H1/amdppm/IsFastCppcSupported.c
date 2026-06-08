/*
 * XREFs of IsFastCppcSupported @ 0x140004850
 * Callers:
 *     GetCppcRequestMsrPerfControlHandler @ 0x140023CC0 (GetCppcRequestMsrPerfControlHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x14000E620 (GetCpuIdInfo.c)
 */

bool IsFastCppcSupported()
{
  char v0; // bl
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v0 = 0;
  v3 = 0LL;
  GetCpuIdInfo(0x80000000LL, &v2);
  if ( (unsigned int)v2 >= 0x80000007 )
  {
    GetCpuIdInfo(2147483655LL, &v3);
    return (WORD6(v3) & 0x8000) != 0;
  }
  return v0;
}
