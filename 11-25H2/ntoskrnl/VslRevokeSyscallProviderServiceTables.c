/*
 * XREFs of VslRevokeSyscallProviderServiceTables @ 0x140704194
 * Callers:
 *     PsRegisterSyscallProvider @ 0x140761520 (PsRegisterSyscallProvider.c)
 *     PspDestroySyscallProvider @ 0x140761834 (PspDestroySyscallProvider.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall VslRevokeSyscallProviderServiceTables(__int64 a1)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  memset_0(v3, 0, 0x68uLL);
  v4 = a1;
  return VslpEnterIumSecureMode(2u, 0x5Bu, 0, (__int64)v3);
}
