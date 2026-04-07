/*
 * XREFs of ?UpdateWindowCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800A3950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800A53C8 (-_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5930 (-_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@2@AEBT_LARGE_INTEGER@@@Z @ 0x1800A6C1C (-find@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureMa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::UpdateWindowCaptureBorder(HWND *this, const struct DWM_CAPTURE_TOKEN *a2, int a3)
{
  HWND v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  _BOOL8 v10; // rcx
  bool v11; // si
  int ProxyWindowHandle; // eax
  CCaptureManager *v13; // rcx
  CCaptureManager *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND v17; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>>,0>>::find(
    this + 1,
    &v17,
    a2);
  v6 = v17;
  if ( v17 != this[2] )
  {
    v10 = a3 != 0;
    if ( *((_BYTE *)v17 + 56) != v10 )
    {
      v11 = a3 != 0;
      *((_BYTE *)v17 + 56) = v11;
      if ( *((_BYTE *)v6 + 57) )
      {
        ProxyWindowHandle = CCaptureManager::_SetProjectionBorderForWindow(
                              (CCaptureManager *)v10,
                              *((HWND *)v6 + 5),
                              v11);
        v7 = ProxyWindowHandle;
        if ( ProxyWindowHandle < 0 )
        {
          v9 = 588LL;
LABEL_7:
          v8 = (unsigned int)ProxyWindowHandle;
          goto LABEL_8;
        }
        v17 = 0LL;
        ProxyWindowHandle = CCaptureManager::_GetProxyWindowHandle(v13, *((HWND *)v6 + 5), &v17);
        v7 = ProxyWindowHandle;
        if ( ProxyWindowHandle < 0 )
        {
          v9 = 591LL;
          goto LABEL_7;
        }
        if ( v17 )
        {
          ProxyWindowHandle = CCaptureManager::_SetProjectionBorderForWindow(v14, v17, v11);
          v7 = ProxyWindowHandle;
          if ( ProxyWindowHandle < 0 )
          {
            v9 = 594LL;
            goto LABEL_7;
          }
        }
      }
    }
    v7 = 0;
    goto LABEL_15;
  }
  v7 = -2147024809;
  v8 = 2147942487LL;
  v9 = 581LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)v8);
LABEL_15:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v7;
}
