/*
 * XREFs of ?GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x1400D832C
 * Callers:
 *     GreIsVisRgnLockedShared @ 0x1401C7EF0 (GreIsVisRgnLockedShared.c)
 * Callees:
 *     <none>
 */

bool __fastcall GrepIsLockOwnedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
