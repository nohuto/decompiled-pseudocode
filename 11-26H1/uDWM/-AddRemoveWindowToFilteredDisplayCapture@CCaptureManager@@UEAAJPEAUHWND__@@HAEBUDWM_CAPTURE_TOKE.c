/*
 * XREFs of ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18009E6A0
 * Callers:
 *     ?OnAutoParentingChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800A0BD0 (-OnAutoParentingChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetOffset@CVisualProxy@@QEAAJNNN@Z @ 0x18000A7A0 (-SetOffset@CVisualProxy@@QEAAJNNN@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18001B1F0 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18006B24C (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x18009BEB4 (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x18009E610 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A41D0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800A466C (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 *     ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z @ 0x1800A545C (-_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@QEAA_NXZ @ 0x1800A6818 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCapt_ea_1800A6818.c)
 *     ?erase@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@2@@Z @ 0x1800A6B28 (-erase@-$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V-$allocator@UCAPTURE_FILTERED_WINDOW@.c)
 *     ?erase@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@2@@Z @ 0x1800A6BD4 (-erase@-$vector@U_DWMCaptureWindowInformation@@V-$allocator@U_DWMCaptureWindowInformation@@@std@.c)
 *     ?find@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@2@AEBT_LARGE_INTEGER@@@Z @ 0x1800A6C1C (-find@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureMa.c)
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x1800A7FCC (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::AddRemoveWindowToFilteredDisplayCapture(
        CCaptureManager *this,
        HWND a2,
        int a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  char *v11; // rsi
  int WindowRootVisual; // eax
  int v13; // ebx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // r15
  HWND *v16; // rdx
  unsigned __int64 v17; // rax
  CCaptureManager *v18; // rcx
  struct CVisualProxy *v19; // rbx
  CCompositor *v20; // r15
  CVisualProxy *v21; // r15
  __int64 v22; // rax
  struct CVisualProxy *v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  char *v26; // rdi
  __int64 v27; // r14
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+20h] [rbp-20h] BYREF
  HWND v30; // [rsp+28h] [rbp-18h] BYREF
  CBaseObject *v31[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct CVisualProxy *v33; // [rsp+70h] [rbp+30h] BYREF
  CRedirectVisualProxy *v34; // [rsp+88h] [rbp+48h] BYREF

  v29 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>>,0>>::find(
    (char *)this + 200,
    &v33,
    a4);
  if ( v33 != *((struct CVisualProxy **)this + 26) )
  {
    v11 = (char *)v33 + 24;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck>::GetImpl'::`2'::impl) )
    {
      WindowRootVisual = CCaptureManager::_AddRemoveWindowToFilteredDisplayCapture(
                           this,
                           a2,
                           a3 != 0,
                           (struct CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)v11);
      v8 = WindowRootVisual;
      if ( WindowRootVisual < 0 )
      {
        v10 = 1080LL;
LABEL_6:
        v9 = (unsigned int)WindowRootVisual;
        goto LABEL_7;
      }
LABEL_37:
      v8 = 0;
      goto LABEL_38;
    }
    v13 = -1;
    v14 = 0LL;
    v15 = v11 + 64;
    v16 = (HWND *)*((_QWORD *)v11 + 8);
    v17 = (__int64)(*((_QWORD *)v11 + 9) - (_QWORD)v16) >> 4;
    if ( v17 )
    {
      while ( *v16 != a2 )
      {
        ++v14;
        v16 += 2;
        if ( v14 >= v17 )
          goto LABEL_13;
      }
      v13 = v14;
    }
LABEL_13:
    v33 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53), a2, &v33);
    if ( a3 )
    {
      if ( v13 < 0 )
      {
        v19 = v33;
        if ( (*((_BYTE *)v33 + 742) & 8) != 0 )
          goto LABEL_37;
        v20 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
        v33 = 0LL;
        WindowRootVisual = CCaptureManager::_GetWindowRootVisual(v18, a2, 1, &v33);
        v8 = WindowRootVisual;
        if ( WindowRootVisual < 0 )
        {
          v10 = 1115LL;
          goto LABEL_6;
        }
        v34 = 0LL;
        WindowRootVisual = CCompositor::CreateRedirectVisualProxy(v20, &v34);
        v8 = WindowRootVisual;
        if ( WindowRootVisual < 0 )
        {
          v10 = 1118LL;
          goto LABEL_6;
        }
        v21 = v34;
        WindowRootVisual = CRedirectVisualProxy::SetRedirectedVisual(v34, v33);
        v8 = WindowRootVisual;
        if ( WindowRootVisual < 0 )
        {
          v10 = 1119LL;
          goto LABEL_6;
        }
        v22 = *((_QWORD *)v19 + 55);
        if ( v22 )
        {
          v23 = *(struct CVisualProxy **)(v22 + 56);
        }
        else
        {
          v33 = (struct CVisualProxy *)*((_QWORD *)v19 + 6);
          v23 = v33;
        }
        WindowRootVisual = CVisualProxy::SetOffset(v21, (double)(int)v23, (double)SHIDWORD(v23), 0.0);
        v8 = WindowRootVisual;
        if ( WindowRootVisual < 0 )
        {
          v10 = 1130LL;
          goto LABEL_6;
        }
        v31[0] = 0LL;
        v30 = a2;
        Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(v31, v21);
        v25 = CCaptureManager::_AddWindowToFilteredCapture(v24, v11, &v30, v19);
        v8 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x46F,
            (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v25);
          Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v31);
          goto LABEL_38;
        }
        ++*((_DWORD *)v19 + 115);
        Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v31);
        v26 = v11 + 88;
        goto LABEL_35;
      }
    }
    else if ( v13 >= 0 )
    {
      v27 = 16LL * v13;
      WindowRootVisual = CContainerVisualProxy::RemoveChild(
                           *((CContainerVisualProxy **)v11 + 7),
                           *(struct CVisualProxy **)(v27 + *v15 + 8));
      v8 = WindowRootVisual;
      if ( WindowRootVisual < 0 )
      {
        v10 = 1147LL;
        goto LABEL_6;
      }
      std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::erase(v11 + 64, &v34, v27 + *v15);
      v26 = v11 + 88;
      std::vector<_DWMCaptureWindowInformation>::erase(v11 + 88, &v34, *((_QWORD *)v11 + 11) + 32LL * v13);
      --*((_DWORD *)v33 + 115);
LABEL_35:
      WindowRootVisual = CCaptureControllerProxy::SetWindowInfos(
                           *((CCaptureControllerProxy **)v11 + 1),
                           *(const struct _DWMCaptureWindowInformation **)v26,
                           (__int64)(*((_QWORD *)v26 + 1) - *(_QWORD *)v26) >> 5);
      v8 = WindowRootVisual;
      if ( WindowRootVisual < 0 )
      {
        v10 = 1154LL;
        goto LABEL_6;
      }
      goto LABEL_37;
    }
    v8 = -2147024809;
    goto LABEL_38;
  }
  v8 = -2147024809;
  v9 = 2147942487LL;
  v10 = 1075LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)v9);
LABEL_38:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v29);
  return v8;
}
