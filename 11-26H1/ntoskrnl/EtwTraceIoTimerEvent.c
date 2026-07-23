/*
 * XREFs of EtwTraceIoTimerEvent @ 0x1406C864C
 * Callers:
 *     IopDisableTimer @ 0x1405CCFD0 (IopDisableTimer.c)
 *     IopEnableTimer @ 0x1405CD05C (IopEnableTimer.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 */

__int64 __fastcall EtwTraceIoTimerEvent(__int16 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF

  v5[1] = a3;
  v5[0] = a2;
  v4[0] = v5;
  v4[1] = 16LL;
  return EtwTraceKernelEvent((int)v4, 1, 0x40800000u, a1, 6297602);
}
