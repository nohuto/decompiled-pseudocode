/*
 * XREFs of SmHwAcceleratorPartitionMgrWakeDescriptorWaiters @ 0x140643C0C
 * Callers:
 *     SmHwAcceleratorPartitionMgrFreeDescriptor @ 0x14043C534 (SmHwAcceleratorPartitionMgrFreeDescriptor.c)
 *     SmHwAcceleratorMgrHotRemoveAccelerator @ 0x140643798 (SmHwAcceleratorMgrHotRemoveAccelerator.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

LONG __fastcall SmHwAcceleratorPartitionMgrWakeDescriptorWaiters(__int64 *a1)
{
  __int64 v2; // rcx
  LONG result; // eax

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    *a1 = *(_QWORD *)v2;
    result = KeSetEvent((PRKEVENT)(v2 + 8), 0, 0);
  }
  return result;
}
