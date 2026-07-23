/*
 * XREFs of HsaHandleInterrupt @ 0x1405AC6C0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
