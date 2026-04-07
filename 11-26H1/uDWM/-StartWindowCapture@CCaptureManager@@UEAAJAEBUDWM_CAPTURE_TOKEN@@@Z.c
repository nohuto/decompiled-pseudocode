/*
 * XREFs of ?StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A20B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800767BC (-_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180086440 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800868AC (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x18008A6BC (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18009E4BC (--1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800A1CCC (-StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800A53C8 (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5930 (-_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@2@AEBT_LARGE_INTEGER@@@Z @ 0x1800A6C1C (-find@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureMa.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CCaptureManager::StartWindowCapture(CCaptureManager *this, const struct DWM_CAPTURE_TOKEN *a2)
{
  HWND v4; // rbx
  unsigned int v5; // edi
  int v6; // edi
  int v7; // esi
  HWND v8; // r14
  CCaptureManager *v9; // rcx
  int ProxyWindowHandle; // eax
  CCaptureManager *v11; // rcx
  __int64 v12; // rdx
  DWORD v13; // edx
  HWND v14; // rsi
  CCaptureManager *v15; // rcx
  __int64 v16; // r8
  char v17; // dl
  DWORD v18; // edx
  HWND v20; // [rsp+20h] [rbp-E0h] BYREF
  struct _RTL_CRITICAL_SECTION *v21[2]; // [rsp+28h] [rbp-D8h] BYREF
  char v22; // [rsp+38h] [rbp-C8h]
  _QWORD v23[42]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v21[0] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>>,0>>::find(
    (char *)this + 8,
    &v20,
    a2);
  v4 = v20;
  if ( v20 != *((HWND *)this + 2) )
  {
    v6 = *(_DWORD *)a2;
    v7 = *((_DWORD *)a2 + 1);
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v23,
      (__int64)"StartWindowCapture");
    v23[0] = &WindowFrameLoggingTelemetry::StartWindowCapture::`vftable';
    WindowFrameLoggingTelemetry::StartWindowCapture::StartActivity(
      (WindowFrameLoggingTelemetry::StartWindowCapture *)v23,
      *((HWND *)v4 + 5),
      v7,
      v6);
    v21[1] = (struct _RTL_CRITICAL_SECTION *)v23;
    v22 = 1;
    v8 = (HWND)*((_QWORD *)v4 + 5);
    v20 = 0LL;
    ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(v9, v8, &v20);
    v5 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v12 = 87LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)ProxyWindowHandle);
      wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v23, v13);
      WindowFrameLoggingTelemetry::StartWindowCapture::~StartWindowCapture((WindowFrameLoggingTelemetry::StartWindowCapture *)v23);
      goto LABEL_24;
    }
    v14 = v20;
    if ( !v20 )
      v14 = v8;
    if ( *((_BYTE *)v4 + 56) )
    {
      ProxyWindowHandle = CCaptureManager::_SetProjectionBorderForWindow(v11, v14, 1);
      v5 = ProxyWindowHandle;
      if ( ProxyWindowHandle < 0 )
      {
        v12 = 97LL;
        goto LABEL_5;
      }
      if ( v14 != v8 )
      {
        ProxyWindowHandle = CCaptureManager::_SetProjectionBorderForWindow(v15, v8, 1);
        v5 = ProxyWindowHandle;
        if ( ProxyWindowHandle < 0 )
        {
          v12 = 100LL;
          goto LABEL_5;
        }
      }
    }
    v20 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
      v14,
      (struct CWindowData **)&v20);
    if ( !v20
      || !*((_QWORD *)v20 + 55)
      || (((_BYTE)v20[184] & 1) == 0 || (*((_BYTE *)v20 + 739) & 0x40) != 0 || ((_DWORD)v20[29] & 0x20000000) != 0
        ? (v17 = 0)
        : (v17 = 1),
          ProxyWindowHandle = CCaptureControllerProxy::SetCaptureState(*((CCaptureControllerProxy **)v4 + 4), v17, v16),
          v5 = ProxyWindowHandle,
          ProxyWindowHandle >= 0) )
    {
      *((_BYTE *)v4 + 57) = 1;
      CCaptureManager::_EnsureCursorStateForCapture(this);
      wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v23, v18);
      WindowFrameLoggingTelemetry::StartWindowCapture::~StartWindowCapture((WindowFrameLoggingTelemetry::StartWindowCapture *)v23);
      v5 = 0;
      goto LABEL_24;
    }
    v12 = 112LL;
    goto LABEL_5;
  }
  v5 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x48,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)0x80070057LL);
LABEL_24:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(v21);
  return v5;
}
