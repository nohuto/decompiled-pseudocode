/*
 * XREFs of CmHiveCacheDriverSetup @ 0x14085D9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CmHiveCacheDriverSetup(struct _LIST_ENTRY *a1)
{
  WheapPfaLock.WaitListEntry.Blink = a1;
  return 0LL;
}
