/*
 * XREFs of ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1402E1810
 * Callers:
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 * Callees:
 *     IncCompositedVisWindows @ 0x1400109BC (IncCompositedVisWindows.c)
 */

void __fastcall IncComposited(struct tagWND *a1)
{
  IncCompositedVisWindows((__int64)a1);
}
