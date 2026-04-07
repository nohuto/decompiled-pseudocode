/*
 * XREFs of ?_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A44B8
 * Callers:
 *     ?SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A18E0 (-SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@1@@Z @ 0x18009DCB4 (--$emplace@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@-$_Has.c)
 *     ??1CAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x18009E434 (--1CAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x18009E610 (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800A55EC (-_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureContro.c)
 *     ?_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800A5FD8 (-_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureC.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z @ 0x1800A6558 (-_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureCon.c)
 *     ?contains@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEBA_NAEBT_LARGE_INTEGER@@@Z @ 0x1800A6AEC (-contains@-$_Hash@V-$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@V-.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::_AddWindowCaptureEntry(
        CCaptureManager *this,
        CBaseObject *a2,
        struct CapturedWindowRepresentation *a3,
        struct CCaptureControllerProxy *a4,
        const struct DWM_CAPTURE_TOKEN *a5)
{
  float *v8; // r12
  CBaseObject **v9; // r15
  unsigned int v10; // ebx
  CBaseObject *v11; // rbx
  CCaptureManager *v12; // rcx
  int updated; // eax
  CCaptureManager *v14; // rcx
  __int64 v15; // rdx
  CCaptureManager *v16; // rcx
  _BYTE v18[16]; // [rsp+28h] [rbp-31h] BYREF
  CBaseObject *v19; // [rsp+38h] [rbp-21h] BYREF
  CBaseObject *v20; // [rsp+40h] [rbp-19h] BYREF
  CBaseObject *v21; // [rsp+48h] [rbp-11h]
  CBaseObject *v22; // [rsp+50h] [rbp-9h]
  __int16 v23; // [rsp+58h] [rbp-1h]
  int v24; // [rsp+5Ah] [rbp+1h]
  __int16 v25; // [rsp+5Eh] [rbp+5h]
  CBaseObject *v26; // [rsp+60h] [rbp+7h] BYREF
  CBaseObject *v27[4]; // [rsp+68h] [rbp+Fh] BYREF
  __int16 v28; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]

  v8 = (float *)((char *)this + 8);
  v9 = (CBaseObject **)a5;
  if ( !(unsigned __int8)std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::contains(
                           (char *)this + 8,
                           a5) )
  {
    v20 = 0LL;
    v22 = 0LL;
    v23 = 1;
    v24 = 0;
    v25 = 0;
    v19 = *v9;
    v21 = a2;
    Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(&v20, a4);
    v11 = v22;
    if ( v22 != a3 )
    {
      if ( a3 )
        CBaseObject::AddRef(a3);
      a5 = v11;
      v11 = a3;
      v22 = a3;
      Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&a5);
    }
    v26 = *v9;
    v27[0] = v19;
    v27[1] = v20;
    if ( v20 )
      CBaseObject::AddRef(v20);
    v27[2] = v21;
    v27[3] = v11;
    if ( v11 )
      CBaseObject::AddRef(v11);
    v28 = v23;
    std::_Hash<std::_Umap_traits<_LARGE_INTEGER,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>,0>>::emplace<std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>>(
      v8,
      (__int64)v18,
      (__int64)&v26);
    CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY::~CAPTURE_WINDOW_MAP_ENTRY(v27);
    updated = CCaptureManager::_SendBoundsToCaptureControllerFromWindow(v12, (HWND)a2, 1, a4);
    v10 = updated;
    if ( updated >= 0 )
    {
      updated = CCaptureManager::_UpdateCaptureControllerTransformFromWindow(v14, (HWND)a2, 1, a4);
      v10 = updated;
      if ( updated >= 0 )
      {
        updated = CCaptureManager::_UpdateCaptureControllerContentOffsetFromWindow(v16, (HWND)a2, a4);
        v10 = updated;
        if ( updated >= 0 )
        {
          v10 = 0;
          goto LABEL_19;
        }
        v15 = 1481LL;
      }
      else
      {
        v15 = 1480LL;
      }
    }
    else
    {
      v15 = 1479LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)updated);
LABEL_19:
    CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY::~CAPTURE_WINDOW_MAP_ENTRY(&v19);
    return v10;
  }
  v10 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5BD,
    (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)0x8000FFFFLL);
  return v10;
}
