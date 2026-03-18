/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x140171AF0
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x140171AD0 (EngIsSemaphoreSharedByCurrentThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
