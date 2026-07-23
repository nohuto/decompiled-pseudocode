/*
 * XREFs of IopFreeBackpocketIrp @ 0x1405CD144
 * Callers:
 *     IopFreeReserveIrp @ 0x1405073A4 (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

unsigned int __fastcall IopFreeBackpocketIrp(_KPROCESS *a1, char a2)
{
  struct _KEVENT *p_WaitBlockList; // rcx
  unsigned int result; // eax

  if ( a1 == IopPerfIoTrackingLock.ApcState.Process )
  {
    p_WaitBlockList = (struct _KEVENT *)&IopPerfIoTrackingLock.WaitBlockList;
    IopPerfIoTrackingLock.WaitStatus = 0LL;
    _InterlockedExchange((volatile __int32 *)&IopPerfIoTrackingLock.ApcStateFill[40], 0);
    return KeSetEvent(p_WaitBlockList, a2, 0);
  }
  if ( a1 == (_KPROCESS *)IopPerfIoTrackingLock.Queue )
  {
    p_WaitBlockList = (struct _KEVENT *)&IopPerfIoTrackingLock.Timer;
    IopPerfIoTrackingLock.RelativeTimerBias = 0LL;
    _InterlockedExchange((volatile __int32 *)&IopPerfIoTrackingLock.Teb, 0);
    return KeSetEvent(p_WaitBlockList, a2, 0);
  }
  result = IopPerfIoTrackingLock.Timer.DueTime.LowPart;
  *(_QWORD *)&a1->Header.Lock = IopPerfIoTrackingLock.Timer.DueTime.QuadPart;
  IopPerfIoTrackingLock.Timer.DueTime.QuadPart = (unsigned __int64)a1;
  return result;
}
