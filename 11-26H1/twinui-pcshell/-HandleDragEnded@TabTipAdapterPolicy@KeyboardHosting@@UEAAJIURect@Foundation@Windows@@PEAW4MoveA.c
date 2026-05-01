/*
 * XREFs of ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x180483380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x18017606C (-GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Win.c)
 *     ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x1801D4400 (-SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z.c)
 *     ShouldSaveLastFloatingPosition @ 0x1801F0180 (ShouldSaveLastFloatingPosition.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ @ 0x180476260 (-GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ.c)
 *     ?GetMonitorRect@MonitorInformation@KeyboardHosting@@QEBA?AURect@Foundation@Windows@@XZ @ 0x180476298 (-GetMonitorRect@MonitorInformation@KeyboardHosting@@QEBA-AURect@Foundation@Windows@@XZ.c)
 *     ?GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA?AW4DEVICE_SCALE_FACTOR@@XZ @ 0x1804762E0 (-GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA-AW4DEVICE_SCALE_FACTOR@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     ??$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEBU123@II@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAURect@Foundation@Windows@@1AEBU123@$$QEAI3@Z @ 0x180481C58 (--$HandleDragEnded@AEAIAEAURect@Foundation@Windows@@AEAU123@AEBU123@II@TouchKeyboardExperienceTe.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x1804849B4 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x180484E60 (-SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@AEBI@Z @ 0x180485A78 (-find@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleDragEnded(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int *a7)
{
  unsigned int v7; // r13d
  unsigned int *v9; // rsi
  __int64 v10; // rbx
  __m128i v11; // xmm7
  __m128i v12; // xmm6
  HMONITOR CurrentMonitor; // rsi
  _BYTE *v14; // r14
  int v15; // eax
  unsigned int v16; // esi
  __int128 *MonitorRect; // rax
  int ScaleFactor; // ecx
  unsigned int v20; // [rsp+38h] [rbp-B1h] BYREF
  _QWORD v21[3]; // [rsp+40h] [rbp-A9h] BYREF
  RTL_SRWLOCK *v22; // [rsp+58h] [rbp-91h] BYREF
  _OWORD v23[4]; // [rsp+68h] [rbp-81h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-41h]
  unsigned int v25; // [rsp+B0h] [rbp-39h]
  __int128 v26; // [rsp+B8h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+47h]

  v7 = a2;
  v20 = a2;
  LODWORD(v21[0]) = a2;
  v9 = a7;
  *(_QWORD *)&v26 = a7;
  *(_OWORD *)a6 = *a3;
  *a4 = 0;
  *a5 = 0;
  *a7 = 0;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v22, (RTL_SRWLOCK *)(a1 + 800));
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find(
    a1 + 736,
    &v21[1],
    v21);
  if ( v21[1] == *(_QWORD *)(a1 + 744) )
  {
    v10 = a1 + 232;
  }
  else
  {
    v11 = *(__m128i *)(v21[1] + 20LL);
    v23[0] = v11;
    v23[1] = *(_OWORD *)(v21[1] + 36LL);
    v23[2] = *(_OWORD *)(v21[1] + 52LL);
    v12 = *(__m128i *)(v21[1] + 68LL);
    v23[3] = v12;
    v24 = *(_QWORD *)(v21[1] + 84LL);
    v25 = *(_DWORD *)(v21[1] + 92LL);
    *(_OWORD *)&v21[1] = *(_OWORD *)a6;
    CurrentMonitor = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(v25, (const __m128i *)&v21[1]);
    v10 = a1 + 232;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
    {
      if ( KeyboardHosting::MonitorInformation::GetMonitorHandle((RTL_SRWLOCK *)(a1 + 232)) != CurrentMonitor )
        KeyboardHosting::MonitorInformation::SetMonitor((RTL_SRWLOCK *)(a1 + 232), CurrentMonitor);
      v14 = (_BYTE *)(a1 + 860);
      if ( *(_BYTE *)(a1 + 860)
        && KeyboardHosting::MonitorInformation::GetMonitorHandle((RTL_SRWLOCK *)(a1 + 400)) != CurrentMonitor )
      {
        KeyboardHosting::MonitorInformation::SetMonitor((RTL_SRWLOCK *)(a1 + 400), CurrentMonitor);
      }
    }
    else
    {
      if ( *(HMONITOR *)v10 != CurrentMonitor )
        KeyboardHosting::MonitorInformation::SetMonitor((RTL_SRWLOCK *)(a1 + 232), CurrentMonitor);
      v14 = (_BYTE *)(a1 + 860);
      if ( *(_BYTE *)(a1 + 860) && *(HMONITOR *)(a1 + 400) != CurrentMonitor )
        KeyboardHosting::MonitorInformation::SetMonitor((RTL_SRWLOCK *)(a1 + 400), CurrentMonitor);
      v7 = v20;
    }
    v9 = (unsigned int *)v26;
    *(_DWORD *)v26 = 3;
    if ( ShouldSaveLastFloatingPosition((__int64)v23 + 4) )
    {
      v21[1] = *(_QWORD *)a6;
      v15 = KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
              (KeyboardHosting::TabTipAdapterPolicy *)a1,
              (const struct Windows::Foundation::Point *)&v21[1],
              v7);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x22A,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
          (const char *)(unsigned int)v15);
        goto LABEL_33;
      }
      if ( *v14 )
        KeyboardHosting::TabTipAdapterPolicy::SaveGlobalPosition(
          (KeyboardHosting::TabTipAdapterPolicy *)a1,
          (const struct Windows::Foundation::Point *)&v21[1]);
      v9 = (unsigned int *)v26;
    }
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) == 2
      && ((unsigned __int8)_mm_cvtsi128_si32(v12) || (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v12, 1))) )
    {
      *(_DWORD *)(a1 + 812) = *(_DWORD *)a6;
      *(_DWORD *)(a1 + 816) = *(_DWORD *)(a6 + 4);
      *(_BYTE *)(a1 + 820) = 1;
      *(_DWORD *)(a1 + 856) = v7;
    }
    *(_BYTE *)(a1 + 808) = 1;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    MonitorRect = KeyboardHosting::MonitorInformation::GetMonitorRect(v10, &v21[1]);
  }
  else
  {
    v26 = *(_OWORD *)(v10 + 8);
    MonitorRect = &v26;
  }
  v26 = *MonitorRect;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
    ScaleFactor = KeyboardHosting::MonitorInformation::GetScaleFactor((RTL_SRWLOCK *)v10);
  else
    ScaleFactor = *(_DWORD *)(v10 + 40);
  v20 = *v9;
  LODWORD(v21[1]) = ScaleFactor;
  TouchKeyboardExperienceTelemetryLogger::HandleDragEnded<unsigned int &,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect const &,unsigned int,unsigned int>(
    (unsigned int *)v21,
    (const struct Windows::Foundation::Rect *)a6,
    (const struct Windows::Foundation::Rect *)(a1 + 176),
    (const struct Windows::Foundation::Rect *)&v26,
    (unsigned int *)&v21[1],
    &v20);
  v16 = 0;
LABEL_33:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v22);
  return v16;
}
