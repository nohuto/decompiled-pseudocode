/*
 * XREFs of IopAcquireGlobalPassiveInterruptListLock @ 0x1402C50B8
 * Callers:
 *     IopDereferencePassiveInterruptBlock @ 0x1402C4FA4 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x1402C5658 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x1404FEA90 (IopInsertPassiveInterruptBlock.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall IopAcquireGlobalPassiveInterruptListLock(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // rdi
  unsigned __int8 CurrentIrql; // bl

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 12LL);
  }
  *v1 = CurrentIrql;
  KxAcquireSpinLock(&PassiveInterruptListLock);
}
