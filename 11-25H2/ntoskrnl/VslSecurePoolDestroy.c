/*
 * XREFs of VslSecurePoolDestroy @ 0x14058AD48
 * Callers:
 *     ExDestroyPool @ 0x140648130 (ExDestroyPool.c)
 *     ExpSecurePoolCreate @ 0x14064C6C0 (ExpSecurePoolCreate.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslSecurePoolDestroy(__int64 a1)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  memset_0(v3, 0, 0x68uLL);
  v4 = a1;
  return VslpEnterIumSecureMode(2u, 0x54u, 0, (__int64)v3);
}
