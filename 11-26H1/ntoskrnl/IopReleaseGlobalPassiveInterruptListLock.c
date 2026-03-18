/*
 * XREFs of IopReleaseGlobalPassiveInterruptListLock @ 0x1402C507C
 * Callers:
 *     IopDereferencePassiveInterruptBlock @ 0x1402C4FA4 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x1402C5658 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x1404FEA90 (IopInsertPassiveInterruptBlock.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 */

void __fastcall IopReleaseGlobalPassiveInterruptListLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  KxReleaseSpinLock(&PassiveInterruptListLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v1);
  __writecr8(v1);
}
