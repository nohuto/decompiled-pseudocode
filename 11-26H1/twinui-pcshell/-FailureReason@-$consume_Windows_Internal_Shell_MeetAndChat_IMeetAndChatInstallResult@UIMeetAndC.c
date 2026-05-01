/*
 * XREFs of ?FailureReason@?$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A5D0
 * Callers:
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002A2C8 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabView@3UI@456@@Z @ 0x1800A24EC (-AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabVi.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800A2940 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x180265390 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 *     _lambda_c0ce33e06c92a42a96b12c6bd24e1411_::operator()_winrt::Windows::UI::Input::GestureRecognizer_ @ 0x18058E618 (_lambda_c0ce33e06c92a42a96b12c6bd24e1411_--operator()_winrt--Windows--UI--Input--GestureRecogniz.c)
 *     LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1 @ 0x1805D8C60 (LockScreenWidgetPackageHelperBase--TryInstallStoreApplicationAsync$_ResumeCoro$1.c)
 *     _lambda_724db070561b64a1d673c65688c83bb1_::operator()_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___ @ 0x1805F14E4 (_lambda_724db070561b64a1d673c65688c83bb1_--operator()_winrt--Windows--Foundation--IAsyncOperatio.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult<winrt::Windows::Internal::Shell::MeetAndChat::IMeetAndChatInstallResult>::FailureReason(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v6 = 0;
  v4 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 64LL))(v1, &v6);
  winrt::check_hresult(&v7, v2, &v4);
  return v6;
}
