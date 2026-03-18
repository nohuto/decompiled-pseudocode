/*
 * XREFs of BcpCursorLessThan @ 0x14071670C
 * Callers:
 *     BcpDisplayProgress @ 0x140717534 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(struct _LIST_ENTRY **a1)
{
  return *a1 < gLoadedDiffHivesLock.WaitListEntry.Blink;
}
