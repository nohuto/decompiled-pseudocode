/*
 * XREFs of IoInitializeTimer @ 0x140798FB0
 * Callers:
 *     DifIoInitializeTimerWrapper @ 0x140660A50 (DifIoInitializeTimerWrapper.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x1403E1640 (ExInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoInitializeTimer(PDEVICE_OBJECT DeviceObject, PIO_TIMER_ROUTINE TimerRoutine, PVOID Context)
{
  PIO_TIMER Timer; // rax

  Timer = DeviceObject->Timer;
  if ( !Timer )
  {
    Timer = (PIO_TIMER)ExAllocatePool2(0x40uLL);
    if ( !Timer )
      return -1073741670;
    Timer->Type = 9;
    Timer->DeviceObject = DeviceObject;
    DeviceObject->Timer = Timer;
  }
  Timer->TimerRoutine = (void (__fastcall *)(_DEVICE_OBJECT *, void *))TimerRoutine;
  Timer->Context = Context;
  ExInterlockedInsertTailList((PLIST_ENTRY)&IopPerfIoTrackingLock.WaitBlockFill11[64], &Timer->TimerList, &IopTimerLock);
  return 0;
}
