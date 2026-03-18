/*
 * XREFs of IopFreeReserveIrp @ 0x14050D934
 * Callers:
 *     IopFreeIrp @ 0x140268590 (IopFreeIrp.c)
 *     IoFreeIrp @ 0x140268860 (IoFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x1405CA874 (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(__int64 a1, __int64 a2)
{
  struct _KEVENT *p_InGlobalForegroundList; // rcx

  *(_BYTE *)(a1 + 71) &= 0xDEu;
  if ( a1 == *(_QWORD *)&IopSessionNotificationLock.ForegroundLossTime )
  {
    p_InGlobalForegroundList = (struct _KEVENT *)&IopSessionNotificationLock.InGlobalForegroundList;
    _InterlockedExchange((volatile __int32 *)&IopSessionNotificationLock.880, 0);
    return KeSetEvent(p_InGlobalForegroundList, 1, 0);
  }
  if ( a1 == IopSessionNotificationLock.OtherOperationCount )
  {
    p_InGlobalForegroundList = (struct _KEVENT *)&IopSessionNotificationLock.WriteTransferCount;
    _InterlockedExchange((volatile __int32 *)&IopSessionNotificationLock.ReadTransferCount, 0);
    return KeSetEvent(p_InGlobalForegroundList, 1, 0);
  }
  if ( a1 == *(_QWORD *)&IopSessionNotificationLock.ThreadTimerDelay )
  {
    p_InGlobalForegroundList = (struct _KEVENT *)&IopSessionNotificationLock.SchedulerAssist;
    _InterlockedExchange((volatile __int32 *)IopSessionNotificationLock.TracingPrivate, 0);
    return KeSetEvent(p_InGlobalForegroundList, 1, 0);
  }
  LOBYTE(a2) = 1;
  return IopFreeBackpocketIrp(a1, a2);
}
