/*
 * XREFs of VslRemoveProtectedPage @ 0x1402CE210
 * Callers:
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     KeSetPagePrivilege @ 0x1402CE1B0 (KeSetPagePrivilege.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  return VslpEnterIumSecureMode(2u, 0xF3u, 0, (__int64)v8);
}
