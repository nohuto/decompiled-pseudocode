/*
 * XREFs of ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x180391580
 * Callers:
 *     CVirtualTouchpadExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1803918D0 (CVirtualTouchpadExperienceManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001BAEC (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180071F24 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??0?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802AB714 (--0-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_.c)
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x1802BE380 (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??0?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18038EA88 (--0-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$0_ea_18038EA88.c)
 *     ??4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18038ECEC (--4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@_N@Z @ 0x18038F350 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@.c)
 *     ?FindMonitor@@YAPEAUHMONITOR__@@$$QEAV?$function@$$A6A_NPEAUHMONITOR__@@@Z@std@@@Z @ 0x18038FCF4 (-FindMonitor@@YAPEAUHMONITOR__@@$$QEAV-$function@$$A6A_NPEAUHMONITOR__@@@Z@std@@@Z.c)
 *     ?PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180390D24 (-PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180391270 (-SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x180391B18 (-StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x180392188 (-UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::Show(__int64 a1, int a2, float *a3)
{
  char v6; // si
  int updated; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  POINT pt; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  char v17; // [rsp+60h] [rbp-A0h]
  _QWORD v18[8]; // [rsp+70h] [rbp-90h] BYREF
  int pvData; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v20[64]; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v21; // [rsp+F4h] [rbp-Ch]
  _QWORD v22[42]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v23[42]; // [rsp+250h] [rbp+150h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3D8h] [rbp+2D8h]

  if ( (*(_DWORD *)(a1 + 768) & 0xFFFFFFFB) == 0 )
  {
    v16 = a1;
    v6 = 1;
    v17 = 1;
    *(_DWORD *)(a1 + 768) = 1;
    wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v22);
    v22[0] = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
    TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::StartActivity((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v22);
    if ( !*(_QWORD *)(a1 + 344) )
    {
      updated = CVirtualTouchpadExperienceManager::SetupExperienceFrame((CVirtualTouchpadExperienceManager *)a1);
      v8 = updated;
      if ( updated < 0 )
      {
        v9 = 613LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
          (const char *)(unsigned int)updated);
        TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v22);
        *(_DWORD *)(a1 + 768) = 4;
        return v8;
      }
    }
    pvData = 1;
    memset_0(v20, 0, sizeof(v20));
    v21 = 0LL;
    pcbData = 76;
    if ( a2 == 1
      && !RegGetValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\Touchpad\\",
            L"Anchor",
            0x20000008u,
            0LL,
            &pvData,
            &pcbData)
      && pcbData == 76 )
    {
      v18[0] = off_18070DBF0;
      v18[1] = &pvData;
      v18[7] = v18;
      pt = (POINT)FindMonitor((__int64)v18);
      std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
        (__int64)v18,
        v10);
      v11 = v21;
    }
    else
    {
      v6 = 0;
      pt.x = (int)*a3;
      pt.y = (int)a3[1];
      pt = (POINT)MonitorFromPoint(pt, 2u);
      v11 = *(_QWORD *)(a1 + 292);
    }
    v15 = v11;
    updated = CVirtualTouchpadExperienceManager::ComputeConstraints(
                (CVirtualTouchpadExperienceManager *)a1,
                (HMONITOR *)&pt,
                v6);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 642LL;
      goto LABEL_16;
    }
    updated = CVirtualTouchpadExperienceManager::UpdateFramePositionAndSize((CVirtualTouchpadExperienceManager *)a1);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 643LL;
      goto LABEL_16;
    }
    CVirtualTouchpadExperienceManager::PositionCursorForInteraction((CVirtualTouchpadExperienceManager *)a1);
    *(_BYTE *)(a1 + 316) = 0;
    updated = CSingleViewShellExperience::Show(
                a1 + 64,
                (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)3);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 648LL;
      goto LABEL_16;
    }
    wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v23,
      (__int64)v22,
      0);
    v23[0] = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
    TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::operator=(a1 + 376, (__int64)v23);
    TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v23);
    TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v22);
  }
  return 0LL;
}
