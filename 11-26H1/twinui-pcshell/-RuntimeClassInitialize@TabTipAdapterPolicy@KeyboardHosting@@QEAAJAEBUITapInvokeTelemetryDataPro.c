/*
 * XREFs of ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1801364A0
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@AEAUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@AEAUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1801363C8 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@AEAUITapInvokeTelemetryDataProvid.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B8FF8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800DC92C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1801D4328 (-InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E8B1C (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x1801E8B44 (--$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Micros.c)
 *     ?UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1801EFBB8 (-UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x18024A6C8 (-GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA-AV-$unique_any_t@V-$unique_storage@U-$res.c)
 *     ??$MakeAndInitialize@VViewRectProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewRectProvider@KeyboardHosting@@@WRL@Microsoft@@@012@@Z @ 0x1802AE520 (--$MakeAndInitialize@VViewRectProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJV-$Com.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@details@wil@@QEAA_NXZ @ 0x180474AD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@detai.c)
 *     ?GetProcessAndThreadAndAppIdFromWindow@KeyboardHosting@@YA?AV?$tuple@KKV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@PEAUHWND__@@@Z @ 0x180480ECC (-GetProcessAndThreadAndAppIdFromWindow@KeyboardHosting@@YA-AV-$tuple@KKV-$unique_any_t@V-$unique.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider *a2)
{
  char *v4; // rbx
  int v5; // ebx
  __int64 v6; // rdx
  int updated; // eax
  HWND ForegroundWindow; // rbx
  void **p_Src; // rcx
  char v11; // r8
  void *Src; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = (char *)this + 216;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((char *)this + 216);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::PositionAndSizeOptionsProvider,KeyboardHosting::PositionAndSizeOptionsProvider,>(v4);
  if ( v5 < 0 )
  {
    v6 = 151LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::ViewRectProvider,KeyboardHosting::ViewRectProvider,>((char *)this + 224);
  if ( v5 < 0 )
  {
    v6 = 152LL;
    goto LABEL_3;
  }
  v5 = KeyboardHosting::TabTipAdapterPolicy::InitializeMonitors(this);
  if ( v5 < 0 )
  {
    v6 = 153LL;
    goto LABEL_3;
  }
  updated = KeyboardHosting::TabTipAdapterPolicy::UpdatePinState(this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
  ForegroundWindow = GetForegroundWindow();
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::GetImpl'::`2'::impl) )
  {
    KeyboardHosting::GetProcessAndThreadAndAppIdFromWindow(&Src, ForegroundWindow);
    *((_DWORD *)this + 240) = v14;
    *((_DWORD *)this + 241) = v13;
    std::wstring::operator=((char *)this + 928, Src);
    p_Src = &Src;
  }
  else
  {
    TouchKeyboardExperienceManager::GetAppIdFromWindow(&v16, ForegroundWindow);
    std::wstring::operator=((char *)this + 928, v16);
    p_Src = &v16;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(p_Src);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
    1u,
    v11);
  winrt::Windows::Foundation::IUnknown::operator=((__int64 *)this + 110, (__int64 *)a2);
  return 0LL;
}
