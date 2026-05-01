/*
 * XREFs of std::_Func_impl_no_alloc__lambda_dc2607754e001e0dc3a004d65aa5a9ed__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Copy @ 0x1804A1890
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x18010DA98 (-add_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_dc2607754e001e0dc3a004d65aa5a9ed__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r9

  *(_QWORD *)a2 = off_180723C80;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  winrt::com_ptr<CMultitaskingViewManager>::add_ref((__int64 *)(a2 + 16), (volatile int *)a2);
  return v2;
}
