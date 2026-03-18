/*
 * XREFs of ?GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x140162268
 * Callers:
 *     GreIsDynamicModeChangeLocked @ 0x140162230 (GreIsDynamicModeChangeLocked.c)
 *     GreIsDisplayLocked @ 0x1401F0820 (GreIsDisplayLocked.c)
 *     GreIsVisRgnLocked @ 0x1401F0860 (GreIsVisRgnLocked.c)
 *     GreIsVisRgnPublishLocked @ 0x1401F08E0 (GreIsVisRgnPublishLocked.c)
 * Callees:
 *     <none>
 */

bool __fastcall GrepIsLockOwnedExclusiveByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredExclusiveLite(a1) != 0;
}
