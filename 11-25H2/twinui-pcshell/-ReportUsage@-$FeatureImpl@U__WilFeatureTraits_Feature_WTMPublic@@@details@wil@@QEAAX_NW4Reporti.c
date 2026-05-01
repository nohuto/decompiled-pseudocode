/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005FC84
 * Callers:
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800543F0 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 *     ?IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapSize@Imaging@Graphics@56@V?$com_ptr_t@UIWICBitmapSource@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005F7D0 (-IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapS.c)
 *     ?SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x18005FB2C (-SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x180060F60 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 *     ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x180063AF8 (-SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilter.c)
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800A9ADC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800F3DF0 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEBUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Z @ 0x18016E638 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x180176350 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18022923C (-UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x1805598D8 (-ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 *     ?GetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x18055A194 (-GetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?GetTabTearOutSupportedIfWindowExists@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_K@Z @ 0x18055A1D0 (-GetTabTearOutSupportedIfWindowExists@WindowTabHost@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806829CC (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005FEBC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x180060138 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801F5EDC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180287020 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
        int *a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4)
{
  unsigned int v4; // esi
  int v6; // ebx
  unsigned int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // r9d
  __m128i v11; // xmm1
  __int64 v12; // r8
  int v13; // edi
  void (__fastcall *v14)(__int64 *, __int64 (__fastcall *)(void *), __int64); // rax
  unsigned int v15; // edx
  const char *v16; // [rsp+20h] [rbp-98h]
  __m128i v17[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v18; // [rsp+70h] [rbp-48h]
  _BYTE v19[64]; // [rsp+78h] [rbp-40h] BYREF
  int v20; // [rsp+C0h] [rbp+8h] BYREF
  __int16 v21; // [rsp+C4h] [rbp+Ch]
  int v22; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+20h]

  v23 = a4;
  LOBYTE(v22) = a3;
  v4 = a2;
  v6 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v23 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::GetCachedFeatureEnabledState(
                       a1,
                       v17);
    LOWORD(v6) = v23;
  }
  v20 = 0;
  v21 = 3;
  v22 = 3;
  v7 = v4;
  v8 = 4 * (v4 ^ 1) + 2;
  v9 = wil_details_FeatureReporting_RecordUsageInCache(v19, a1 + 2, v8, 0LL);
  v11 = *(__m128i *)v9;
  v17[0] = v11;
  v18 = *(_QWORD *)(v9 + 16);
  if ( _mm_cvtsi128_si32(v11) )
  {
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      &wil::details::g_enabledStateManager,
      0x27F07E2u,
      (struct wil_details_FeatureReportingCache *)(a1 + 2));
    v11 = v17[0];
  }
  v12 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 4));
  if ( (_DWORD)v12 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)0x27F07E2,
      _mm_cvtsi128_si32(_mm_srli_si128(v11, 8)),
      v12,
      v10,
      v16);
  v13 = v18;
  if ( !(_DWORD)v18 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( !qword_1808980D0 )
    {
      qword_1808980D0 = 0LL;
      v14 = (void (__fastcall *)(__int64 *, __int64 (__fastcall *)(void *), __int64))g_wil_details_internalSubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v14 = (void (__fastcall *)(__int64 *, __int64 (__fastcall *)(void *), __int64))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        v14(&qword_1808980D0, _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_, -1LL);
      }
    }
    ReleaseSRWLockExclusive(&SRWLock);
  }
  if ( (v6 & 0x400) != 0 )
  {
    v15 = v8;
    if ( (v6 & 0x800) != 0 )
      v15 = v8 | 0x80000000;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x27F07E2, v15, 0, v10, v16);
  }
  if ( !v13 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v12) = 3;
      g_wil_details_realtimeFeatureUsageHook(41879522LL, (unsigned int)v8, v12);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(41879522LL, &v20, 0LL, v7, &v22, 0LL, 0, 1LL);
  }
}
