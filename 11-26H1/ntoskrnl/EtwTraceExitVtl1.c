/*
 * XREFs of EtwTraceExitVtl1 @ 0x1404DFCF4
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceExitVtl1(__int16 a1, __int16 a2)
{
  _WORD v3[4]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v4[2]; // [rsp+38h] [rbp-20h] BYREF

  v3[1] = a2;
  v3[0] = a1;
  v4[0] = v3;
  v4[1] = 4LL;
  return EtwTraceKernelEvent((int)v4, 1, 0xA0000008, 1354, 5249282);
}
