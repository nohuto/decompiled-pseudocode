/*
 * XREFs of VslRequestSecureThreadExit @ 0x1405C3EA8
 * Callers:
 *     KeRequestTerminationThread @ 0x1402C5B58 (KeRequestTerminationThread.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslRequestSecureThreadExit(__int64 a1)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]
  __int64 v5; // [rsp+30h] [rbp-78h]

  memset_0(v3, 0, 0x68uLL);
  v4 = *(unsigned int *)(a1 + 796);
  v5 = a1;
  return VslpEnterIumSecureMode(2u, 9u, 0, (__int64)v3);
}
