/*
 * XREFs of ?StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A2FF0
 * Callers:
 *     ?OnProcessDisconnected@CCaptureManager@@UEAAJK@Z @ 0x1800760C0 (-OnProcessDisconnected@CCaptureManager@@UEAAJK@Z.c)
 *     ?StopCapturesForWindow@CCaptureManager@@UEAAJPEAUHWND__@@@Z @ 0x1800A2D40 (-StopCapturesForWindow@CCaptureManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800767BC (-_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18007AA20 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180086440 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800865DC (-StartActivity@StopWindowCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800868AC (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ??1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180086CEC (--1StopWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??R?$_Conditionally_enabled_hash@_J$00@std@@SA_KAEB_J@Z @ 0x18008B2E0 (--R-$_Conditionally_enabled_hash@_J$00@std@@SA_KAEB_J@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18009BE44 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18009D754 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@C.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800A53C8 (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5930 (-_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5A08 (-_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@2@AEBT_LARGE_INTEGER@@@Z @ 0x1800A6C1C (-find@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureMa.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CCaptureManager::StopWindowCapture(HWND *this, const struct DWM_CAPTURE_TOKEN *a2)
{
  int v4; // ebx
  int v5; // edi
  CCaptureManager *v6; // rcx
  HWND v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // r9
  __int64 v10; // rdx
  int ProxyWindowHandle; // eax
  CCaptureManager *v12; // rcx
  HWND v13; // r15
  char v14; // r12
  CCaptureManager *v15; // rcx
  DWORD v16; // edx
  __int64 v17; // rax
  __int64 v18; // rcx
  HWND v19; // rdx
  HWND v20; // rax
  __int64 v21; // rdx
  DWORD v22; // edx
  HWND v24; // [rsp+20h] [rbp-E0h] BYREF
  struct _RTL_CRITICAL_SECTION *v25[2]; // [rsp+28h] [rbp-D8h] BYREF
  char v26; // [rsp+38h] [rbp-C8h]
  _QWORD v27[42]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v25[0] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v27,
    (__int64)"StopWindowCapture");
  v27[0] = &WindowFrameLoggingTelemetry::StopWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::StopWindowCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StopWindowCapture *)v27,
    v5,
    v4);
  v25[1] = (struct _RTL_CRITICAL_SECTION *)v27;
  v26 = 1;
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>>,0>>::find(
    this + 1,
    &v24,
    a2);
  v7 = v24;
  if ( v24 == this[2] )
  {
    v8 = -2147024809;
    v9 = 2147942487LL;
    v10 = 133LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)v9);
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v27, v16);
    goto LABEL_32;
  }
  v24 = 0LL;
  ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(v6, *((HWND *)v7 + 5), &v24);
  v8 = ProxyWindowHandle;
  if ( ProxyWindowHandle < 0 )
  {
    v10 = 138LL;
LABEL_22:
    v9 = (unsigned int)ProxyWindowHandle;
    goto LABEL_23;
  }
  v13 = v24;
  if ( *((_BYTE *)v7 + 57) )
  {
    v14 = *((_BYTE *)v7 + 56);
    if ( v14 )
    {
      ProxyWindowHandle = CCaptureManager::_SetProjectionBorderForWindow(v12, *((HWND *)v7 + 5), 0);
      v8 = ProxyWindowHandle;
      if ( ProxyWindowHandle < 0 )
      {
        v10 = 147LL;
        goto LABEL_22;
      }
    }
    if ( v13 )
    {
      if ( v14 )
      {
        ProxyWindowHandle = CCaptureManager::_SetProjectionBorderForWindow(v12, v13, 0);
        v8 = ProxyWindowHandle;
        if ( ProxyWindowHandle < 0 )
        {
          v10 = 153LL;
          goto LABEL_22;
        }
      }
    }
  }
  ProxyWindowHandle = CCaptureManager::_SetScreenCaptureForWindow(v12, *((HWND *)v7 + 5), 0);
  v8 = ProxyWindowHandle;
  if ( ProxyWindowHandle < 0 )
  {
    v10 = 158LL;
    goto LABEL_22;
  }
  if ( v13 )
  {
    ProxyWindowHandle = CCaptureManager::_SetScreenCaptureForWindow(v15, v13, 0);
    v8 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v10 = 161LL;
      goto LABEL_22;
    }
  }
  ProxyWindowHandle = CCaptureControllerProxy::SetRootVisual(*((CCaptureControllerProxy **)v7 + 4), 0LL);
  v8 = ProxyWindowHandle;
  if ( ProxyWindowHandle < 0 )
  {
    v10 = 166LL;
    goto LABEL_22;
  }
  ProxyWindowHandle = CCaptureControllerProxy::SetReferenceVisual(*((CCaptureControllerProxy **)v7 + 4), 0LL);
  v8 = ProxyWindowHandle;
  if ( ProxyWindowHandle < 0 )
  {
    v10 = 167LL;
    goto LABEL_22;
  }
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)v7 + 4);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)v7 + 6);
  v17 = std::_Conditionally_enabled_hash<__int64,1>::operator()((__int64)(v7 + 4));
  v18 = 2 * (v17 & (unsigned __int64)this[7]);
  v19 = this[4];
  if ( *((HWND *)v19 + 2 * (v17 & (unsigned __int64)this[7]) + 1) == v7 )
  {
    if ( *((HWND *)v19 + 2 * (v17 & (unsigned __int64)this[7])) == v7 )
    {
      v20 = this[2];
      *((_QWORD *)v19 + v18) = v20;
    }
    else
    {
      v20 = (HWND)*((_QWORD *)v7 + 1);
    }
    *((_QWORD *)v19 + v18 + 1) = v20;
  }
  else if ( *((HWND *)v19 + 2 * (v17 & (unsigned __int64)this[7])) == v7 )
  {
    *((_QWORD *)v19 + 2 * (v17 & (unsigned __int64)this[7])) = *(_QWORD *)v7;
  }
  v21 = *(_QWORD *)v7;
  this[3] = (HWND)((char *)this[3] - 1);
  **((_QWORD **)v7 + 1) = v21;
  *(_QWORD *)(v21 + 8) = *((_QWORD *)v7 + 1);
  std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>,void *>>>(
    v18,
    (__int64)v7);
  CCaptureManager::_EnsureCursorStateForCapture((CCaptureManager *)this);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v27, v22);
  v8 = 0;
LABEL_32:
  WindowFrameLoggingTelemetry::StopWindowCapture::~StopWindowCapture((WindowFrameLoggingTelemetry::StopWindowCapture *)v27);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(v25);
  return v8;
}
