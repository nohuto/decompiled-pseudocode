/*
 * XREFs of _AppViewSwitchItemZOrderSort::SortItems_::_1_::dtor$1 @ 0x1806D2A06
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewSwitchItemZOrderSort::SortItems_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy((_QWORD *)(a2 + 80));
}
