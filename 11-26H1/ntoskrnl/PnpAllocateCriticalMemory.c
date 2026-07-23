/*
 * XREFs of PnpAllocateCriticalMemory @ 0x1409B4B74
 * Callers:
 *     PnpRequestDeviceRemoval @ 0x14096F3A8 (PnpRequestDeviceRemoval.c)
 *     IopAllocateRelationList @ 0x1409B38E8 (IopAllocateRelationList.c)
 *     PnpCompileDeviceInstancePaths @ 0x1409B394C (PnpCompileDeviceInstancePaths.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 *     PiEventAllocateVetoBuffer @ 0x1409B47CC (PiEventAllocateVetoBuffer.c)
 *     PnpResizeTargetDeviceBlock @ 0x1409B4A30 (PnpResizeTargetDeviceBlock.c)
 *     PiAllocateDeviceObjectList @ 0x1409B4B00 (PiAllocateDeviceObjectList.c)
 *     PiProcessQueryAndCancelRemoval @ 0x1409B568C (PiProcessQueryAndCancelRemoval.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1409B5DE4 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpSetTargetDeviceRemove @ 0x1409B6C04 (PnpSetTargetDeviceRemove.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
