/*
 * XREFs of RtlpReleasePropStoreLockShared @ 0x14061DA70
 * Callers:
 *     RtlQueryPointerMapping @ 0x14061D650 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x14061D710 (RtlQueryPropertyStore.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall RtlpReleasePropStoreLockShared(volatile LONG *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  ExReleaseSpinLockSharedFromDpcLevel(a1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
}
