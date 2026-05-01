/*
 * XREFs of _lambda_663ef704f9ce02801a8eb52a4a423678_::__lambda_663ef704f9ce02801a8eb52a4a423678_ @ 0x1806BECD8
 * Callers:
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator() @ 0x1801B0124 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--operator().c)
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678___ @ 0x1806BED94 (winrt--impl--implements_delegate_winrt--Windows--System--Threading--TimerElapsedHan_ea_1806BED94.c)
 *     __lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator()_::_1_::dtor$11 @ 0x1806D90E7 (__lambda_6bd17a0f38fc15379b652e4a7dca1691_--operator()_--_1_--dtor$11.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall lambda_663ef704f9ce02801a8eb52a4a423678_::__lambda_663ef704f9ce02801a8eb52a4a423678_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
