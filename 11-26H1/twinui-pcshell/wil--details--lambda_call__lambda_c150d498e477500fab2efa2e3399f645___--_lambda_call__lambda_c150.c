/*
 * XREFs of wil::details::lambda_call__lambda_c150d498e477500fab2efa2e3399f645___::_lambda_call__lambda_c150d498e477500fab2efa2e3399f645___ @ 0x1802C6AE0
 * Callers:
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::LoadMetadata_::_1_::dtor$3 @ 0x1806D1BB8 (_winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--XamlAppl_ea_1806D1BB8.c)
 *     __lambda_f5c7a19be5cc201203fc8ae0f408e847_::operator()_::_1_::dtor$0 @ 0x1806ED867 (__lambda_f5c7a19be5cc201203fc8ae0f408e847_--operator()_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806ED88B (_winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Res.c)
 * Callees:
 *     ?WinAppSDKCohabitation_UnregisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x1800A1BC4 (-WinAppSDKCohabitation_UnregisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ.c)
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x180281120 (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_c150d498e477500fab2efa2e3399f645___::_lambda_call__lambda_c150d498e477500fab2efa2e3399f645___(
        __int64 a1)
{
  HMODULE *v1; // rax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    v1 = (HMODULE *)WinUICohabitationFunctions::Instance();
    WinUICohabitationFunctions::WinAppSDKCohabitation_UnregisterWASDKThreadWrapper(v1);
  }
}
