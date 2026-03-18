/*
 * XREFs of VslIsTrustletRunning @ 0x1404B4248
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslIsTrustletRunning(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  char v7; // [rsp+30h] [rbp-78h]

  memset_0(v5, 0, 0x68uLL);
  v6 = a1;
  result = VslpEnterIumSecureMode(2u, 0x15u, 0, (__int64)v5);
  *a2 = v7;
  return result;
}
