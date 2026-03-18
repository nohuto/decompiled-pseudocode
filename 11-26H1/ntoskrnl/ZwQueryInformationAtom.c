/*
 * XREFs of ZwQueryInformationAtom @ 0x140725E50
 * Callers:
 *     DifZwQueryInformationAtomWrapper @ 0x1406B0D20 (DifZwQueryInformationAtomWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInformationAtom(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
