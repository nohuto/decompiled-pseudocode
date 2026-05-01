/*
 * XREFs of _AppViewSwitchItemZOrderSort::SortItems_::_1_::dtor$1 @ 0x1806ABB5C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AppViewSwitchItemZOrderSort::SortItems_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(a2 + 104);
}
