/*
 * XREFs of EtwTraceXSchedulerPriorityKickReceive @ 0x1406C9004
 * Callers:
 *     KeSetThreadSchedulerAssist @ 0x1403C99B8 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 */

__int64 __fastcall EtwTraceXSchedulerPriorityKickReceive(__int64 a1, int a2)
{
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF
  int v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+54h] [rbp+Ch]

  v4 = *(_DWORD *)(a1 + 1296);
  v5 = a2;
  v3[0] = &v4;
  v3[1] = 8LL;
  return EtwTraceKernelEvent((int)v3, 1, 0xA0000020, 3956, 514);
}
