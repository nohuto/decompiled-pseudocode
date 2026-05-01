/*
 * XREFs of std::_Func_impl_no_alloc__lambda_dc2607754e001e0dc3a004d65aa5a9ed__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Delete_this @ 0x1801C5D20
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x1801C5D64 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_dc2607754e001e0dc3a004d65aa5a9ed__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Delete_this(
        __int64 a1,
        char a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax

  v4 = (_QWORD *)(a1 + 16);
  if ( *v4 )
    result = winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref(v4);
  if ( a2 )
    return std::_Deallocate<16>(a1, 24LL);
  return result;
}
