/*
 * XREFs of xxxSleepThread @ 0x140117848
 * Callers:
 *     xxxIsDragging @ 0x1401171C8 (xxxIsDragging.c)
 *     xxxDCETrackCaptionButton @ 0x140117458 (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x1401192EC (xxxTrackCaptionButton.c)
 *     NtUserWaitAvailableMessageEx @ 0x1402A33F0 (NtUserWaitAvailableMessageEx.c)
 *     xxxDragObject @ 0x1402E1078 (xxxDragObject.c)
 * Callees:
 *     xxxSleepThread2 @ 0x14001E134 (xxxSleepThread2.c)
 */

__int64 __fastcall xxxSleepThread(unsigned int a1, unsigned int a2, int a3, int a4)
{
  return xxxSleepThread2(a1, a2, a3, a4, 0LL);
}
