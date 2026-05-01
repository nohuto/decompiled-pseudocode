/*
 * XREFs of ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180177550
 * Callers:
 *     ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180047020 (-IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800472C0 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180322C70 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180322F20 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x1800B9854 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z @ 0x1800B9E5C (-EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil@@QEAAXP6AXPEAX@Z@Z.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801EC0A8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x18027E58C (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803230F4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AddFullScreenOptionalHan.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::__private_IsEnabledPreCheck(
        int *a1,
        char a2)
{
  int v2; // ebx
  __m128i *v4; // rax
  unsigned int v5; // r9d
  __m128i v6; // xmm1
  __int64 v7; // r8
  unsigned int v9; // edx
  const char *v10; // [rsp+20h] [rbp-88h]
  __m128i v11; // [rsp+50h] [rbp-58h]
  __int64 v12; // [rsp+70h] [rbp-38h]
  _BYTE v13[48]; // [rsp+78h] [rbp-30h] BYREF
  int v14; // [rsp+B0h] [rbp+8h] BYREF
  __int16 v15; // [rsp+B4h] [rbp+Ch]
  int v16; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+18h] BYREF

  LOBYTE(v16) = a2;
  v2 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v17 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::GetCachedFeatureEnabledState(
                       a1,
                       &v17);
    LOWORD(v2) = v17;
  }
  v15 = 3;
  v14 = 0;
  v16 = 3;
  v4 = (__m128i *)wil_details_FeatureReporting_RecordUsageInCache(v13, a1 + 2, 2LL, 0LL);
  v6 = *v4;
  v11 = *v4;
  v12 = v4[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(*v4) )
  {
    wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
      &wil::details::g_enabledStateManager,
      0x9A07C0u,
      (struct wil_details_FeatureReportingCache *)(a1 + 2));
    v6 = v11;
  }
  v7 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
  if ( (_DWORD)v7 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)0x9A07C0,
      _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)),
      v7,
      v5,
      v10);
  if ( !(_DWORD)v12 )
    wil::details::EnabledStateManager::EnsureSubscribedToUsageFlush(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (void (*)(void *))_lambda_aa194dc0bf891154933407eb98fb868a_::_lambda_invoker_cdecl_);
  if ( (v2 & 0x400) != 0 )
  {
    v9 = 2;
    if ( (v2 & 0x800) != 0 )
      v9 = -2147483646;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x9A07C0, v9, 0, v5, v10);
  }
  if ( !(_DWORD)v12 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v7) = 3;
      g_wil_details_realtimeFeatureUsageHook(10094528LL, 2LL, v7);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(10094528LL, &v14, 0LL, 1LL, &v16, 0LL, 0, 1LL);
  }
  return 1;
}
