/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B9B04
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800295CC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800479F0 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800A2940 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 *     ?SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800B9A1C (-SetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800CC514 (-SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilter.c)
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800CDB78 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x1800F20A0 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEBUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Z @ 0x18015F31C (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@.c)
 *     ?IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapSize@Imaging@Graphics@56@V?$com_ptr_t@UIWICBitmapSource@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801BF750 (-IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapS.c)
 *     ?UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18021A4E4 (-UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x18057DAE8 (-ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 *     ?GetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x18057E1D4 (-GetTabTearOutSupportedForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?GetTabTearOutSupportedIfWindowExists@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_K@Z @ 0x18057E210 (-GetTabTearOutSupportedIfWindowExists@WindowTabHost@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A9D4C (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B960C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x1800B9854 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801EC0A8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x18027E58C (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
        int *a1,
        unsigned __int8 a2,
        char a3,
        ...)
{
  unsigned int v3; // esi
  int v5; // ebx
  unsigned int v6; // ebp
  __int64 v7; // rsi
  __m128i *v8; // rax
  unsigned int v9; // r9d
  __m128i v10; // xmm1
  __int64 v11; // r8
  void (__fastcall *v12)(__int64 *, __int64 (__fastcall *)(void *), __int64); // rax
  unsigned int v13; // edx
  const char *v14; // [rsp+20h] [rbp-98h]
  __m128i v15; // [rsp+50h] [rbp-68h]
  __int64 v16; // [rsp+70h] [rbp-48h]
  _BYTE v17[64]; // [rsp+78h] [rbp-40h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+8h] BYREF
  int v19; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  va_list va1; // [rsp+E0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  LOBYTE(v19) = a3;
  v3 = a2;
  v5 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v18 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::GetCachedFeatureEnabledState(
             (wil::details *)a1,
             &v18);
    LOWORD(v5) = v18;
  }
  LODWORD(v20) = 0;
  WORD2(v20) = 3;
  v19 = 3;
  v6 = v3;
  v7 = 4 * (v3 ^ 1) + 2;
  v8 = (__m128i *)wil_details_FeatureReporting_RecordUsageInCache(v17, a1 + 2, v7, 0LL);
  v10 = *v8;
  v15 = *v8;
  v16 = v8[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(*v8) )
  {
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      (char *)&wil::details::g_enabledStateManager,
      0x27F07E2u,
      (struct wil_details_FeatureReportingCache *)(a1 + 2));
    v10 = v15;
  }
  v11 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v10, 4));
  if ( (_DWORD)v11 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)0x27F07E2,
      _mm_cvtsi128_si32(_mm_srli_si128(v10, 8)),
      v11,
      v9,
      v14);
  if ( !(_DWORD)v16 && wil::details::g_enabledStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( !qword_1808D8720 )
    {
      qword_1808D8720 = 0LL;
      v12 = (void (__fastcall *)(__int64 *, __int64 (__fastcall *)(void *), __int64))g_wil_details_internalSubscribeFeatureStateChangeNotification;
      if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
        || (v12 = (void (__fastcall *)(__int64 *, __int64 (__fastcall *)(void *), __int64))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
      {
        v12(&qword_1808D8720, _lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_, -1LL);
      }
    }
    ReleaseSRWLockExclusive(&SRWLock);
  }
  if ( (v5 & 0x400) != 0 )
  {
    v13 = v7;
    if ( (v5 & 0x800) != 0 )
      v13 = v7 | 0x80000000;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x27F07E2, v13, 0, v9, v14);
  }
  if ( !(_DWORD)v16 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v11) = 3;
      g_wil_details_realtimeFeatureUsageHook(41879522LL, (unsigned int)v7, v11);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(41879522LL, (__int64 *)va, 0LL, v6, &v19, 0LL, 0, 1LL);
  }
}
