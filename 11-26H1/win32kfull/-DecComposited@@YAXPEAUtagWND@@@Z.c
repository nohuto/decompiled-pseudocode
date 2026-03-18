/*
 * XREFs of ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1402E17F0
 * Callers:
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 * Callees:
 *     DecrementCompositedCount @ 0x1402A43C4 (DecrementCompositedCount.c)
 */

void __fastcall DecComposited(struct tagWND *a1, __int64 a2)
{
  DecrementCompositedCount((__int64)a1, a2);
}
