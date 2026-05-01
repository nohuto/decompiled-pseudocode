/*
 * XREFs of ?LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x180474EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800352AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180063FE8 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A8B34 (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ?GetView@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowId@UI@45@@impl@winrt@@QEBA@XZ @ 0x1800A9908 (-GetView@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UWindowId@UI@Windows@winrt@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FB8E4 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ?Symbols@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802133A8 (-Symbols@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatic.c)
 *     ?Clipboard@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180246FE4 (-Clipboard@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStat.c)
 *     ??$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_N_N_N_N_NPEBGPEBGPEBGPEBGPEBGPEBGPEBGPEBG_NAEA_NAEAU?$atomic@_N@std@@HAEA_N@TouchKeyboardTelemetry@@SAX$$QEAPEBG0AEAY07$$CBGAEAURect@Foundation@Windows@@21AEBU_GUID@@$$QEA_N444AEB_N54444000000004AEA_NAEAU?$atomic@_N@std@@$$QEAH6@Z @ 0x180473460 (--$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUI.c)
 *     ?GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA?AUDigitizerState@2@XZ @ 0x180473ED4 (-GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA-AUDigitizerState@2@XZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::LogPrimaryViewShowRequestInfo(
        KeyboardHosting::TabTipAdapterPolicy *this,
        HSTRING a2,
        HSTRING a3)
{
  char v6; // r8
  __int64 v7; // r9
  const unsigned __int16 *v8; // rax
  winrt::hstring *v9; // rax
  winrt::hstring *v10; // rax
  winrt::hstring *v11; // rax
  winrt::hstring *v12; // rax
  winrt::hstring *View; // rax
  winrt::hstring *v14; // rax
  winrt::hstring *v15; // rax
  __int64 v17; // [rsp+28h] [rbp-148h]
  __int64 v18; // [rsp+30h] [rbp-140h]
  bool v19; // [rsp+F0h] [rbp-80h] BYREF
  bool v20; // [rsp+F1h] [rbp-7Fh] BYREF
  bool v21; // [rsp+F2h] [rbp-7Eh] BYREF
  bool v22; // [rsp+F3h] [rbp-7Dh] BYREF
  bool v23; // [rsp+F4h] [rbp-7Ch] BYREF
  bool v24; // [rsp+F5h] [rbp-7Bh] BYREF
  bool v25; // [rsp+F6h] [rbp-7Ah] BYREF
  bool v26; // [rsp+F8h] [rbp-78h] BYREF
  bool v27; // [rsp+F9h] [rbp-77h] BYREF
  int v28; // [rsp+FCh] [rbp-74h]
  const unsigned __int16 *v29; // [rsp+100h] [rbp-70h] BYREF
  const unsigned __int16 *v30; // [rsp+108h] [rbp-68h] BYREF
  const unsigned __int16 *v31; // [rsp+110h] [rbp-60h] BYREF
  const unsigned __int16 *v32; // [rsp+118h] [rbp-58h] BYREF
  const unsigned __int16 *v33; // [rsp+120h] [rbp-50h] BYREF
  const unsigned __int16 *v34; // [rsp+128h] [rbp-48h] BYREF
  const unsigned __int16 *v35; // [rsp+130h] [rbp-40h] BYREF
  const unsigned __int16 *v36; // [rsp+138h] [rbp-38h] BYREF
  PCWSTR StringRawBuffer; // [rsp+140h] [rbp-30h] BYREF
  PCWSTR v38; // [rsp+148h] [rbp-28h] BYREF
  volatile signed __int32 *v39; // [rsp+150h] [rbp-20h] BYREF
  volatile signed __int32 *v40; // [rsp+158h] [rbp-18h] BYREF
  volatile signed __int32 *v41; // [rsp+160h] [rbp-10h] BYREF
  volatile signed __int32 *v42; // [rsp+168h] [rbp-8h] BYREF
  volatile signed __int32 *v43; // [rsp+170h] [rbp+0h] BYREF
  volatile signed __int32 *v44; // [rsp+178h] [rbp+8h] BYREF
  volatile signed __int32 *v45[2]; // [rsp+180h] [rbp+10h] BYREF
  bool v46; // [rsp+1B0h] [rbp+40h] BYREF
  bool v47; // [rsp+1C8h] [rbp+58h] BYREF

  KeyboardHosting::TabTipAdapterPolicy::GetDigitizerState((__int64)this, (char *)&v26);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
    1u,
    v6,
    v7);
  v28 = *((unsigned __int8 *)this + 585);
  v46 = 0;
  v8 = (const unsigned __int16 *)((char *)this + 648);
  if ( *((_QWORD *)this + 84) > 7uLL )
    v8 = *(const unsigned __int16 **)v8;
  v29 = v8;
  v9 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
                           (__int64 **)this + 75,
                           v45);
  v30 = winrt::hstring::c_str(v9);
  v10 = (winrt::hstring *)winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
                            (__int64 **)this + 75,
                            &v44);
  v31 = winrt::hstring::c_str(v10);
  v11 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Clipboard(
                            (__int64 **)this + 75,
                            &v43);
  v32 = winrt::hstring::c_str(v11);
  v12 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Symbols(
                            (__int64 **)this + 75,
                            &v42);
  v33 = winrt::hstring::c_str(v12);
  View = (winrt::hstring *)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::WindowId>,winrt::Windows::UI::WindowId>::GetView(
                             (__int64 **)this + 75,
                             &v41);
  v34 = winrt::hstring::c_str(View);
  v14 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                            (__int64 **)this + 75,
                            &v40);
  v35 = winrt::hstring::c_str(v14);
  v15 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                            (__int64 **)this + 75,
                            &v39);
  v36 = winrt::hstring::c_str(v15);
  v47 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v38 = WindowsGetStringRawBuffer(a2, 0LL);
  TouchKeyboardTelemetry::HostInvokedMethod<unsigned short const *,unsigned short const *,unsigned short const (&)[8],Windows::Foundation::Rect &,Windows::Foundation::Rect &,unsigned short const (&)[8],_GUID const &,bool,bool,bool,bool,bool const &,bool const &,bool,bool,bool,bool,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool,bool &,std::atomic<bool> &,int,bool &>(
    &v38,
    &StringRawBuffer,
    (__int64)this + 224,
    (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 128),
    (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 224),
    v17,
    v18,
    &v25,
    &v24,
    &v23,
    &v22,
    &v26,
    &v27,
    &v21,
    &v20,
    &v19,
    &v47,
    &v36,
    &v35,
    &v34,
    &v33,
    &v32,
    &v31,
    &v30,
    &v29,
    &v46,
    (bool *)this + 586,
    (__int64)this + 593);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v39);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v40);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v41);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v42);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v43);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v44);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v45);
  return 0LL;
}
