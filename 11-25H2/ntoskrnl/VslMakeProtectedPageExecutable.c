/*
 * XREFs of VslMakeProtectedPageExecutable @ 0x1402CF124
 * Callers:
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     KeSetPagePrivilege @ 0x1402CE1B0 (KeSetPagePrivilege.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  return VslpEnterIumSecureMode(2u, 0xFAu, 0, (__int64)v7);
}
