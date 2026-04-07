/*
 * XREFs of ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18005774C
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180045074 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008F8D0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180001B30 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18004FE44 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180056DCC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX.c)
 *     ?EnsureDDisplayManager@CDesktopManager@@AEAAJXZ @ 0x180057984 (-EnsureDDisplayManager@CDesktopManager@@AEAAJXZ.c)
 *     ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x180058B9C (-Initialize@CAnimationEngine@@QEAAJXZ.c)
 *     ?Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z @ 0x180070FC0 (-Initialize@CDisplayBroker@@QEAAJPEAUIDisplayManager@Core@Display@Devices@Windows@@@Z.c)
 *     _tlgKeywordOn @ 0x18007C780 (_tlgKeywordOn.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CDisplayBroker@@QEAA@XZ @ 0x180094848 (--0CDisplayBroker@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCDisplayBroker@@U?$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ @ 0x18009A0E4 (--1-$unique_ptr@VCDisplayBroker@@U-$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDisplayBroker@@@std@@QEBAXPEAVCDisplayBroker@@@Z @ 0x1800AC2E8 (--R-$default_delete@VCDisplayBroker@@@std@@QEBAXPEAVCDisplayBroker@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::InitializeComObjects(CAnimationEngine **this, __int64 a2, __int64 a3, __int64 a4)
{
  HRESULT Instance; // ebx
  const struct std::nothrow_t *v6; // rdx
  CDisplayBroker *v7; // rax
  CDisplayBroker *v8; // rsi
  int v9; // eax
  CAnimationEngine *v10; // rdx
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
    a3,
    a4);
  CDesktopManager::EnsureDDisplayManager((CDesktopManager *)this);
  if ( !this[27] )
  {
    v7 = (CDisplayBroker *)operator new[](8uLL, v6);
    if ( v7 )
      v8 = CDisplayBroker::CDisplayBroker(v7);
    else
      v8 = 0LL;
    v18 = v8;
    if ( !v8 )
    {
      Instance = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x6B1u, 0LL);
LABEL_7:
      std::unique_ptr<CDisplayBroker>::~unique_ptr<CDisplayBroker>(&v18);
      goto LABEL_25;
    }
    v9 = CDisplayBroker::Initialize(v8, *((struct Windows::Devices::Display::Core::IDisplayManager **)this[162] + 2));
    Instance = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x6B2u, 0LL);
      goto LABEL_7;
    }
    v18 = 0LL;
    v10 = this[27];
    this[27] = v8;
    if ( v10 )
      std::default_delete<CDisplayBroker>::operator()();
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
        v13 = this[22];
        if ( *((_BYTE *)v13 + 120) )
          goto LABEL_25;
        Instance = CAnimationEngine::Initialize(v13);
      }
    }
    if ( Instance == -2147024770 )
    {
      if ( (unsigned int)dword_180118130 > 4 && (unsigned __int8)tlgKeywordOn(&dword_180118130, 1LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          (int)&dword_180118130,
          (int)&unk_180104344,
          0);
      Instance = 0;
    }
    else if ( Instance < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Instance, 0x6D8u, 0LL);
    }
  }
LABEL_25:
  if ( (unsigned int)dword_180118130 > 4 && (unsigned __int8)tlgKeywordOn(&dword_180118130, 1LL) )
  {
    LODWORD(v18) = Instance;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v14,
      byte_180104391,
      v15,
      v16,
      (__int64)&v18);
  }
  return (unsigned int)Instance;
}
