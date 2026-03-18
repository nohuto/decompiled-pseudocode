/*
 * XREFs of EditionIsAppForeground @ 0x140279FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140259B58 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall EditionIsAppForeground(const struct tagWND *a1, __int64 a2)
{
  return CoreWindowProp::CompositeAppHasForeground(a1, a2);
}
