/*
 * XREFs of ?StopWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A3290
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800767BC (-_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18007AA20 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$_Conditionally_enabled_hash@_J$00@std@@SA_KAEB_J@Z @ 0x18008B2E0 (--R-$_Conditionally_enabled_hash@_J$00@std@@SA_KAEB_J@Z.c)
 *     ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18009BE44 (-SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18009D728 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAI.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800A53C8 (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5930 (-_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5A08 (-_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@2@AEBT_LARGE_INTEGER@@@Z @ 0x1800A6C1C (-find@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureMa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::StopWindowedSwapChainCapture(HWND *this, const struct DWM_CAPTURE_TOKEN *a2)
{
  CCaptureManager *v4; // rcx
  HWND v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  int ProxyWindowHandle; // eax
  CCaptureManager *v10; // rcx
  HWND v11; // r14
  char v12; // r15
  CCaptureManager *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  HWND v16; // rdx
  HWND v17; // rax
  __int64 v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HWND v21; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+58h] [rbp+10h] BYREF

  v22 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>>,0>>::find(
    this + 9,
    &v21,
    a2);
  v5 = v21;
  if ( v21 == this[10] )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 286LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)v7);
    goto LABEL_32;
  }
  v21 = 0LL;
  ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(v4, *((HWND *)v5 + 5), &v21);
  v6 = ProxyWindowHandle;
  if ( ProxyWindowHandle < 0 )
  {
    v8 = 291LL;
LABEL_5:
    v7 = (unsigned int)ProxyWindowHandle;
    goto LABEL_6;
  }
  v11 = v21;
  if ( *((_BYTE *)v5 + 49) )
  {
    v12 = *((_BYTE *)v5 + 48);
    if ( v12 )
    {
      ProxyWindowHandle = CCaptureManager::_SetProjectionBorderForWindow(v10, *((HWND *)v5 + 5), 0);
      v6 = ProxyWindowHandle;
      if ( ProxyWindowHandle < 0 )
      {
        v8 = 300LL;
        goto LABEL_5;
      }
    }
    if ( v11 )
    {
      if ( v12 )
      {
        ProxyWindowHandle = CCaptureManager::_SetProjectionBorderForWindow(v10, v11, 0);
        v6 = ProxyWindowHandle;
        if ( ProxyWindowHandle < 0 )
        {
          v8 = 306LL;
          goto LABEL_5;
        }
      }
    }
  }
  ProxyWindowHandle = CCaptureManager::_SetScreenCaptureForWindow(v10, *((HWND *)v5 + 5), 0);
  v6 = ProxyWindowHandle;
  if ( ProxyWindowHandle < 0 )
  {
    v8 = 311LL;
    goto LABEL_5;
  }
  if ( v11 )
  {
    ProxyWindowHandle = CCaptureManager::_SetScreenCaptureForWindow(v13, v11, 0);
    v6 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v8 = 314LL;
      goto LABEL_5;
    }
  }
  ProxyWindowHandle = CCaptureControllerProxy::SetRootVisual(*((CCaptureControllerProxy **)v5 + 4), 0LL);
  v6 = ProxyWindowHandle;
  if ( ProxyWindowHandle < 0 )
  {
    v8 = 319LL;
    goto LABEL_5;
  }
  ProxyWindowHandle = CCaptureControllerProxy::SetReferenceVisual(*((CCaptureControllerProxy **)v5 + 4), 0LL);
  v6 = ProxyWindowHandle;
  if ( ProxyWindowHandle < 0 )
  {
    v8 = 320LL;
    goto LABEL_5;
  }
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)v5 + 4);
  v14 = std::_Conditionally_enabled_hash<__int64,1>::operator()((__int64)(v5 + 4));
  v15 = 2 * (v14 & (unsigned __int64)this[15]);
  v16 = this[12];
  if ( *((HWND *)v16 + 2 * (v14 & (unsigned __int64)this[15]) + 1) == v5 )
  {
    if ( *((HWND *)v16 + 2 * (v14 & (unsigned __int64)this[15])) == v5 )
    {
      v17 = this[10];
      *((_QWORD *)v16 + v15) = v17;
    }
    else
    {
      v17 = (HWND)*((_QWORD *)v5 + 1);
    }
    *((_QWORD *)v16 + v15 + 1) = v17;
  }
  else if ( *((HWND *)v16 + 2 * (v14 & (unsigned __int64)this[15])) == v5 )
  {
    *((_QWORD *)v16 + 2 * (v14 & (unsigned __int64)this[15])) = *(_QWORD *)v5;
  }
  v18 = *(_QWORD *)v5;
  this[11] = (HWND)((char *)this[11] - 1);
  **((_QWORD **)v5 + 1) = v18;
  *(_QWORD *)(v18 + 8) = *((_QWORD *)v5 + 1);
  std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>,void *>>>(
    v18,
    (CBaseObject **)v5);
  CCaptureManager::_EnsureCursorStateForCapture((CCaptureManager *)this);
  v6 = 0;
LABEL_32:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v22);
  return v6;
}
