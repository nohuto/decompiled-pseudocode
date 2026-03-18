/*
 * XREFs of PnpAllocateCriticalMemory @ 0x140912A94
 * Callers:
 *     PnpQueueQueryAndRemoveEvent @ 0x14090AD94 (PnpQueueQueryAndRemoveEvent.c)
 *     IopAllocateRelationList @ 0x140911808 (IopAllocateRelationList.c)
 *     PnpCompileDeviceInstancePaths @ 0x14091186C (PnpCompileDeviceInstancePaths.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 *     PiEventAllocateVetoBuffer @ 0x1409126EC (PiEventAllocateVetoBuffer.c)
 *     PnpResizeTargetDeviceBlock @ 0x140912950 (PnpResizeTargetDeviceBlock.c)
 *     PiAllocateDeviceObjectList @ 0x140912A20 (PiAllocateDeviceObjectList.c)
 *     PiProcessQueryAndCancelRemoval @ 0x1409135AC (PiProcessQueryAndCancelRemoval.c)
 *     PnpRequestDeviceRemoval @ 0x14091493C (PnpRequestDeviceRemoval.c)
 *     PnpSetTargetDeviceRemove @ 0x140B2E86C (PnpSetTargetDeviceRemove.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateCriticalMemory(int a1, ULONG_PTR a2)
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-18h] BYREF

  result = ExAllocatePool2(a2);
  if ( !result && a1 )
  {
    do
    {
      if ( a1 == 4 )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      result = ExAllocatePool2(a2);
    }
    while ( !result );
  }
  return result;
}
