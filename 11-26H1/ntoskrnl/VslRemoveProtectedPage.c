/*
 * XREFs of VslRemoveProtectedPage @ 0x1404AA660
 * Callers:
 *     KeSetPagePrivilege @ 0x1404AA600 (KeSetPagePrivilege.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslRemoveProtectedPage(__int64 a1, __int128 *a2, int a3)
{
  __int128 v6; // xmm0
  _BYTE v8[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v9; // [rsp+28h] [rbp-90h]
  __int128 v10; // [rsp+38h] [rbp-80h]
  int v11; // [rsp+48h] [rbp-70h]

  memset_0(v8, 0, 0x68uLL);
  v6 = *a2;
  v9 = a1;
  v11 = a3;
  v10 = v6;
  return VslpEnterIumSecureMode(2u, 0x103u, 0, (__int64)v8);
}
