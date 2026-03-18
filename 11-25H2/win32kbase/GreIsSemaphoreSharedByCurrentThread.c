/*
 * XREFs of GreIsSemaphoreSharedByCurrentThread @ 0x14013AF20
 * Callers:
 *     EngIsSemaphoreSharedByCurrentThread @ 0x14013AF00 (EngIsSemaphoreSharedByCurrentThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsSemaphoreSharedByCurrentThread(struct _ERESOURCE *a1)
{
  return ExIsResourceAcquiredSharedLite(a1) != 0;
}
