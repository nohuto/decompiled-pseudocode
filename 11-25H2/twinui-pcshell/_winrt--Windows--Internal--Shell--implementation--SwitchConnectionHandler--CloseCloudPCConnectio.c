/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection_::_47_::_parameters_::__parameters_ @ 0x180646C48
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x180647150 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_180647150.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_InitCoro$2_::_1_::dtor$1 @ 0x1806DC57A (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_1806DC57A.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection_::_47_::_parameters_::__parameters_(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 24));
  v2 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
