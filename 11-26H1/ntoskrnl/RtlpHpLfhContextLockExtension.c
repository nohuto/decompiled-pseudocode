/*
 * XREFs of RtlpHpLfhContextLockExtension @ 0x14053148C
 * Callers:
 *     RtlpHpLfhContextMetadataFree @ 0x140346750 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x140346DC4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x140347D20 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x140402C90 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027E170 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpLfhContextLockExtension(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  return RtlpHpAcquireLockExclusive((int *)(a1 + 128), *(unsigned __int8 *)(a1 + 73), a3, a4);
}
