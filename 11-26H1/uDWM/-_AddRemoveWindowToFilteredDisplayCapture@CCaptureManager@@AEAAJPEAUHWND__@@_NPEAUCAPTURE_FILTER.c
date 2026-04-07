/*
 * XREFs of ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A41D0
 * Callers:
 *     ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18009E6A0 (-AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKE.c)
 *     ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z @ 0x1800A3670 (-UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A41D0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 * Callees:
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x18000A7A0 (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18001B1F0 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18006B24C (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x18009BEB4 (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x18009E610 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A41D0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800A466C (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 *     ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800A545C (-_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows@@@details@wil@@QEAA_NXZ @ 0x1800A679C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindo.c)
 *     ?erase@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@@Z @ 0x1800A6B28 (-erase@-$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTERED_WINDOW@.c)
 *     ?erase@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@@Z @ 0x1800A6BD4 (-erase@-$vector@U_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformation@@@std@.c)
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x1800A7FCC (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_AddRemoveWindowToFilteredDisplayCapture(
        CCaptureManager *this,
        CRedirectVisualProxy *a2,
        bool a3,
        struct CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *a4)
{
  int v7; // ebx
  unsigned __int64 v8; // rax
  _QWORD *v9; // r12
  HWND *v10; // r9
  unsigned __int64 v11; // r10
  CCaptureManager *v12; // rcx
  struct CVisualProxy *v13; // rdi
  CCompositor *v15; // rsi
  int WindowRootVisual; // ebx
  __int64 v17; // rdx
  CVisualProxy *v18; // rsi
  __int64 v19; // rax
  struct CVisualProxy *v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  char *v23; // rsi
  __int64 v24; // r15
  int v25; // eax
  unsigned int v26; // esi
  __int64 v27; // rdx
  CRedirectVisualProxy *v28; // [rsp+20h] [rbp-10h] BYREF
  CBaseObject *v29; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  struct CVisualProxy *v32; // [rsp+88h] [rbp+58h] BYREF

  v7 = -1;
  v8 = 0LL;
  v9 = (_QWORD *)((char *)a4 + 64);
  v10 = (HWND *)*((_QWORD *)a4 + 8);
  v11 = (__int64)(v9[1] - (_QWORD)v10) >> 4;
  if ( v11 )
  {
    while ( *v10 != (HWND)a2 )
    {
      ++v8;
      v10 += 2;
      if ( v8 >= v11 )
        goto LABEL_6;
    }
    v7 = v8;
  }
LABEL_6:
  v32 = 0LL;
  CWindowList::GetSyncedWindowDataByHwnd(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
    (HWND)a2,
    &v32);
  v13 = v32;
  if ( !v32 )
    return 2147942487LL;
  if ( a3 )
  {
    if ( v7 < 0 )
    {
      if ( (*((_BYTE *)v32 + 742) & 8) != 0 )
        return 0LL;
      v15 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
      v32 = 0LL;
      WindowRootVisual = CCaptureManager::_GetWindowRootVisual(v12, (HWND)a2, 1, &v32);
      if ( WindowRootVisual < 0 )
      {
        v17 = 2358LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)WindowRootVisual);
        return (unsigned int)WindowRootVisual;
      }
      v28 = 0LL;
      WindowRootVisual = CCompositor::CreateRedirectVisualProxy(v15, &v28);
      if ( WindowRootVisual < 0 )
      {
        v17 = 2361LL;
        goto LABEL_13;
      }
      v18 = v28;
      WindowRootVisual = CRedirectVisualProxy::SetRedirectedVisual(v28, v32);
      if ( WindowRootVisual < 0 )
      {
        v17 = 2362LL;
        goto LABEL_13;
      }
      v19 = *((_QWORD *)v13 + 55);
      if ( v19 )
      {
        v20 = *(struct CVisualProxy **)(v19 + 56);
      }
      else
      {
        v32 = (struct CVisualProxy *)*((_QWORD *)v13 + 6);
        v20 = v32;
      }
      WindowRootVisual = CVisualProxy::SetOffset(v18, (double)(int)v20, (double)SHIDWORD(v20), 0.0);
      if ( WindowRootVisual < 0 )
      {
        v17 = 2373LL;
        goto LABEL_13;
      }
      v29 = 0LL;
      v28 = a2;
      Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(&v29, v18);
      v22 = CCaptureManager::_AddWindowToFilteredCapture(v21, a4, &v28, v13);
      WindowRootVisual = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x94A,
          (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)v22);
        Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v29);
        return (unsigned int)WindowRootVisual;
      }
      ++*((_DWORD *)v13 + 115);
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v29);
      v23 = (char *)a4 + 88;
LABEL_31:
      WindowRootVisual = CCaptureControllerProxy::SetWindowInfos(
                           *((CCaptureControllerProxy **)a4 + 1),
                           *(const struct _DWMCaptureWindowInformation **)v23,
                           (__int64)(*((_QWORD *)v23 + 1) - *(_QWORD *)v23) >> 5);
      if ( WindowRootVisual >= 0 )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows>::GetImpl'::`2'::impl) )
        {
          v27 = *((_QWORD *)v13 + 81);
          if ( v27 )
            CCaptureManager::_AddRemoveWindowToFilteredDisplayCapture(this, *(HWND *)(v27 + 40), a3, a4);
        }
        return 0LL;
      }
      v17 = 2397LL;
      goto LABEL_13;
    }
    return 2147942487LL;
  }
  if ( v7 < 0 )
    return 2147942487LL;
  v24 = 16LL * v7;
  v25 = CContainerVisualProxy::RemoveChild(
          *((CContainerVisualProxy **)a4 + 7),
          *(struct CVisualProxy **)(v24 + *v9 + 8));
  v26 = v25;
  if ( v25 >= 0 )
  {
    std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::erase(v9, &v32, v24 + *v9);
    v23 = (char *)a4 + 88;
    std::vector<_DWMCaptureWindowInformation>::erase((char *)a4 + 88, &v32, *((_QWORD *)a4 + 11) + 32LL * v7);
    --*((_DWORD *)v13 + 115);
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x956,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)v25);
  return v26;
}
