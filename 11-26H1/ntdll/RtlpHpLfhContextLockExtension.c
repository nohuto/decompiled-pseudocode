/*
 * XREFs of RtlpHpLfhContextLockExtension @ 0x1800973B4
 * Callers:
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800932F8 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextMetadataFree @ 0x180096160 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextLockUnlock @ 0x180097204 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x180097438 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x180097710 (RtlpHpLfhContextTlsCleanup.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpHpLfhContextLockExtension(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 128), a2);
  return -1;
}
