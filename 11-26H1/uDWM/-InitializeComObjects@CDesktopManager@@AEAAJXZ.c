/*
 * XREFs of ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x1800ABB28
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18001C670 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18002C6DC (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180001B28 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003FECC (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x18005988C (-Initialize@CAnimationEngine@@QEAAJXZ.c)
 *     ?Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z @ 0x180062170 (-Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z.c)
 *     _tlgKeywordOn @ 0x18006E790 (_tlgKeywordOn.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180074620 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX.c)
 *     ?EnsureDDisplayManager@CDesktopManager@@AEAAJXZ @ 0x180074B04 (-EnsureDDisplayManager@CDesktopManager@@AEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ??0CDisplayBroker@@QEAA@XZ @ 0x180086350 (--0CDisplayBroker@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCDisplayBroker@@U?$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ @ 0x18008DB08 (--1-$unique_ptr@VCDisplayBroker@@U-$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDisplayBroker@@@std@@QEBAXPEAVCDisplayBroker@@@Z @ 0x1800AA2C8 (--R-$default_delete@VCDisplayBroker@@@std@@QEBAXPEAVCDisplayBroker@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@@details@wil@@QEAA_NXZ @ 0x1800AD378 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::InitializeComObjects(__int64 **this, __int64 a2, __int64 a3)
{
  HRESULT Instance; // ebx
  int v5; // eax
  CDisplayBroker *v6; // rax
  CDisplayBroker *v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  __int64 *v10; // rdx
  LPVOID *ppv; // rax
  LPVOID *v12; // rax
  CAnimationEngine *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  CDisplayBroker *v18; // [rsp+48h] [rbp+10h] BYREF

  Instance = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDisplayBroker>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_DesktopDisplayBroker>::GetImpl'::`2'::impl,
    1u,
    a3);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail>::GetImpl'::`2'::impl) )
  {
    v5 = CDesktopManager::EnsureDDisplayManager((CDesktopManager *)this);
    Instance = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x68Fu, 0LL);
      goto LABEL_29;
    }
  }
  else
  {
    CDesktopManager::EnsureDDisplayManager((CDesktopManager *)this);
  }
  if ( !this[27] )
  {
    v6 = (CDisplayBroker *)operator new(8uLL);
    if ( v6 )
      v7 = CDisplayBroker::CDisplayBroker(v6);
    else
      v7 = 0LL;
    v18 = v7;
    if ( !v7 )
    {
      Instance = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x69Cu, 0LL);
LABEL_11:
      std::unique_ptr<CDisplayBroker>::~unique_ptr<CDisplayBroker>(&v18);
      goto LABEL_29;
    }
    v8 = CDisplayBroker::Initialize(v7, (struct Windows::Devices::Display::Core::IDisplayManager *)this[159][2]);
    Instance = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x69Du, 0LL);
      goto LABEL_11;
    }
    v18 = 0LL;
    v10 = this[27];
    this[27] = (__int64 *)v7;
    if ( v10 )
      std::default_delete<CDisplayBroker>::operator()(v9, v10);
    std::unique_ptr<CDisplayBroker>::~unique_ptr<CDisplayBroker>(&v18);
  }
  if ( !this[33] )
  {
    ppv = (LPVOID *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)(this + 34));
    Instance = CoCreateInstance(
                 &CLSID_UIAnimationTransitionLibrary2,
                 0LL,
                 1u,
                 &GUID_03cfae53_9580_4ee3_b363_2ece51b4af6a,
                 ppv);
    if ( Instance >= 0 )
    {
      v12 = (LPVOID *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)(this + 33));
      Instance = CoCreateInstance(&CLSID_UIAnimationManager2, 0LL, 1u, &GUID_d8b6f7d4_4109_4d3f_acee_879926968cb1, v12);
      if ( Instance >= 0 )
      {
        v13 = (CAnimationEngine *)this[22];
        if ( *((_BYTE *)v13 + 120) )
          goto LABEL_29;
        Instance = CAnimationEngine::Initialize(v13);
      }
    }
    if ( Instance == -2147024770 )
    {
      if ( (unsigned int)dword_1801140F8 > 4 && tlgKeywordOn((__int64)&dword_1801140F8, 1LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          (int)&dword_1801140F8,
          (int)&unk_18010051D,
          0);
      Instance = 0;
    }
    else if ( Instance < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Instance, 0x6C3u, 0LL);
    }
  }
LABEL_29:
  if ( (unsigned int)dword_1801140F8 > 4 && tlgKeywordOn((__int64)&dword_1801140F8, 1LL) )
  {
    LODWORD(v18) = Instance;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v14,
      (int)&unk_1801004E4,
      v15,
      v16,
      (__int64)&v18);
  }
  return (unsigned int)Instance;
}
