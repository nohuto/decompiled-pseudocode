/*
 * XREFs of MNIsFlatMenu @ 0x14004083C
 * Callers:
 *     xxxDrawMenuItem @ 0x14004086C (xxxDrawMenuItem.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 *     xxxMenuBarDraw @ 0x14020258C (xxxMenuBarDraw.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNDrawFullNC @ 0x1402EAC74 (xxxMNDrawFullNC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MNIsFlatMenu(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66804) & 0x80020000) == -2147352576;
}
