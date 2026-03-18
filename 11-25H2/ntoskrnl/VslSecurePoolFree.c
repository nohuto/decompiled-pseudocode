/*
 * XREFs of VslSecurePoolFree @ 0x14058ADB0
 * Callers:
 *     ExFreePool2 @ 0x1406481E0 (ExFreePool2.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslSecurePoolFree(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  _BYTE v9[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+28h] [rbp-80h]
  __int64 v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+38h] [rbp-70h]
  __int64 v13; // [rsp+40h] [rbp-68h]

  v4 = a2;
  memset_0(v9, 0, 0x68uLL);
  v10 = a1;
  v11 = a3;
  v12 = a4;
  v13 = v4;
  return VslpEnterIumSecureMode(2u, 0x56u, 0, (__int64)v9);
}
