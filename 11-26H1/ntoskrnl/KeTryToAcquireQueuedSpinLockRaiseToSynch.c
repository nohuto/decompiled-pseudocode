/*
 * XREFs of KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1405F04C0
 * Callers:
 *     DifKeTryToAcquireQueuedSpinLockRaiseToSynchWrapper @ 0x140664C60 (DifKeTryToAcquireQueuedSpinLockRaiseToSynchWrapper.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x14048FC34 (KxTryToAcquireQueuedSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeTryToAcquireQueuedSpinLockRaiseToSynch(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // bl
  char *v5; // rcx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  v5 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * a1;
  if ( (unsigned int)KxTryToAcquireQueuedSpinLock((signed __int64)v5, *((_QWORD **)v5 + 1)) )
  {
    *a2 = CurrentIrql;
    return 1LL;
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0LL;
  }
}
