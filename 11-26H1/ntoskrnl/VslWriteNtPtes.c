/*
 * XREFs of VslWriteNtPtes @ 0x1405C6C8C
 * Callers:
 *     MiTransformValidPteInPlace @ 0x1403444D8 (MiTransformValidPteInPlace.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslWriteNtPtes(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _BYTE v8[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v9; // [rsp+28h] [rbp-90h]
  int v10; // [rsp+30h] [rbp-88h]
  __int64 v11; // [rsp+38h] [rbp-80h]
  __int64 v12; // [rsp+40h] [rbp-78h]

  memset_0(v8, 0, 0x68uLL);
  v9 = a1;
  v11 = 0LL;
  v10 = a2;
  v12 = a4;
  return VslpEnterIumSecureMode(2u, 0x113u, 0, (__int64)v8);
}
