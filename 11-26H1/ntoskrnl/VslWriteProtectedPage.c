/*
 * XREFs of VslWriteProtectedPage @ 0x1405C6D10
 * Callers:
 *     MiDbgCopyPrivilegedData @ 0x14070297C (MiDbgCopyPrivilegedData.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslWriteProtectedPage(__int64 a1, __int128 *a2, int a3, __int64 a4, int a5)
{
  __int128 v9; // xmm0
  _BYTE v11[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-A0h]
  __int128 v13; // [rsp+30h] [rbp-98h]
  int v14; // [rsp+40h] [rbp-88h]
  int v15; // [rsp+44h] [rbp-84h]
  __int64 v16; // [rsp+48h] [rbp-80h]

  memset_0(v11, 0, 0x68uLL);
  v9 = *a2;
  v12 = a1;
  v14 = a3;
  v16 = a4;
  v13 = v9;
  v15 = a5;
  return VslpEnterIumSecureMode(2u, 0x105u, 0, (__int64)v11);
}
