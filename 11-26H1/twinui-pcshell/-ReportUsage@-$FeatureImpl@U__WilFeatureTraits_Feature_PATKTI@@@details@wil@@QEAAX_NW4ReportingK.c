/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B8FF8
 * Callers:
 *     ?UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18008FD30 (-UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x1800B88D0 (-OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z.c)
 *     wistd::__function::__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_const_(&)[32])_::operator() @ 0x1800B8980 (wistd--__function--__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_c.c)
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x1800B8B70 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x1800BB438 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800F8858 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1801364A0 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataPro.c)
 *     ?OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18024B8F8 (-OnTabtipRegistryChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024C550 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x180468C54 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 *     _lambda_5c8612707d1ce1f8a03bb177e1540ce1_::operator() @ 0x180469EBC (_lambda_5c8612707d1ce1f8a03bb177e1540ce1_--operator().c)
 *     ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x1804704F0 (-ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?HandleAutoInvokeInDesktopModeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804832C0 (-HandleAutoInvokeInDesktopModeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellReque.c)
 *     ?HandleAutoInvokeInDesktopModePolicyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804832F0 (-HandleAutoInvokeInDesktopModePolicyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4Shel.c)
 *     ?HandleConvertibleSlateModeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180483320 (-HandleConvertibleSlateModeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestT.c)
 *     ?HandleDeviceConvertibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180483350 (-HandleDeviceConvertibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestT.c)
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804838F0 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 *     ?LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x180484170 (-LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800B96E4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@AE.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x1800B9854 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801EC0A8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x18027E58C (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
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
    v18 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::GetCachedFeatureEnabledState(
                       a1,
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
      &wil::details::g_enabledStateManager,
      0x234B251u,
      (struct wil_details_FeatureReportingCache *)(a1 + 2));
    v10 = v15;
  }
  v11 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v10, 4));
  if ( (_DWORD)v11 )
    wil::details::WilApi_RecordFeatureUsage(
      (wil::details *)0x234B251,
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
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x234B251, v13, 0, v9, v14);
  }
  if ( !(_DWORD)v16 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v11) = 3;
      g_wil_details_realtimeFeatureUsageHook(37007953LL, (unsigned int)v7, v11);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(37007953LL, (__int64 *)va, 0LL, v6, &v19, 0LL, 0, 1LL);
  }
}
