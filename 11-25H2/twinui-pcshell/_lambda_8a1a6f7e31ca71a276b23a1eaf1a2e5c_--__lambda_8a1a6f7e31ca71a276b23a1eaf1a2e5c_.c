/*
 * XREFs of _lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_ @ 0x180646BF4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x180647150 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_180647150.c)
 *     std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void_::_Delete_this @ 0x1806499B0 (std--_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void_--_Delete_this.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$17 @ 0x1806DC87D (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_1806DC87D.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 48));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 40));
  if ( *(_QWORD *)(a1 + 24) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 24));
  if ( *(_QWORD *)(a1 + 16) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 16));
  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
}
