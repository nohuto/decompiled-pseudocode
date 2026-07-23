/*
 * XREFs of RtlpHpLfhContextLockExtension @ 0x14053398C
 * Callers:
 *     RtlpHpLfhContextMetadataFree @ 0x1403487D0 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x140348E44 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x140349DA0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpLfhContextLockExtension(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  return RtlpHpAcquireLockExclusive((int *)(a1 + 128), *(unsigned __int8 *)(a1 + 73), a3, a4);
}
