/*
 * XREFs of ?_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@PEAVCContainerVisualProxy@@@Z @ 0x1800A3CF8
 * Callers:
 *     ?SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A16B0 (-SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180084FD8 (-_SendBoundsToCaptureControllerFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureCon.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace@AEBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@_N@1@AEBT_LARGE_INTEGER@@$$QEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@Z @ 0x18009DB30 (--$emplace@AEBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@-$_Hash@V-$.c)
 *     ??1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x18009E390 (--1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x18009E610 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A5F04 (-_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCap.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A6294 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A6490 (-_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCapture.c)
 *     ?contains@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEBA_NAEBT_LARGE_INTEGER@@@Z @ 0x1800A6AEC (-contains@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::_AddFilteredDisplayCaptureEntry(
        CCaptureManager *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3,
        const struct DWM_CAPTURE_TOKEN *a4,
        struct CContainerVisualProxy *a5)
{
  float *v8; // r14
  unsigned int v9; // ebx
  CBaseObject *v11; // rdx
  struct CContainerVisualProxy *v12; // rcx
  const char *v13; // r9
  int updated; // eax
  CCaptureManager *v15; // rcx
  __int64 v16; // rdx
  CCaptureManager *v17; // rcx
  CCaptureManager *v18; // rcx
  _BYTE v19[16]; // [rsp+20h] [rbp-41h] BYREF
  __int64 v20; // [rsp+30h] [rbp-31h] BYREF
  CBaseObject *v21; // [rsp+38h] [rbp-29h] BYREF
  __int128 v22; // [rsp+40h] [rbp-21h]
  __int128 v23; // [rsp+50h] [rbp-11h]
  __int16 v24; // [rsp+60h] [rbp-1h]
  int v25; // [rsp+62h] [rbp+1h]
  __int16 v26; // [rsp+66h] [rbp+5h]
  struct CContainerVisualProxy *v27; // [rsp+68h] [rbp+7h]
  __int128 v28; // [rsp+70h] [rbp+Fh]
  __int128 v29; // [rsp+80h] [rbp+1Fh]
  __int128 v30; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]
  CBaseObject *v32; // [rsp+C0h] [rbp+5Fh] BYREF

  v8 = (float *)((char *)this + 200);
  if ( (unsigned __int8)std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::contains(
                          (char *)this + 200,
                          a4) )
  {
    v9 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x834,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)0x8000FFFFLL);
    return v9;
  }
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 1;
  v25 = 0;
  v26 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v20 = *(_QWORD *)a4;
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(&v21, a3);
  *(_QWORD *)&v22 = a2;
  v11 = v27;
  v12 = a5;
  if ( v27 != a5 )
  {
    if ( a5 )
      CBaseObject::AddRef(a5);
    v32 = v11;
    v27 = v12;
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v32);
  }
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>>,0>>::emplace<_LARGE_INTEGER const &,CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY>(
    v8,
    (__int64)v19,
    a4,
    (__int64)&v20);
  if ( !v19[8] )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x83D,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      v13);
  updated = CCaptureManager::_UpdateCaptureControllerTransformFromDisplay(retaddr, a2, a3);
  v9 = updated;
  if ( updated < 0 )
  {
    v16 = 2111LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)updated);
    CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY::~CAPTURE_FILTERED_DISPLAY_MAP_ENTRY((CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)&v20);
    return v9;
  }
  updated = CCaptureManager::_UpdateCaptureControllerContentOffsetFromDisplay(v15, a2, a3);
  v9 = updated;
  if ( updated < 0 )
  {
    v16 = 2112LL;
    goto LABEL_18;
  }
  updated = CCaptureManager::_SendBoundsToCaptureControllerFromDisplay(v17, a2, a3);
  v9 = updated;
  if ( updated < 0 )
  {
    v16 = 2113LL;
    goto LABEL_18;
  }
  updated = CCaptureManager::_UpdateCaptureControllerDefaultSDRBoostFromDisplay(v18, a2, a3);
  v9 = updated;
  if ( updated < 0 )
  {
    v16 = 2114LL;
    goto LABEL_18;
  }
  CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY::~CAPTURE_FILTERED_DISPLAY_MAP_ENTRY((CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *)&v20);
  return 0LL;
}
