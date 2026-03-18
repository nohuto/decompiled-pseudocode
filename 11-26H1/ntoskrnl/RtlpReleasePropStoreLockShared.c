/*
 * XREFs of RtlpReleasePropStoreLockShared @ 0x14061AA20
 * Callers:
 *     RtlQueryPointerMapping @ 0x14061A600 (RtlQueryPointerMapping.c)
 *     RtlQueryPropertyStore @ 0x14061A6C0 (RtlQueryPropertyStore.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
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
