/*
 * XREFs of ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1402CA090
 * Callers:
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 * Callees:
 *     IncCompositedVisWindows @ 0x14005A968 (IncCompositedVisWindows.c)
 */

void __fastcall IncComposited(struct tagWND *a1)
{
  IncCompositedVisWindows((__int64)a1);
}
