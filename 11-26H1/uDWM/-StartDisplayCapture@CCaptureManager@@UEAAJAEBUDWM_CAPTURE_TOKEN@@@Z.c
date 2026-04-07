/*
 * XREFs of ?StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A1DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800767BC (-_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180086440 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800868AC (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x18008A6BC (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18009E490 (--1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x1800A1BC8 (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 *     ?_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3EA8 (-_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3FBC (-_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_EN.c)
 *     ?find@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@2@AEBT_LARGE_INTEGER@@@Z @ 0x1800A6C1C (-find@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureMa.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CCaptureManager::StartDisplayCapture(CCaptureManager *this, const struct DWM_CAPTURE_TOKEN *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  HMONITOR v6; // r14
  int v7; // ebx
  int v8; // edi
  CCaptureManager *v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  DWORD v13; // edx
  DWORD v14; // edx
  int v16[2]; // [rsp+20h] [rbp-E0h] BYREF
  char v17; // [rsp+28h] [rbp-D8h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19[2]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>>,0>>::find(
    (char *)this + 136,
    v16,
    a2);
  if ( *(_QWORD *)v16 != *((_QWORD *)this + 18) )
  {
    v5 = *(_QWORD *)v16 + 24LL;
    v6 = *(HMONITOR *)(*(_QWORD *)v16 + 40LL);
    v7 = *(_DWORD *)a2;
    v8 = *((_DWORD *)a2 + 1);
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v19,
      (__int64)"StartDisplayCapture");
    *(_QWORD *)v19 = &WindowFrameLoggingTelemetry::StartDisplayCapture::`vftable';
    WindowFrameLoggingTelemetry::StartDisplayCapture::StartActivity(
      (WindowFrameLoggingTelemetry::StartDisplayCapture *)v19,
      v6,
      v8,
      v7);
    *(_QWORD *)v16 = v19;
    v17 = 1;
    if ( *(_BYTE *)(v5 + 48) )
    {
      if ( v6 )
      {
        v11 = CCaptureManager::_AddProjectionBorderForDisplay(
                v9,
                v6,
                (struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *)v5);
        v4 = v11;
        if ( v11 < 0 )
        {
          v12 = 399LL;
LABEL_7:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v12,
            (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v11);
          wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
            v19,
            v13);
          WindowFrameLoggingTelemetry::StartDisplayCapture::~StartDisplayCapture((WindowFrameLoggingTelemetry::StartDisplayCapture *)v19);
          goto LABEL_13;
        }
      }
      else
      {
        v11 = CCaptureManager::_AddProjectionBorderForAllDisplays(
                v9,
                (struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *)v5);
        v4 = v11;
        if ( v11 < 0 )
        {
          v12 = 403LL;
          goto LABEL_7;
        }
      }
    }
    v11 = CCaptureControllerProxy::SetCaptureState(*(CCaptureControllerProxy **)(v5 + 8), 1, v10);
    v4 = v11;
    if ( v11 >= 0 )
    {
      *(_BYTE *)(v5 + 49) = 1;
      CCaptureManager::_EnsureCursorStateForCapture(this);
      wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v19, v14);
      WindowFrameLoggingTelemetry::StartDisplayCapture::~StartDisplayCapture((WindowFrameLoggingTelemetry::StartDisplayCapture *)v19);
      v4 = 0;
      goto LABEL_13;
    }
    v12 = 407LL;
    goto LABEL_7;
  }
  v4 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17E,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)0x80070057LL);
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v4;
}
