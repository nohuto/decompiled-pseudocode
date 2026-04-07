/*
 * XREFs of ?RegisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@PEAXUDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z @ 0x1800E3F60
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029500 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@2@AEBT_LARGE_INTEGER@@@Z @ 0x1800A6C1C (-find@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureMa.c)
 *     ??$emplace@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@PEAX@1@@Z @ 0x1800DF184 (--$emplace@U-$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@PEAX.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CWindowList::RegisterWindowCloseEvent(CWindowList *a1, HWND a2, __int64 a3, ...)
{
  __int64 v3; // rbx
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v8; // rbp
  unsigned int v9; // edi
  __int64 v10; // rdx
  float *v11; // rsi
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v15[48]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  v3 = v17;
  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(a1, a2);
  v8 = WindowDataByHwnd;
  v9 = 0;
  if ( WindowDataByHwnd )
  {
    v11 = (float *)((char *)WindowDataByHwnd + 672);
    std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>>,0>>::find(
      (_QWORD *)WindowDataByHwnd + 84,
      &v14,
      (__int64)va);
    if ( (_QWORD)v14 == *((_QWORD *)v8 + 85) )
    {
      *(_QWORD *)&v14 = v3;
      *((_QWORD *)&v14 + 1) = a3;
      std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::emplace<std::pair<_LARGE_INTEGER const,void *>>(
        v11,
        (__int64)v15,
        &v14);
      goto LABEL_7;
    }
    v10 = 8590LL;
  }
  else
  {
    v10 = 8586LL;
  }
  v9 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)0x80070057LL);
LABEL_7:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v9;
}
