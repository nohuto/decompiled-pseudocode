/*
 * XREFs of StorpTelemetryGetUnitQueueCounters @ 0x140049DC0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall StorpTelemetryGetUnitQueueCounters(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 result; // rax

  if ( a3 >= 8 )
  {
    memset_0(a2, 0, a3);
    *a2 = (*(__int64 *)(a1 + 808) >> 2) & 0x3FFFFFFF;
    result = *(_QWORD *)(a1 + 808) / 0x100000000LL;
    a2[1] = result;
  }
  return result;
}
