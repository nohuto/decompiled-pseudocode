/*
 * XREFs of _CWindowList::_CWindowList_::_1_::dtor$3 @ 0x1800EDAAA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall CWindowList::_CWindowList_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return CGenericSet<CWindowData *>::~CGenericSet<CWindowData *>((PRTL_GENERIC_TABLE)(*(_QWORD *)(a2 + 64) + 312LL));
}
