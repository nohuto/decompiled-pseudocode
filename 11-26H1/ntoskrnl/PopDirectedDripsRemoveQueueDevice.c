/*
 * XREFs of PopDirectedDripsRemoveQueueDevice @ 0x14077BAB0
 * Callers:
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x14077151C (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsFlushDeviceQueue @ 0x1407E2998 (PopDirectedDripsFlushDeviceQueue.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PopDirectedDripsRemoveQueueDevice(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // rdx

  result = *(_QWORD **)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v2 = *result, *(_QWORD **)(*result + 8LL) != result) )
    __fastfail(3u);
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(v2 + 8) = a1;
  result[1] = result;
  *result = result;
  return result;
}
