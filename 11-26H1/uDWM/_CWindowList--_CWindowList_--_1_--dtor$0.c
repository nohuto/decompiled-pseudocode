/*
 * XREFs of _CWindowList::_CWindowList_::_1_::dtor$0 @ 0x1800E99FA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall CWindowList::_CWindowList_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return CGenericTableMap<unsigned __int64,CDesktop>::~CGenericTableMap<unsigned __int64,CDesktop>((PRTL_GENERIC_TABLE)(*(_QWORD *)(a2 + 64) + 8LL));
}
