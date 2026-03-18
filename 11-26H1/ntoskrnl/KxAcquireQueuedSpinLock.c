/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x1402B47E0
 * Callers:
 *     KeTerminateThread @ 0x140203388 (KeTerminateThread.c)
 *     IoBoostThreadIoPriority @ 0x140205ACC (IoBoostThreadIoPriority.c)
 *     ?KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z @ 0x1402722CC (-KiAbEntryRemoveFromTree@LegacyAutoBoost@@YAXPEAU_KLOCK_ENTRY@@@Z.c)
 *     WmipNotificationIrpCancel @ 0x1403FFCE0 (WmipNotificationIrpCancel.c)
 *     IvtIommuWaitCommand @ 0x140427808 (IvtIommuWaitCommand.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1405F0360 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1405F03D0 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxAcquireQueuedSpinLock(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  __int64 result; // rax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
    return KiAcquireQueuedSpinLockInstrumented(a1, a2);
  result = _InterlockedExchange64(a2, a1);
  if ( result )
    return KxWaitForLockOwnerShip(a1, result, a3);
  return result;
}
