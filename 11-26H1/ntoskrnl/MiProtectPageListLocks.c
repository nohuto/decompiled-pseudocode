/*
 * XREFs of MiProtectPageListLocks @ 0x1406F0A18
 * Callers:
 *     MiInitializePartition @ 0x140869360 (MiInitializePartition.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
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
