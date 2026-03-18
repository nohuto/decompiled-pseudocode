/*
 * XREFs of ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1402CA070
 * Callers:
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 * Callees:
 *     DecrementCompositedCount @ 0x14028796C (DecrementCompositedCount.c)
 */

void __fastcall DecComposited(struct tagWND *a1, __int64 a2)
{
  DecrementCompositedCount((__int64)a1, a2);
}
