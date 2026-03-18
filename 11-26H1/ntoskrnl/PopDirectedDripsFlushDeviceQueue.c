/*
 * XREFs of PopDirectedDripsFlushDeviceQueue @ 0x1407E2998
 * Callers:
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x14077151C (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140B0BCE4 (PopDirectedDripsBuildBroadcastTreeFull.c)
 * Callees:
 *     PopDirectedDripsRemoveQueueDevice @ 0x14077BAB0 (PopDirectedDripsRemoveQueueDevice.c)
 */

_QWORD *__fastcall PopDirectedDripsFlushDeviceQueue(_QWORD *a1)
{
  _QWORD *i; // r8
  _QWORD *result; // rax

  for ( i = a1; (_QWORD *)*i != i; result = PopDirectedDripsRemoveQueueDevice((__int64)i) )
    ;
  return result;
}
