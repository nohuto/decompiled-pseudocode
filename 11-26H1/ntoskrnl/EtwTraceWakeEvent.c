/*
 * XREFs of EtwTraceWakeEvent @ 0x14077D224
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x14098F2A0 (PspChargeProcessWakeCounter.c)
 *     PspSendWakeNotification @ 0x140A88408 (PspSendWakeNotification.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceWakeEvent(__int64 a1, __int16 a2)
{
  _QWORD v3[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  v3[1] = 8LL;
  v3[0] = &v4;
  return EtwTraceKernelEvent((int)v3, 1, 0x80000400, a2 + 864, 6297858);
}
