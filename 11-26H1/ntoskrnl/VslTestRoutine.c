/*
 * XREFs of VslTestRoutine @ 0x1405C6B50
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslTestRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v9[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+28h] [rbp-80h]
  __int64 v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+38h] [rbp-70h]
  __int64 v13; // [rsp+40h] [rbp-68h]

  memset_0(v9, 0, 0x68uLL);
  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  return VslpEnterIumSecureMode(2u, 0x700u, 0, (__int64)v9);
}
