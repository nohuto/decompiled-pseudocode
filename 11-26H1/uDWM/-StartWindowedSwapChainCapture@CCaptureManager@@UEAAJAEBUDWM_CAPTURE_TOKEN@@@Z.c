/*
 * XREFs of ?StartWindowedSwapChainCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A22F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180021870 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800767BC (-_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x18008A6BC (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800A53C8 (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5930 (-_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@2@AEBT_LARGE_INTEGER@@@Z @ 0x1800A6C1C (-find@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureMa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::StartWindowedSwapChainCapture(
        CCaptureManager *this,
        const struct DWM_CAPTURE_TOKEN *a2)
{
  CCaptureManager *v4; // rcx
  HWND v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  HWND v9; // rbp
  int ProxyWindowHandle; // eax
  CCaptureManager *v11; // rcx
  HWND v12; // rsi
  CCaptureManager *v13; // rcx
  __int64 v14; // r8
  char v15; // dl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v18; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>>,0>>::find(
    (char *)this + 72,
    &v18,
    a2);
  v5 = v18;
  if ( v18 != *((HWND *)this + 10) )
  {
    v9 = (HWND)*((_QWORD *)v18 + 5);
    v18 = 0LL;
    ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(v4, v9, &v18);
    v6 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v8 = 248LL;
LABEL_5:
      v7 = (unsigned int)ProxyWindowHandle;
      goto LABEL_6;
    }
    v12 = v18;
    if ( !v18 )
      v12 = v9;
    if ( *((_BYTE *)v5 + 48) )
    {
      ProxyWindowHandle = CCaptureManager::_SetProjectionBorderForWindow(v11, v12, 1);
      v6 = ProxyWindowHandle;
      if ( ProxyWindowHandle < 0 )
      {
        v8 = 258LL;
        goto LABEL_5;
      }
      if ( v12 != v9 )
      {
        ProxyWindowHandle = CCaptureManager::_SetProjectionBorderForWindow(v13, v9, 1);
        v6 = ProxyWindowHandle;
        if ( ProxyWindowHandle < 0 )
        {
          v8 = 261LL;
          goto LABEL_5;
        }
      }
    }
    v18 = 0LL;
    CWindowList::GetSyncedWindowDataByHwnd(
      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
      v12,
      (struct CWindowData **)&v18);
    if ( !v18
      || !*((_QWORD *)v18 + 55)
      || (((_BYTE)v18[184] & 1) == 0 || (*((_BYTE *)v18 + 739) & 0x40) != 0 || ((_DWORD)v18[29] & 0x20000000) != 0
        ? (v15 = 0)
        : (v15 = 1),
          ProxyWindowHandle = CCaptureControllerProxy::SetCaptureState(*((CCaptureControllerProxy **)v5 + 4), v15, v14),
          v6 = ProxyWindowHandle,
          ProxyWindowHandle >= 0) )
    {
      *((_BYTE *)v5 + 49) = 1;
      CCaptureManager::_EnsureCursorStateForCapture(this);
      v6 = 0;
      goto LABEL_25;
    }
    v8 = 273LL;
    goto LABEL_5;
  }
  v6 = -2147024809;
  v7 = 2147942487LL;
  v8 = 242LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)v7);
LABEL_25:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return v6;
}
