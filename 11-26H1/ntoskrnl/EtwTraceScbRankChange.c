/*
 * XREFs of EtwTraceScbRankChange @ 0x1406C4D3C
 * Callers:
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140444924 (KeSetSchedulingGroupRankBias.c)
 *     ?KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x140445624 (-KiUpdateCpuTargetByWeight@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     ?KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z @ 0x1404458E0 (-KiUpdateCpuTargetByRate@@YAXPEAU_KSCHEDULING_GROUP@@E@Z.c)
 *     KiProcessScbTracingList @ 0x14045BDA0 (KiProcessScbTracingList.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceScbRankChange(__int64 a1, int a2, int a3, char a4)
{
  _QWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]

  v6 = a1;
  v10 = 0;
  v7 = a2;
  v8 = a3;
  v5[1] = 24LL;
  v9 = a4 & 1;
  v5[0] = &v6;
  return EtwTraceKernelEvent((int)v5, 1, 0xA0004000, 1383, 6295298);
}
