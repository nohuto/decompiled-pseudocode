/*
 * XREFs of SiGetFirmwareType @ 0x140AE9454
 * Callers:
 *     SiGetSystemDeviceName @ 0x140AE9378 (SiGetSystemDeviceName.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140723AB0 (ZwQuerySystemInformation.c)
 */

__int64 SiGetFirmwareType()
{
  unsigned int v0; // ebx
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h]

  v0 = 1;
  v2 = 0LL;
  v3 = 0LL;
  if ( (int)ZwQuerySystemInformation(90LL, (__int64)&v2) >= 0 )
  {
    v0 = 0;
    if ( (int)v3 < 3 )
      return (unsigned int)v3;
  }
  return v0;
}
