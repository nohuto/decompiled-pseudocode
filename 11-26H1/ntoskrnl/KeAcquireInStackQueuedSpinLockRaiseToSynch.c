/*
 * XREFs of KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1405F0360
 * Callers:
 *     DifKeAcquireInStackQueuedSpinLockRaiseToSynchWrapper @ 0x14065FE00 (DifKeAcquireInStackQueuedSpinLockRaiseToSynchWrapper.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1402B47E0 (KxAcquireQueuedSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeAcquireInStackQueuedSpinLockRaiseToSynch(volatile __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di

  *(_QWORD *)(a2 + 8) = a1;
  *(_QWORD *)a2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  *(_BYTE *)(a2 + 16) = CurrentIrql;
  return KxAcquireQueuedSpinLock(a2, a1, a3);
}
