/*
 * XREFs of ?StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A2E90
 * Callers:
 *     ?OnProcessDisconnected@CCaptureManager@@UEAAJK@Z @ 0x1800760C0 (-OnProcessDisconnected@CCaptureManager@@UEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800767BC (-_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ.c)
 *     ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18007AA20 (-SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R?$_Conditionally_enabled_hash@_J$00@std@@SA_KAEB_J@Z @ 0x18008B2E0 (--R-$_Conditionally_enabled_hash@_J$00@std@@SA_KAEB_J@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAXPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@AEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@0@@Z @ 0x18009D060 (--$_Destroy_range@V-$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAXPEAUCAPT.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18009D6FC (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_M.c)
 *     ?_RemoveVisuals@CCaptureManager@@AEAAXAEAV?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A5554 (-_RemoveVisuals@CCaptureManager@@AEAAXAEAV-$vector@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Micr.c)
 *     ?find@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@2@AEBT_LARGE_INTEGER@@@Z @ 0x1800A6C1C (-find@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureMa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::StopFilteredDisplayCapture(
        CCaptureManager *this,
        const struct DWM_CAPTURE_TOKEN *a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>>,0>>::find(
    (char *)this + 200,
    &v19,
    a2);
  v4 = v19;
  if ( v19 == *((_QWORD *)this + 26) )
  {
    v5 = -2147024809;
    v6 = 2147942487LL;
    v7 = 1017LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)v6);
    goto LABEL_16;
  }
  v8 = CCaptureControllerProxy::SetRootVisual(*(CCaptureControllerProxy **)(v19 + 32), 0LL);
  v5 = v8;
  if ( v8 < 0 )
  {
    v6 = (unsigned int)v8;
    v7 = 1022LL;
    goto LABEL_5;
  }
  CCaptureManager::_RemoveVisuals(v9, v4 + 48);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)(v4 + 32));
  v10 = *(_QWORD *)(v4 + 96);
  v11 = *(_QWORD *)(v4 + 88);
  if ( v11 != v10 )
  {
    std::_Destroy_range<std::allocator<CCaptureManager::CAPTURE_FILTERED_WINDOW>>(v11, v10);
    *(_QWORD *)(v4 + 96) = *(_QWORD *)(v4 + 88);
  }
  v12 = std::_Conditionally_enabled_hash<__int64,1>::operator()(v4 + 16);
  v13 = 2 * (v12 & *((_QWORD *)this + 31));
  v14 = *((_QWORD *)this + 28);
  if ( *(_QWORD *)(v14 + 16 * (v12 & *((_QWORD *)this + 31)) + 8) == v4 )
  {
    if ( *(_QWORD *)(v14 + 16 * (v12 & *((_QWORD *)this + 31))) == v4 )
    {
      v15 = *((_QWORD *)this + 26);
      *(_QWORD *)(v14 + 8 * v13) = v15;
    }
    else
    {
      v15 = *(_QWORD *)(v4 + 8);
    }
    *(_QWORD *)(v14 + 8 * v13 + 8) = v15;
  }
  else if ( *(_QWORD *)(v14 + 16 * (v12 & *((_QWORD *)this + 31))) == v4 )
  {
    *(_QWORD *)(v14 + 16 * (v12 & *((_QWORD *)this + 31))) = *(_QWORD *)v4;
  }
  v16 = *(_QWORD *)v4;
  --*((_QWORD *)this + 27);
  **(_QWORD **)(v4 + 8) = v16;
  *(_QWORD *)(v16 + 8) = *(_QWORD *)(v4 + 8);
  std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>,void *>>>(
    v16,
    v4);
  CCaptureManager::_EnsureCursorStateForCapture(this);
  v5 = 0;
LABEL_16:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return v5;
}
