/*
 * XREFs of PerfInfoLogUnexpectedInterrupt @ 0x1406C9D30
 * Callers:
 *     KxIsrLinkage @ 0x1407307F0 (KxIsrLinkage.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 */

__int64 __fastcall PerfInfoLogUnexpectedInterrupt(int a1)
{
  _QWORD v2[3]; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1;
  v2[1] = 2LL;
  v2[0] = &v3;
  return EtwTraceKernelEvent((int)v2, 1, 0x20004000u, 3932, 5245442);
}
