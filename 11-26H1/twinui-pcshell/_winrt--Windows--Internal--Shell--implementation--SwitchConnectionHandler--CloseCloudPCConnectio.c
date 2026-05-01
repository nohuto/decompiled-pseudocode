/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection_::_47_::_parameters_::__parameters_ @ 0x18066CAC4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x18066CF40 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnection.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection_::_1_::dtor$3 @ 0x180705672 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_180705672.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
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
