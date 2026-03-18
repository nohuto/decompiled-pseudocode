/*
 * XREFs of ExpPrmWaitForForZeroActiveCount @ 0x1406CFF00
 * Callers:
 *     ExpPrmNotifyInterfaceChange @ 0x14083EEE0 (ExpPrmNotifyInterfaceChange.c)
 *     ExpPrmTargetDeviceChangeCallback @ 0x14083EFD0 (ExpPrmTargetDeviceChangeCallback.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 */

__int64 ExpPrmWaitForForZeroActiveCount()
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = -10000LL;
  while ( 1 )
  {
    result = HIDWORD(ExSaPageGroupDescriptorArrayLock.MutantListHead.Flink);
    if ( !HIDWORD(ExSaPageGroupDescriptorArrayLock.MutantListHead.Flink) )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
