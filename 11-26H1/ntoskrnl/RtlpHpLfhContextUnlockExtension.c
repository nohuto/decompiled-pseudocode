/*
 * XREFs of RtlpHpLfhContextUnlockExtension @ 0x140530AB0
 * Callers:
 *     RtlpHpLfhContextMetadataFree @ 0x140346750 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x140346DC4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x140347D20 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x140402C90 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x14034D300 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpLfhContextUnlockExtension(__int64 a1, unsigned __int8 a2)
{
  RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a1 + 128), *(unsigned __int8 *)(a1 + 73), a2);
}
