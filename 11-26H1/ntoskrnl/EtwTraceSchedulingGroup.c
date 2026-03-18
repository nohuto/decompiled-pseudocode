/*
 * XREFs of EtwTraceSchedulingGroup @ 0x1406C4E5C
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140444924 (KeSetSchedulingGroupRankBias.c)
 *     KeInsertSchedulingGroup @ 0x140444BD0 (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupWeights @ 0x14044506C (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1404452DC (KeSetSchedulingGroupCpuRates.c)
 *     KeRemoveSchedulingGroup @ 0x1404C61B4 (KeRemoveSchedulingGroup.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     EtwpConstructSchedulingGroupEvent @ 0x1406C54EC (EtwpConstructSchedulingGroupEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceSchedulingGroup(__int64 a1)
{
  __int16 v1; // r10
  _QWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v4; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  EtwpConstructSchedulingGroupEvent(&v4, a1);
  v3[1] = 24LL;
  v3[0] = &v4;
  return EtwTraceKernelEvent((int)v3, 1, 0xA0004000, v1, 6297858);
}
