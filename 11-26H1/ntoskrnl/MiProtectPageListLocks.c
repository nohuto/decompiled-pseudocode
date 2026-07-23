/*
 * XREFs of MiProtectPageListLocks @ 0x1406F5688
 * Callers:
 *     MiInitializePartition @ 0x14086F740 (MiInitializePartition.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

char __fastcall MiProtectPageListLocks(__int64 a1)
{
  unsigned __int64 v2; // rdi
  char result; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 23264));
  result = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 3552));
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
  return result;
}
