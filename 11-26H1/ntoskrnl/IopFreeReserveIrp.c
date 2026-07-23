/*
 * XREFs of IopFreeReserveIrp @ 0x1405073A4
 * Callers:
 *     IopFreeIrp @ 0x140267B00 (IopFreeIrp.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x1405CD144 (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(__int64 a1, __int64 a2)
{
  struct _KEVENT *p_CurrentRunTime; // rcx

  *(_BYTE *)(a1 + 71) &= 0xDEu;
  if ( a1 == IopPerfIoTrackingLock.ThreadLock )
  {
    p_CurrentRunTime = (struct _KEVENT *)&IopPerfIoTrackingLock.CurrentRunTime;
    _InterlockedExchange((volatile __int32 *)&IopPerfIoTrackingLock.CycleTime, 0);
    return KeSetEvent(p_CurrentRunTime, 1, 0);
  }
  if ( (_KSCHEDULING_GROUP *volatile)a1 == IopPerfIoTrackingLock.SchedulingGroup )
  {
    p_CurrentRunTime = (struct _KEVENT *)((char *)&IopPerfIoTrackingLock.116 + 4);
    _InterlockedExchange((volatile __int32 *)&IopPerfIoTrackingLock.WaitRegister.Flags, 0);
    return KeSetEvent(p_CurrentRunTime, 1, 0);
  }
  if ( (_KTRAP_FRAME *)a1 == IopPerfIoTrackingLock.TrapFrame )
  {
    p_CurrentRunTime = (struct _KEVENT *)&IopPerfIoTrackingLock.ApcStateFill[8];
    _InterlockedExchange((volatile __int32 *)&IopPerfIoTrackingLock.152, 0);
    return KeSetEvent(p_CurrentRunTime, 1, 0);
  }
  LOBYTE(a2) = 1;
  return IopFreeBackpocketIrp(a1, a2);
}
