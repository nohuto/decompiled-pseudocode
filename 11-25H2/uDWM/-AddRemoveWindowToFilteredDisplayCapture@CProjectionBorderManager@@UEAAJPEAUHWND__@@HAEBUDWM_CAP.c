/*
 * XREFs of ?AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800BDD80
 * Callers:
 *     ?OnAutoParentingChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800BFF10 (-OnAutoParentingChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x180003DEC (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800071D4 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x180029568 (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180029574 (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x180059084 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A8D0C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ??_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z @ 0x1800A8E48 (--_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800BE190 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjection.c)
 *     ?RemoveAt@?$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJI@Z @ 0x1800C0064 (-RemoveAt@-$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJI@Z.c)
 *     ?_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@PEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800C3618 (-_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENT.c)
 *     ?_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z @ 0x1800C4204 (-_GetWindowRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_AutoParentedFilteredCaptureFix@@@details@wil@@QEAA_NXZ @ 0x1800C50CC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_AutoParentedFilteredCaptu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::AddRemoveWindowToFilteredDisplayCapture(
        CProjectionBorderManager *this,
        struct CVisualProxy *a2,
        int a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  __int64 Element; // rax
  __int64 v9; // r15
  unsigned int v10; // ebx
  signed int v11; // edi
  unsigned int v12; // ecx
  HWND **v13; // rdx
  char IsEnabled; // al
  CProjectionBorderManager *v15; // rcx
  struct CVisualProxy *v16; // rsi
  CCompositor *v17; // r14
  int WindowRootVisual; // edi
  __int64 v19; // rdx
  CMILRefCountBase *v20; // r14
  __int64 v21; // rax
  struct CVisualProxy *v22; // rax
  const struct std::nothrow_t *v23; // rdx
  struct CVisualProxy **v24; // rax
  CProjectionBorderManager *v25; // rcx
  struct CVisualProxy **v26; // rdi
  const struct _DWMCaptureWindowInformation **v27; // rsi
  int v28; // esi
  __int64 v29; // rdx
  CBaseObject **v30; // rcx
  CMILRefCountBase *v32; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct CVisualProxy *v34; // [rsp+60h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+78h] [rbp+48h] BYREF

  v35 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Element = CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>::FindElement(
              (char *)this + 576,
              *(_QWORD *)a4);
  v9 = Element;
  v10 = 0;
  if ( !Element )
  {
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v35);
    return 2147549183LL;
  }
  v11 = -1;
  v12 = 0;
  if ( *(_DWORD *)(Element + 96) )
  {
    v13 = *(HWND ***)(Element + 72);
    while ( **v13 != (HWND)a2 )
    {
      ++v12;
      ++v13;
      if ( v12 >= *(_DWORD *)(Element + 96) )
        goto LABEL_8;
    }
    v11 = v12;
  }
LABEL_8:
  v34 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
    (HWND)a2,
    &v34);
  if ( a3 )
  {
    if ( v11 < 0 )
    {
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_AutoParentedFilteredCaptureFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_AutoParentedFilteredCaptureFix>::GetImpl'::`2'::impl);
      v16 = v34;
      if ( IsEnabled && (*((_BYTE *)v34 + 678) & 0x10) != 0 )
        goto LABEL_48;
      v17 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
      v34 = 0LL;
      WindowRootVisual = CProjectionBorderManager::_GetWindowRootVisual(v15, (HWND)a2, &v34);
      if ( WindowRootVisual < 0 )
      {
        v19 = 1209LL;
LABEL_47:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)WindowRootVisual);
        v10 = WindowRootVisual;
        goto LABEL_48;
      }
      v32 = 0LL;
      WindowRootVisual = CCompositor::CreateRedirectVisualProxy(v17, &v32);
      if ( WindowRootVisual < 0 )
      {
        v19 = 1212LL;
        goto LABEL_47;
      }
      v20 = v32;
      WindowRootVisual = CRedirectVisualProxy::SetRedirectedVisual(v32, v34);
      if ( WindowRootVisual < 0 )
      {
        v19 = 1213LL;
        goto LABEL_47;
      }
      v21 = *((_QWORD *)v16 + 55);
      if ( v21 )
      {
        v22 = *(struct CVisualProxy **)(v21 + 64);
      }
      else
      {
        v34 = (struct CVisualProxy *)*((_QWORD *)v16 + 6);
        v22 = v34;
      }
      WindowRootVisual = CVisualProxy::SetOffset(v20, (double)(int)v22, (double)SHIDWORD(v22), 0.0);
      if ( WindowRootVisual < 0 )
      {
        v19 = 1224LL;
        goto LABEL_47;
      }
      v24 = (struct CVisualProxy **)operator new[](0x10uLL, v23);
      v26 = v24;
      if ( v24 )
        v24[1] = 0LL;
      else
        v26 = 0LL;
      *v26 = a2;
      if ( v26[1] != v20 )
      {
        if ( v20 )
          CMILRefCountBase::AddRef(v20);
        v34 = v26[1];
        v26[1] = v20;
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v34);
      }
      WindowRootVisual = CProjectionBorderManager::_AddWindowToFilteredCapture(
                           v25,
                           (struct CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)v9,
                           (struct CProjectionBorderManager::CAPTURE_FILTERED_WINDOW *)v26,
                           v16);
      if ( WindowRootVisual < 0 )
      {
        v19 = 1229LL;
        goto LABEL_47;
      }
      ++*((_DWORD *)v16 + 115);
      v27 = (const struct _DWMCaptureWindowInformation **)(v9 + 104);
      goto LABEL_45;
    }
    goto LABEL_34;
  }
  if ( v11 < 0 )
  {
LABEL_34:
    v10 = -2147024809;
LABEL_48:
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v35);
    return v10;
  }
  _mm_lfence();
  v28 = CContainerVisualProxy::RemoveChild(
          *(CContainerVisualProxy **)(v9 + 64),
          *(struct CVisualProxy **)(*(_QWORD *)(*(_QWORD *)(v9 + 72) + 8LL * (unsigned int)v11) + 8LL));
  if ( v28 < 0 )
  {
    v29 = 1241LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)v28);
    v10 = v28;
    goto LABEL_48;
  }
  v30 = *(CBaseObject ***)(*(_QWORD *)(v9 + 72) + 8LL * (unsigned int)v11);
  if ( v30 )
    CProjectionBorderManager::CAPTURE_FILTERED_WINDOW::`scalar deleting destructor'(v30);
  v28 = DynArray<CAnimationComponent *,0>::RemoveAt((__int64 *)(v9 + 72), v11);
  if ( v28 < 0 )
  {
    v29 = 1243LL;
    goto LABEL_37;
  }
  v27 = (const struct _DWMCaptureWindowInformation **)(v9 + 104);
  WindowRootVisual = DynArray<_DWMCaptureWindowInformation,0>::RemoveAt(v9 + 104, (unsigned int)v11);
  if ( WindowRootVisual < 0 )
  {
    v19 = 1244LL;
    goto LABEL_47;
  }
  --*((_DWORD *)v34 + 115);
LABEL_45:
  WindowRootVisual = CCaptureControllerProxy::SetWindowInfos(
                       *(CCaptureControllerProxy **)(v9 + 8),
                       *v27,
                       *(_DWORD *)(v9 + 128));
  if ( WindowRootVisual < 0 )
  {
    v19 = 1249LL;
    goto LABEL_47;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v35);
  return 0LL;
}
