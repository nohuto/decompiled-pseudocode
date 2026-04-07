/*
 * XREFs of ?StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800763C0
 * Callers:
 *     ?OnProcessDisconnected@CCaptureManager@@UEAAJK@Z @ 0x1800760C0 (-OnProcessDisconnected@CCaptureManager@@UEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180024438 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800767BC (-_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18007AA20 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180086440 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z @ 0x1800864F8 (-StartActivity@StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXII@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800868AC (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ??1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180086CC0 (--1StopDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180086D18 (-Destroy@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180086DF0 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180086DF0.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180086EA0 (-reset@-$shared_object@V-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param_ea_180086EA0.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@1@V21@@Z @ 0x18009DF34 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBT_LARGE_INTEGER@@UCAPT.c)
 *     ?_RemoveVisuals@CCaptureManager@@AEAAXAEAV?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A5554 (-_RemoveVisuals@CCaptureManager@@AEAAXAEAV-$vector@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Micr.c)
 *     ?find@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@2@AEBT_LARGE_INTEGER@@@Z @ 0x1800A6C1C (-find@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureMa.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CCaptureManager::StopDisplayCapture(CCaptureManager *this, const struct DWM_CAPTURE_TOKEN *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rbx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // [rsp+20h] [rbp-E0h] BYREF
  struct _RTL_CRITICAL_SECTION *v12[2]; // [rsp+28h] [rbp-D8h] BYREF
  char v13; // [rsp+38h] [rbp-C8h]
  void **v14; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[272]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v16[8]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v17[48]; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v12[0] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v14);
  v14 = &WindowFrameLoggingTelemetry::StopDisplayCapture::`vftable';
  WindowFrameLoggingTelemetry::StopDisplayCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StopDisplayCapture *)&v14,
    v5,
    v4);
  v12[1] = (struct _RTL_CRITICAL_SECTION *)&v14;
  v13 = 1;
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>>,0>>::find(
    (char *)this + 136,
    &v11,
    a2);
  v6 = v11;
  if ( v11 == *((_QWORD *)this + 18) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AB,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)0x80070057LL,
      v11);
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v14);
    v14 = &WindowFrameLoggingTelemetry::StopDisplayCapture::`vftable';
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v14);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v17);
    wil::details::shared_object<wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v16);
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>(v15);
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    return 2147942487LL;
  }
  else
  {
    v8 = CCaptureControllerProxy::SetRootVisual(*(CCaptureControllerProxy **)(v11 + 32), 0LL);
    v10 = v8;
    if ( v8 >= 0 )
    {
      CCaptureManager::_RemoveVisuals(v9, v6 + 48);
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)(v6 + 32));
      std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY>>>>,0>(
        (char *)this + 136,
        &v11,
        v6);
      CCaptureManager::_EnsureCursorStateForCapture(this);
      v10 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B0,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)v8,
        v11);
    }
    wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v14);
    WindowFrameLoggingTelemetry::StopDisplayCapture::~StopDisplayCapture((WindowFrameLoggingTelemetry::StopDisplayCapture *)&v14);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(v12);
    return v10;
  }
}
