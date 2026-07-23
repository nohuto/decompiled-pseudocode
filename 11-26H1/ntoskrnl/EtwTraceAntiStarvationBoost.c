/*
 * XREFs of EtwTraceAntiStarvationBoost @ 0x140531784
 * Callers:
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiNormalPriorityReadyScan @ 0x1403C90A4 (KiNormalPriorityReadyScan.c)
 *     KiScanSharedReadyThreads @ 0x1403C93BC (KiScanSharedReadyThreads.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 */

__int64 __fastcall EtwTraceAntiStarvationBoost(__int64 a1, char a2, char a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+50h] [rbp+8h] BYREF
  __int16 v6; // [rsp+54h] [rbp+Ch]
  char v7; // [rsp+56h] [rbp+Eh]
  char v8; // [rsp+57h] [rbp+Fh]

  v5 = *(_DWORD *)(a1 + 1296);
  v6 = *(_DWORD *)(a1 + 536);
  v7 = a2;
  v8 = a3;
  v4[0] = &v5;
  v4[1] = 8LL;
  return EtwTraceKernelEvent((int)v4, 1, 0x40000001u, 1340, 5249026);
}
