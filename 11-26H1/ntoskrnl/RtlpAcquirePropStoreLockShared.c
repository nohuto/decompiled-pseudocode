/*
 * XREFs of RtlpAcquirePropStoreLockShared @ 0x14061A97C
 * Callers:
 *     RtlQueryPointerMapping @ 0x14061A600 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x14061A6C0 (RtlQueryPropertyStore.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall RtlpAcquirePropStoreLockShared(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  ExAcquireSpinLockSharedAtDpcLevel(SpinLock);
  return CurrentIrql;
}
