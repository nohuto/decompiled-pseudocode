/*
 * XREFs of RtlpHpLfhContextLockExtension @ 0x180071B4C
 * Callers:
 *     RtlpHpLfhContextMetadataFree @ 0x180063B00 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x1800645D0 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpLfhContextLockUnlock @ 0x180071B68 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x18007225C (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x18010B444 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpHpLfhContextLockExtension(_RTL_SRWLOCK *a1)
{
  RtlAcquireSRWLockExclusive(a1 + 16);
  return -1;
}
