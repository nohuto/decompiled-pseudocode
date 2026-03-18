/*
 * XREFs of VslRundownSecureProcess @ 0x1407041FC
 * Callers:
 *     KeRundownSecureProcess @ 0x1405B4528 (KeRundownSecureProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslRundownSecureProcess(__int64 a1)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  memset_0(v3, 0, 0x68uLL);
  v4 = a1;
  return VslpEnterIumSecureMode(2u, 0xBu, 0, (__int64)v3);
}
