/*
 * XREFs of ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802396A4
 * Callers:
 *     ?DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18001E180 (-DisplaySettingsChange@CToastCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MO.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003E5A0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     ?OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x18022036C (-OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 *     CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180239510 (CToastCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1.c)
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x18037C490 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnControlCenterVisibilityChanged@CToastCenterExperienceManager@@AEAAJ_N@Z @ 0x18037CFD0 (-OnControlCenterVisibilityChanged@CToastCenterExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ??1EM_PositionViewActivity@ToastCenterTelemetry@@QEAA@XZ @ 0x18001C300 (--1EM_PositionViewActivity@ToastCenterTelemetry@@QEAA@XZ.c)
 *     ??$EM_ToastCenterWindowSize@AEBHAEAHJJ@ToastCenterTelemetry@@SAXAEBHAEAH$$QEAJ2@Z @ 0x18001C838 (--$EM_ToastCenterWindowSize@AEBHAEAHJJ@ToastCenterTelemetry@@SAXAEBHAEAH$$QEAJ2@Z.c)
 *     ??$?0$$V@EM_PositionViewActivity@ToastCenterTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18001C994 (--$-0$$V@EM_PositionViewActivity@ToastCenterTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x180029AD8 (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180068D48 (-Stop@-$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ??$ViewExperienceRect@MMMM@EM_PositionViewActivity@ToastCenterTelemetry@@SAX$$QEAM000@Z @ 0x1800999E4 (--$ViewExperienceRect@MMMM@EM_PositionViewActivity@ToastCenterTelemetry@@SAX$$QEAM000@Z.c)
 *     ?GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z @ 0x1801B52E0 (-GetPerMonitorDpi@ExperienceManagerUtils@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x1801D6274 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?DynamicSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180237ECC (-DynamicSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shel.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028038C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802816D8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A0188 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind.c)
 *     ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x1802AB4CC (-IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$ToastCenterMovedForOcclusionAPI@AEAH@ToastCenterTelemetry@@SAXAEAH@Z @ 0x18037B38C (--$ToastCenterMovedForOcclusionAPI@AEAH@ToastCenterTelemetry@@SAXAEAH@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18037B894 (--1-$com_ptr_t@V-$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@Uerr_retu.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18037B8E4 (--1-$test_data_control@V-$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@@.c)
 *     ?TryGetOcclusionMarginFromProtectedForegroundWindow@CToastCenterExperienceManager@@CAHXZ @ 0x18037F398 (-TryGetOcclusionMarginFromProtectedForegroundWindow@CToastCenterExperienceManager@@CAHXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18037F718 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CToastCenterExperienceManager::PositionView(__int64 **this)
{
  int v2; // eax
  unsigned int LastError; // edi
  __int64 v4; // rdx
  __int64 *v5; // rcx
  int v6; // eax
  HMONITOR v8; // rdi
  const char *v9; // r9
  __int64 v10; // rdx
  HMONITOR v11; // rdx
  int PerMonitorDpi; // eax
  int v13; // esi
  double v14; // xmm0_8
  int v15; // eax
  int v16; // eax
  int OcclusionMarginFromProtectedForegroundWindow; // edi
  _QWORD *v18; // rax
  __int64 v19; // rdi
  int v20; // eax
  LONG top; // eax
  __int64 v22; // rdx
  LONG v23; // edi
  float left; // [rsp+30h] [rbp-D0h] BYREF
  float v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT rcMonitor; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT v29; // [rsp+60h] [rbp-A0h] BYREF
  RECT rc; // [rsp+70h] [rbp-90h] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v32[336]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  ToastCenterTelemetry::EM_PositionViewActivity::EM_PositionViewActivity((ToastCenterTelemetry::EM_PositionViewActivity *)v32);
  if ( this[16] )
  {
    if ( !this[92] || *((_DWORD *)this + 186) != 1 )
    {
      *(_QWORD *)&v29.left = 0LL;
      v8 = MonitorFromPoint(0LL, 1u);
      if ( v8 == (HMONITOR)-1LL )
      {
        v10 = 1403LL;
      }
      else
      {
        mi.cbSize = 40;
        memset(&mi.rcMonitor, 0, 36);
        if ( GetMonitorInfoW(v8, &mi) )
        {
          rcMonitor = mi.rcMonitor;
          if ( *((_BYTE *)this + 384) && this[40] )
          {
            winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
              this + 40,
              &v29,
              (__int64)v8);
            if ( *(_QWORD *)&v29.left )
            {
              winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
                (__int64 *)&v29.left,
                &v27);
              rcMonitor.left = mi.rcMonitor.left;
              rcMonitor.right = mi.rcMonitor.right;
              rcMonitor.bottom = (int)(float)(*((float *)&v27 + 3) + *((float *)&v27 + 1));
            }
            else
            {
              rcMonitor = mi.rcWork;
            }
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v29);
          }
          PerMonitorDpi = ExperienceManagerUtils::GetPerMonitorDpi((ExperienceManagerUtils *)v8, v11);
          v13 = PerMonitorDpi;
          v14 = *((double *)this + 49);
          if ( v14 > 0.0 )
          {
            v15 = MulDiv((int)v14, PerMonitorDpi, 96);
            rcMonitor.bottom -= v15;
          }
          rc = 0LL;
          v26 = 0;
          v16 = (*(__int64 (__fastcall **)(__int64 *, RECT *, int *))(*this[53] + 40))(this[53], &rc, &v26);
          if ( v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x5AA,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
              (const char *)(unsigned int)v16);
          if ( IsRectEmpty(&rc) || rcMonitor.bottom <= rc.top || ((v26 - 1) & 0xFFFFFFFD) != 0 )
          {
            OcclusionMarginFromProtectedForegroundWindow = CToastCenterExperienceManager::TryGetOcclusionMarginFromProtectedForegroundWindow();
            left = *(float *)&OcclusionMarginFromProtectedForegroundWindow;
            if ( OcclusionMarginFromProtectedForegroundWindow )
            {
              *(_QWORD *)&v29.left = 0LL;
              v18 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>>::ensure_data(&v29);
              tip2::details::shared_data<1,0,0>::start(*v18 + 8LL, &v27);
              rcMonitor.bottom -= MulDiv(OcclusionMarginFromProtectedForegroundWindow, v13, 96);
              v19 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>>::ensure_data(&v29);
              *(_QWORD *)&v27 = v19;
              if ( v19 )
                _InterlockedIncrement((volatile signed __int32 *)(v19 + 280));
              tip2::details::shared_data<1,0,0>::begin_update(v19 + 8);
              *(_BYTE *)(v19 + 272) = 1;
              tip2::test_data_control<tip2::details::merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>>::~test_data_control<tip2::details::merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>>(&v27);
              ToastCenterTelemetry::ToastCenterMovedForOcclusionAPI<int &>(&left);
              if ( *(_QWORD *)&v29.left )
                tip2::details::shared_data<1,0,0>::complete_without_lock(*(_QWORD *)&v29.left + 8LL);
              wil::com_ptr_t<tip2::details::merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>,wil::err_returncode_policy>(&v29);
            }
          }
          else
          {
            rcMonitor.bottom = rc.top;
          }
          v20 = MulDiv((int)*((float *)this + 38), v13, 96);
          rcMonitor.top = rcMonitor.bottom - v20;
          if ( ToastSettingsHelper::IsStackedPriorityToastsEnabled() && *((_BYTE *)this + 384) )
          {
            top = rcMonitor.top;
            if ( rcMonitor.top < mi.rcWork.top )
              top = mi.rcWork.top;
            rcMonitor.top = top;
          }
          v23 = MulDiv((int)*((float *)this + 37), v13, 96);
          v29.left = v23;
          if ( *((_BYTE *)this + 403) )
          {
            LOBYTE(v22) = 1;
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_CCW>::ReportUsage(
              &`wil::Feature<__WilFeatureTraits_Feature_CCW>::GetImpl'::`2'::impl,
              v22);
            if ( (unsigned int)Mirror_IsThreadRTL() )
            {
              rcMonitor.left += MulDiv(68, v13, 96);
              rcMonitor.right = rcMonitor.left + v23;
            }
            else
            {
              rcMonitor.right -= MulDiv(68, v13, 96);
              rcMonitor.left = rcMonitor.right - v23;
            }
          }
          else if ( (unsigned int)Mirror_IsThreadRTL() )
          {
            rcMonitor.right = v23 + rcMonitor.left;
          }
          else
          {
            rcMonitor.left = rcMonitor.right - v23;
          }
          LODWORD(v27) = MulDiv((int)*((float *)this + 38), v13, 96);
          LODWORD(left) = rcMonitor.bottom - rcMonitor.top;
          LODWORD(v25) = rcMonitor.right - rcMonitor.left;
          ToastCenterTelemetry::EM_ToastCenterWindowSize<int const &,int &,long,long>(
            &v29.left,
            (int *)&v27,
            (int *)&v25,
            (int *)&left);
          *(float *)&v29.left = (float)rcMonitor.bottom;
          *(float *)&v27 = (float)rcMonitor.right;
          v25 = (float)rcMonitor.top;
          left = (float)rcMonitor.left;
          ToastCenterTelemetry::EM_PositionViewActivity::ViewExperienceRect<float,float,float,float>(
            (int *)&left,
            (int *)&v25,
            (int *)&v27,
            &v29.left);
          v2 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)(this + 13), &rcMonitor);
          LastError = v2;
          if ( v2 < 0 )
          {
            v4 = 1546LL;
            goto LABEL_49;
          }
          goto LABEL_8;
        }
        v10 = 1406LL;
      }
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)v10,
                    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
                    v9);
      goto LABEL_9;
    }
    *(_QWORD *)&v29.left = 0LL;
    v29.right = MulDiv((int)*((float *)this + 37), 150, 100);
    v29.bottom = MulDiv((int)*((float *)this + 38), 150, 100);
    v2 = CSingleViewShellExperience::SetPosition((CSingleViewShellExperience *)(this + 13), &v29);
    LastError = v2;
    if ( v2 < 0 )
    {
      v4 = 1391LL;
LABEL_49:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2);
      goto LABEL_9;
    }
    *(_QWORD *)&rcMonitor.left = 0LL;
    *(float *)&rcMonitor.right = (float)(v29.right - v29.left);
    *(float *)&rcMonitor.bottom = (float)(v29.bottom - v29.top);
    v5 = this[92];
    rc = rcMonitor;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64 *, RECT *))(*v5 + 64))(v5, this[15], this[16], &rc);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x573,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
  }
LABEL_8:
  wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v32, 0);
  LastError = 0;
LABEL_9:
  ToastCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity((ToastCenterTelemetry::EM_PositionViewActivity *)v32);
  return LastError;
}
