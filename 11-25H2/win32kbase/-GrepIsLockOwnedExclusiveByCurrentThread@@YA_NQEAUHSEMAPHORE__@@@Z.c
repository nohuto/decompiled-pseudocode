/*
 * XREFs of ?GrepIsLockOwnedExclusiveByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x140120858
 * Callers:
 *     GreIsDynamicModeChangeLocked @ 0x140120820 (GreIsDynamicModeChangeLocked.c)
 *     GreIsDisplayLocked @ 0x1401C7E20 (GreIsDisplayLocked.c)
 *     GreIsVisRgnLocked @ 0x1401C7EB0 (GreIsVisRgnLocked.c)
 *     GreIsVisRgnPublishLocked @ 0x1401C7F30 (GreIsVisRgnPublishLocked.c)
 * Callees:
 *     <none>
 */

bool __fastcall GrepIsLockOwnedExclusiveByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredExclusiveLite(a1) != 0;
}
