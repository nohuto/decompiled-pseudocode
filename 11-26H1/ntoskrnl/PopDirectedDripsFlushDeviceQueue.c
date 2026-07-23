/*
 * XREFs of PopDirectedDripsFlushDeviceQueue @ 0x1407E7A28
 * Callers:
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x14077451C (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140B0D6D8 (PopDirectedDripsBuildBroadcastTreeFull.c)
 * Callees:
 *     PopDirectedDripsRemoveQueueDevice @ 0x14077E6F0 (PopDirectedDripsRemoveQueueDevice.c)
 */

_QWORD *__fastcall PopDirectedDripsFlushDeviceQueue(_QWORD *a1)
{
  _QWORD *i; // r8
  _QWORD *result; // rax

  for ( i = a1; (_QWORD *)*i != i; result = PopDirectedDripsRemoveQueueDevice((__int64)i) )
    ;
  return result;
}
