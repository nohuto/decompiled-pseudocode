/*
 * XREFs of RtlpReleasePropStoreLockExclusive @ 0x14061A9EC
 * Callers:
 *     RtlCompareExchangePointerMapping @ 0x14061A280 (RtlCompareExchangePointerMapping.c)
 *     RtlCompareExchangePropertyStore @ 0x14061A3D0 (RtlCompareExchangePropertyStore.c)
 *     RtlRemovePointerMapping @ 0x14061A760 (RtlRemovePointerMapping.c)
 *     RtlRemovePropertyStore @ 0x14061A840 (RtlRemovePropertyStore.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
