/*
 * XREFs of HsaHandleInterrupt @ 0x1405A9EB0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

bool __fastcall HsaHandleInterrupt(__int64 a1)
{
  __int64 v2; // rax
  bool v3; // si
  unsigned __int8 CurrentIrql; // bl

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 8224LL);
  v3 = (*(_BYTE *)(a1 + 18) & 4) != 0 && (v2 & 0x60) != 0;
  if ( (v2 & 3) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 356));
    if ( !*(_BYTE *)(a1 + 352) )
      *(_BYTE *)(a1 + 352) = KiInsertQueueDpc(a1 + 256, 0LL, 0LL, 0LL, 0);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 356));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v3;
}
