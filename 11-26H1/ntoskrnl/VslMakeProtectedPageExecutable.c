/*
 * XREFs of VslMakeProtectedPageExecutable @ 0x1404AA7E4
 * Callers:
 *     KeSetPagePrivilege @ 0x1404AA600 (KeSetPagePrivilege.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall VslMakeProtectedPageExecutable(__int64 a1, __int64 a2, int a3)
{
  _BYTE v7[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+28h] [rbp-80h]
  __int64 v9; // [rsp+30h] [rbp-78h]
  BOOL v10; // [rsp+48h] [rbp-60h]

  memset_0(v7, 0, 0x68uLL);
  v8 = a1;
  v9 = a2;
  v10 = a3 != 0;
  return VslpEnterIumSecureMode(2u, 0x10Au, 0, (__int64)v7);
}
