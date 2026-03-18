/*
 * XREFs of ZwFindAtom @ 0x140723670
 * Callers:
 *     DifZwFindAtomWrapper @ 0x1406A6210 (DifZwFindAtomWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFindAtom(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
