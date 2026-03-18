/*
 * XREFs of xxxInvalidateRect @ 0x1402BEDA4
 * Callers:
 *     NtUserInvalidateRect @ 0x14029ABC0 (NtUserInvalidateRect.c)
 *     xxxMNSetTop @ 0x1402C0490 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1402E23B4 (xxxMNUpdateShownMenu.c)
 *     xxxMNSetGapState @ 0x1402E998C (xxxMNSetGapState.c)
 * Callees:
 *     xxxRedrawWindow @ 0x140030830 (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxInvalidateRect(struct tagWND *a1, __int64 a2, int a3)
{
  return xxxRedrawWindow(a1, a2, 0LL, a3 != 0 ? 5 : 1);
}
