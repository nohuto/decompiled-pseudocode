/*
 * XREFs of ?GrepIsLockOwnedByCurrentThread@@YA_NQEAUHSEMAPHORE__@@@Z @ 0x14009FE14
 * Callers:
 *     ??$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FAF8 (--$GrepIsLockOwnedByCurrentThread@$00USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ?vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ @ 0x140169390 (-vUndo@UNDOGRETHREADPIDLOCKS@@QEAAXXZ.c)
 *     GrepIsPublicPFTSemaphoreOwnedByCurrentThread @ 0x140327A40 (GrepIsPublicPFTSemaphoreOwnedByCurrentThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall GrepIsLockOwnedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
