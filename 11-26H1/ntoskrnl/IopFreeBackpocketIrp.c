/*
 * XREFs of IopFreeBackpocketIrp @ 0x1405CA874
 * Callers:
 *     IopFreeReserveIrp @ 0x14050D934 (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(_QWORD *a1, char a2)
{
  struct _KEVENT *p_InGlobalUpdateVpThreadPriorityList; // rcx
  LONG result; // eax

  if ( a1 == (_QWORD *)IopSessionNotificationLock.KernelWaitTime )
  {
    p_InGlobalUpdateVpThreadPriorityList = (struct _KEVENT *)&IopSessionNotificationLock.InGlobalUpdateVpThreadPriorityList;
    IopSessionNotificationLock.GlobalUpdateVpThreadPriorityListEntry.Flink = 0LL;
    _InterlockedExchange((volatile __int32 *)&IopSessionNotificationLock.UserWaitTime, 0);
    return KeSetEvent(p_InGlobalUpdateVpThreadPriorityList, a2, 0);
  }
  if ( a1 == IopSessionNotificationLock.KernelShadowStackInitial )
  {
    p_InGlobalUpdateVpThreadPriorityList = (struct _KEVENT *)&IopSessionNotificationLock.ExtendedFeatureDisableMask;
    IopSessionNotificationLock.KernelShadowStackLimit.AllFields = 0LL;
    _InterlockedExchange((volatile __int32 *)&IopSessionNotificationLock.KernelShadowStackBase, 0);
    return KeSetEvent(p_InGlobalUpdateVpThreadPriorityList, a2, 0);
  }
  result = IopSessionNotificationLock.Spare35[1];
  *a1 = IopSessionNotificationLock.Spare35[1];
  IopSessionNotificationLock.Spare35[1] = (unsigned __int64)a1;
  return result;
}
