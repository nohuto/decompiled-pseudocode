/*
 * XREFs of ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002A2C8
 * Callers:
 *     ?TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore@Tiles@456@AEBUITileStoreChangedEventArgs@8456@@Z @ 0x180214E90 (-TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync$_ResumeCoro$1 @ 0x18057E300 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--InitializeDataAsync$_ResumeCoro$.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x18002813C (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowTabView@Shell@.c)
 *     ?FailureReason@?$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A5D0 (-FailureReason@-$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndC.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A624 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A684 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?Id@?$consume_Windows_Internal_Tiles_ITileNotification@UITileNotification@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AB30 (-Id@-$consume_Windows_Internal_Tiles_ITileNotification@UITileNotification@Tiles@Internal@Windows.c)
 *     ?FamilyName@?$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002C714 (-FamilyName@-$consume_Windows_ApplicationModel_IPackageId@UIPackageId@ApplicationModel@Windows@w.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?WindowTabHostNewPinnedSite@WindowTabHostTelemetry@@SAXXZ @ 0x18007A458 (-WindowTabHostNewPinnedSite@WindowTabHostTelemetry@@SAXXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801D0FF4 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?FindTileNotifications@?$consume_Windows_Internal_Tiles_ITileStore@UITileStore@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@_JAEBUTileQueryFilter@Tiles@Internal@Windows@3@@Z @ 0x180265324 (-FindTileNotifications@-$consume_Windows_Internal_Tiles_ITileStore@UITileStore@Tiles@Internal@Wi.c)
 *     ??$WindowTabHostFoundPinnedSites@AEAI@WindowTabHostTelemetry@@SAXAEAI@Z @ 0x1802B07E8 (--$WindowTabHostFoundPinnedSites@AEAI@WindowTabHostTelemetry@@SAXAEAI@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?HideFromTaskbar@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180581B80 (-HideFromTaskbar@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications(
        RTL_SRWLOCK *this)
{
  unsigned int v2; // r12d
  unsigned int v3; // ebx
  int NetworkConnectivityLevel; // eax
  int v5; // eax
  __int64 v6; // rax
  int v7; // ebx
  bool v8; // dl
  _QWORD *Ptr; // r14
  _QWORD *i; // rbx
  _QWORD *v11; // rsi
  _QWORD *j; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  const WCHAR *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  const WCHAR *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  const WCHAR *v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // [rsp+20h] [rbp-50h] BYREF
  __int64 v27; // [rsp+28h] [rbp-48h] BYREF
  int v28; // [rsp+30h] [rbp-40h]
  __int64 v29; // [rsp+38h] [rbp-38h] BYREF
  __int64 v30; // [rsp+40h] [rbp-30h] BYREF
  __int64 v31; // [rsp+48h] [rbp-28h] BYREF
  __int64 v32; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v33[2]; // [rsp+58h] [rbp-18h] BYREF

  v31 = 0LL;
  winrt::impl::consume_Windows_Internal_Tiles_ITileStore<winrt::Windows::Internal::Tiles::ITileStore>::FindTileNotifications(
    &this[54],
    &v30,
    this[56].Ptr,
    &v31);
  v2 = 0;
  v3 = 0;
  v26 = 0;
  NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(&v30);
  v28 = NetworkConnectivityLevel;
  while ( v3 != NetworkConnectivityLevel )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::GetAt(
      &v30,
      (winrt *)&v27,
      v3);
    v5 = winrt::impl::consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult<winrt::Windows::Internal::Shell::MeetAndChat::IMeetAndChatInstallResult>::FailureReason(&v27);
    if ( v5 == 1 )
    {
      winrt::impl::consume_Windows_Internal_Tiles_ITileNotification<winrt::Windows::Internal::Tiles::ITileNotification>::Id(
        &v27,
        v33);
      AcquireSRWLockExclusive(this + 77);
      Ptr = this[79].Ptr;
      for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
      {
        v11 = (_QWORD *)i[7];
        for ( j = (_QWORD *)*v11; j != v11; j = (_QWORD *)*j )
        {
          v13 = j[4];
          v14 = *(_QWORD *)(v13 + 72) - v33[0];
          if ( !v14 )
            v14 = _mm_srli_si128(*(__m128i *)(v13 + 72), 8).m128i_u64[0] - v33[1];
          if ( !v14 )
            winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromTaskbar(
              (winrt::Windows::Internal::Shell::implementation::TabProxyWindow *)v13,
              v8);
        }
      }
      if ( this != (RTL_SRWLOCK *)-616LL )
        ReleaseSRWLockExclusive(this + 77);
    }
    else
    {
      if ( v5 )
        goto LABEL_9;
      v6 = winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
             &v27,
             &v32);
      v7 = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(v6);
      if ( v32 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v32);
      if ( v7 == 1 )
      {
        v15 = winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
                &v27,
                &v31);
        winrt::impl::consume_Windows_ApplicationModel_IPackageId<winrt::Windows::ApplicationModel::IPackageId>::FamilyName(
          v15,
          &v29);
        if ( v31 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v31);
        v16 = std::_WChar_traits<wchar_t>::length(L"Microsoft.MicrosoftEdge.Stable_8wekyb3d8bbwe!App");
        v17 = v29;
        if ( v29 )
        {
          v18 = *(const WCHAR **)(v29 + 16);
          v19 = *(unsigned int *)(v29 + 4);
        }
        else
        {
          v18 = &pvData;
          v19 = 0LL;
        }
        if ( (unsigned __int8)std::_Traits_equal<std::char_traits<unsigned short>>(
                                v18,
                                v19,
                                L"Microsoft.MicrosoftEdge.Stable_8wekyb3d8bbwe!App",
                                v16) )
          goto LABEL_40;
        v20 = std::_WChar_traits<wchar_t>::length(L"Microsoft.MicrosoftEdge.Beta_8wekyb3d8bbwe!App");
        if ( v17 )
        {
          v21 = *(const WCHAR **)(v17 + 16);
          v22 = *(unsigned int *)(v17 + 4);
        }
        else
        {
          v21 = &pvData;
          v22 = 0LL;
        }
        if ( (unsigned __int8)std::_Traits_equal<std::char_traits<unsigned short>>(
                                v21,
                                v22,
                                L"Microsoft.MicrosoftEdge.Beta_8wekyb3d8bbwe!App",
                                v20)
          || ((v23 = std::_WChar_traits<wchar_t>::length(L"Microsoft.MicrosoftEdge.Dev_8wekyb3d8bbwe!App"), !v17)
            ? (v24 = &pvData, v25 = 0LL)
            : (v24 = *(const WCHAR **)(v17 + 16), v25 = *(unsigned int *)(v17 + 4)),
              (unsigned __int8)std::_Traits_equal<std::char_traits<unsigned short>>(
                                 v24,
                                 v25,
                                 L"Microsoft.MicrosoftEdge.Dev_8wekyb3d8bbwe!App",
                                 v23)
           || (unsigned __int8)winrt::operator==(&v29, L"Microsoft.MicrosoftEdge.Canary_8wekyb3d8bbwe!App")
           || (unsigned __int8)winrt::operator==(&v29, L"Microsoft.MicrosoftEdge.Internal_8wekyb3d8bbwe!App")) )
        {
LABEL_40:
          ++v2;
        }
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v29);
      }
    }
    v3 = v26;
LABEL_9:
    if ( v27 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v27);
    v26 = ++v3;
    NetworkConnectivityLevel = v28;
  }
  v26 = v2;
  if ( LOBYTE(this[109].Ptr) )
  {
    WindowTabHostTelemetry::WindowTabHostFoundPinnedSites<unsigned int &>(&v26);
    LOBYTE(this[109].Ptr) = 0;
  }
  else if ( v2 )
  {
    WindowTabHostTelemetry::WindowTabHostNewPinnedSite();
  }
  if ( v30 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v30);
}
