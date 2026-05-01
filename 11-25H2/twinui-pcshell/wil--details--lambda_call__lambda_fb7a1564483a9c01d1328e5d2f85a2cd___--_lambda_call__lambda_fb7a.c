/*
 * XREFs of wil::details::lambda_call__lambda_fb7a1564483a9c01d1328e5d2f85a2cd___::_lambda_call__lambda_fb7a1564483a9c01d1328e5d2f85a2cd___ @ 0x1804462BC
 * Callers:
 *     ?LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801B51BC (-LoadMetadata@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::LoadMetadata_::_1_::dtor$3 @ 0x1806B174F (_winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--XamlAppl_ea_1806B174F.c)
 *     __lambda_1a4613c3767b380bb1c3edf448000594_::operator()_::_1_::dtor$0 @ 0x1806C59AF (__lambda_1a4613c3767b380bb1c3edf448000594_--operator()_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806C5A70 (_winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Res.c)
 * Callees:
 *     ?WinAppSDKCohabitation_UnregisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x18021461C (-WinAppSDKCohabitation_UnregisterWASDKThreadWrapper@WinUICohabitationFunctions@@QEBAXXZ.c)
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x1802893F8 (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_fb7a1564483a9c01d1328e5d2f85a2cd___::_lambda_call__lambda_fb7a1564483a9c01d1328e5d2f85a2cd___(
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
