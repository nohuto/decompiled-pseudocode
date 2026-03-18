/*
 * XREFs of IsMFMWFPWindow @ 0x140044744
 * Callers:
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     xxxMNMouseMove @ 0x140044310 (xxxMNMouseMove.c)
 *     xxxMNFindWindowFromPoint @ 0x14004476C (xxxMNFindWindowFromPoint.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     UnlockMFMWFPWindow @ 0x14026B510 (UnlockMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1402BF34C (LockMFMWFPWindow.c)
 *     xxxMNDragOver @ 0x1402E9810 (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1402E998C (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1402E9B84 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsMFMWFPWindow(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
  {
    if ( a1 != 4294967291LL )
      return a1 != 0xFFFFFFFFLL;
  }
  return result;
}
