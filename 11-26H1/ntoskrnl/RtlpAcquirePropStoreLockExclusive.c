/*
 * XREFs of RtlpAcquirePropStoreLockExclusive @ 0x14061A930
 * Callers:
 *     RtlCompareExchangePointerMapping @ 0x14061A280 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x14061A3D0 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x14061A760 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x14061A840 (RtlRemovePropertyStore.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall RtlpAcquirePropStoreLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
  return CurrentIrql;
}
