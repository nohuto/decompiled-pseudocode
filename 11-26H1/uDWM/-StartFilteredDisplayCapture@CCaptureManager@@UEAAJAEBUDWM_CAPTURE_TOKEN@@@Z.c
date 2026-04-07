/*
 * XREFs of ?StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A1F90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ @ 0x1800767BC (-_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z @ 0x18008A6BC (-SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z.c)
 *     ?_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3EA8 (-_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3FBC (-_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_EN.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NXZ @ 0x1800A6894 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NX.c)
 *     ?find@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@2@AEBT_LARGE_INTEGER@@@Z @ 0x1800A6C1C (-find@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY@CCaptureMa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCaptureManager::StartFilteredDisplayCapture(
        CCaptureManager *this,
        const struct DWM_CAPTURE_TOKEN *a2)
{
  CCaptureManager *v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdi
  HMONITOR v11; // rdx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+48h] [rbp+20h] BYREF

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45522024>::GetImpl'::`2'::impl) )
    return 2147942405LL;
  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOWED_SWAP_CHAIN_MAP_ENTRY>>,0>>::find(
    (char *)this + 200,
    &v14,
    a2);
  if ( v14 != *((_QWORD *)this + 26) )
  {
    v10 = v14 + 24;
    v11 = *(HMONITOR *)(v14 + 40);
    if ( *(_BYTE *)(v14 + 72) )
    {
      if ( v11 )
      {
        v12 = CCaptureManager::_AddProjectionBorderForDisplay(
                v5,
                v11,
                (struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *)(v14 + 24));
        v7 = v12;
        if ( v12 < 0 )
        {
          v9 = 996LL;
LABEL_9:
          v8 = (unsigned int)v12;
          goto LABEL_10;
        }
      }
      else
      {
        v12 = CCaptureManager::_AddProjectionBorderForAllDisplays(
                v5,
                (struct CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *)(v14 + 24));
        v7 = v12;
        if ( v12 < 0 )
        {
          v9 = 1000LL;
          goto LABEL_9;
        }
      }
    }
    v12 = CCaptureControllerProxy::SetCaptureState(*(CCaptureControllerProxy **)(v10 + 8), 1, v6);
    v7 = v12;
    if ( v12 >= 0 )
    {
      *(_BYTE *)(v10 + 49) = 1;
      CCaptureManager::_EnsureCursorStateForCapture(this);
      v7 = 0;
      goto LABEL_16;
    }
    v9 = 1004LL;
    goto LABEL_9;
  }
  v7 = -2147024809;
  v8 = 2147942487LL;
  v9 = 988LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)v8);
LABEL_16:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v7;
}
