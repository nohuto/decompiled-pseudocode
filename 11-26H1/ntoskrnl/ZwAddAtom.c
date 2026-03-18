/*
 * XREFs of ZwAddAtom @ 0x140723CD0
 * Callers:
 *     DifZwAddAtomWrapper @ 0x1406986E0 (DifZwAddAtomWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAddAtom(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
