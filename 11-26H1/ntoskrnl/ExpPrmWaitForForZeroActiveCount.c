/*
 * XREFs of ExpPrmWaitForForZeroActiveCount @ 0x1406D3F30
 * Callers:
 *     ExpPrmNotifyInterfaceChange @ 0x140845120 (ExpPrmNotifyInterfaceChange.c)
 *     ExpPrmTargetDeviceChangeCallback @ 0x140845210 (ExpPrmTargetDeviceChangeCallback.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 */

__int64 ExpPrmWaitForForZeroActiveCount()
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = -10000LL;
  while ( 1 )
  {
    result = HIDWORD(ExSaPageGroupDescriptorArrayLock.IoSelfBoostsEntry.Next);
    if ( !HIDWORD(ExSaPageGroupDescriptorArrayLock.IoSelfBoostsEntry.Next) )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
