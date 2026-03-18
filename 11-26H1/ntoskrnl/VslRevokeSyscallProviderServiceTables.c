/*
 * XREFs of VslRevokeSyscallProviderServiceTables @ 0x140792B3C
 * Callers:
 *     PsRegisterSyscallProvider @ 0x1407ED420 (PsRegisterSyscallProvider.c)
 *     PspDestroySyscallProvider @ 0x1407ED6D8 (PspDestroySyscallProvider.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslRevokeSyscallProviderServiceTables(__int64 a1)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  memset_0(v3, 0, 0x68uLL);
  v4 = a1;
  return VslpEnterIumSecureMode(2u, 0x5Cu, 0, (__int64)v3);
}
