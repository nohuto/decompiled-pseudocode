/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x1402FF4B0
 * Callers:
 *     KeTerminateThread @ 0x140203468 (KeTerminateThread.c)
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x14027183C (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     WmipNotificationIrpCancel @ 0x1403FBA80 (WmipNotificationIrpCancel.c)
 *     IvtIommuWaitCommand @ 0x140434918 (IvtIommuWaitCommand.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1405F2CD0 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1405F2D40 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxAcquireQueuedSpinLock(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  __int64 result; // rax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
    return KiAcquireQueuedSpinLockInstrumented(a1, a2);
  result = _InterlockedExchange64(a2, a1);
  if ( result )
    return KxWaitForLockOwnerShip(a1, result, a3);
  return result;
}
