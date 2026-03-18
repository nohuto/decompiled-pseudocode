/*
 * XREFs of MiSlabDemotionLowMemoryConditionUpdate @ 0x1403E5C8C
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x1402A7510 (MiFreeUnusedSlabPages.c)
 *     MiInsertPagesInList @ 0x1402CD600 (MiInsertPagesInList.c)
 *     MiInsertPageLockStandbyList @ 0x1402DEE20 (MiInsertPageLockStandbyList.c)
 *     MiDecreaseAvailablePages @ 0x1402F8CD0 (MiDecreaseAvailablePages.c)
 *     MiIncreaseAvailablePages @ 0x1403E59D0 (MiIncreaseAvailablePages.c)
 * Callees:
 *     MiGetSlabCurrentTime @ 0x1402073A0 (MiGetSlabCurrentTime.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiSlabDemotionLowMemoryConditionUpdate(__int64 a1, int a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v4; // rax

  v2 = a1;
  CurrentIrql = 17;
  if ( !a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 16576));
  v4 = *(_QWORD *)(v2 + 22464);
  if ( v4 >= 0x120 )
  {
    *(_QWORD *)(v2 + 22160) = 0LL;
  }
  else if ( v4 < 0x32 && !*(_QWORD *)(v2 + 22160) )
  {
    *(_QWORD *)(v2 + 22160) = MiGetSlabCurrentTime();
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 16576));
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
}
