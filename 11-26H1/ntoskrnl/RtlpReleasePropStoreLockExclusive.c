/*
 * XREFs of RtlpReleasePropStoreLockExclusive @ 0x14061DA3C
 * Callers:
 *     RtlCompareExchangePointerMapping @ 0x14061D2D0 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x14061D420 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x14061D7B0 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x14061D890 (RtlRemovePropertyStore.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall RtlpReleasePropStoreLockExclusive(volatile LONG *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  ExReleaseSpinLockExclusiveFromDpcLevel(a1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
}
