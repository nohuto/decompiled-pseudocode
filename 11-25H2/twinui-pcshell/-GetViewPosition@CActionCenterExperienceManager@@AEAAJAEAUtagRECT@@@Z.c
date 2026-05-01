/*
 * XREFs of ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18035EB50
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180153D78 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x1800A9FFC (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1801B87F8 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B8A5C (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?DynamicSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180246F98 (-DynamicSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shel.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetMonitorFromLastInvocationPoint@CActionCenterExperienceManager@@AEAAPEAUHMONITOR__@@XZ @ 0x18035EA20 (-GetMonitorFromLastInvocationPoint@CActionCenterExperienceManager@@AEAAPEAUHMONITOR__@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAA_NXZ @ 0x180362B98 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::GetViewPosition(__int64 **this, LPRECT lprc)
{
  HMONITOR MonitorFromLastInvocationPoint; // rax
  const char *v5; // r9
  ExperienceManagerUtils *v6; // rsi
  __int64 v7; // rdx
  HMONITOR v9; // rdx
  LONG v10; // ecx
  LONG right; // edx
  float v12; // xmm0_4
  int PerMonitorDpi; // eax
  int v14; // esi
  double v15; // xmm0_8
  int v16; // eax
  double v17; // xmm0_8
  int v18; // ecx
  int v19; // r14d
  POINT pt; // [rsp+20h] [rbp-50h] BYREF
  RECT rc; // [rsp+28h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  SetRectEmpty(lprc);
  if ( this[19] )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_38762814>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_38762814>::GetImpl'::`2'::impl) )
    {
      MonitorFromLastInvocationPoint = CActionCenterExperienceManager::GetMonitorFromLastInvocationPoint((CActionCenterExperienceManager *)this);
    }
    else
    {
      pt = 0LL;
      MonitorFromLastInvocationPoint = MonitorFromPoint(0LL, 1u);
    }
    v6 = (ExperienceManagerUtils *)MonitorFromLastInvocationPoint;
    if ( MonitorFromLastInvocationPoint == (HMONITOR)-1LL )
    {
      v7 = 1475LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v7,
               (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
               v5);
    }
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( !GetMonitorInfoW(MonitorFromLastInvocationPoint, &mi) )
    {
      v7 = 1478LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v7,
               (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
               v5);
    }
    *lprc = mi.rcMonitor;
    if ( *((_BYTE *)this + 392) && this[43] )
    {
      winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
        this + 43,
        &pt,
        (__int64)v6);
      if ( pt )
      {
        winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
          (__int64 *)&pt,
          &rc);
        v10 = (int)*(float *)&rc.top;
        right = mi.rcMonitor.right;
        v12 = *(float *)&rc.bottom + *(float *)&rc.top;
        lprc->left = mi.rcMonitor.left;
        lprc->top = v10;
        lprc->right = right;
        lprc->bottom = (int)v12;
      }
      else
      {
        *lprc = mi.rcWork;
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&pt);
    }
    PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi(v6, v9);
    v14 = PerMonitorDpi;
    v15 = *((double *)this + 79);
    if ( v15 > 0.0 )
      lprc->bottom -= MulDiv((int)v15, PerMonitorDpi, 96);
    rc = 0LL;
    pt.x = 0;
    v16 = (*(__int64 (__fastcall **)(__int64 *, RECT *, POINT *))(*this[55] + 40))(this[55], &rc, &pt);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F2,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
    if ( !IsRectEmpty(&rc) && lprc->bottom > rc.top && ((pt.x - 1) & 0xFFFFFFFD) == 0 )
      lprc->bottom = rc.top;
    if ( *((_BYTE *)this + 393) )
    {
      v17 = *((double *)this + 84);
      v18 = (int)v17;
      if ( v17 <= 0.0 )
        v18 = (int)*((float *)this + 44);
      lprc->top = lprc->bottom - MulDiv(v18, v14, 96);
    }
    v19 = MulDiv((int)*((float *)this + 43), v14, 96);
    if ( (unsigned int)Mirror_IsThreadRTL() )
      lprc->right = v19 + lprc->left;
    else
      lprc->left = lprc->right - v19;
    if ( !*((_BYTE *)this + 393) )
      *((double *)this + 82) = (double)MulDiv((int)*((float *)this + 44), v14, 96);
  }
  return 0LL;
}
