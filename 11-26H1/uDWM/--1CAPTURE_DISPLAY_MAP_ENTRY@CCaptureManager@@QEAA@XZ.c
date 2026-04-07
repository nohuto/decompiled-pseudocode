/*
 * XREFs of ??1CAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x18009E334
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18009D6D0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009E1C0 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DIS.c)
 *     ??1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x18009E390 (--1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ.c)
 *     ?_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A3B84 (-_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBU.c)
 *     _CCaptureManager::_AddDisplayCaptureEntry_::_1_::dtor$2 @ 0x1800E8E3E (_CCaptureManager--_AddDisplayCaptureEntry_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@0@@Z @ 0x18009D09C (--$_Destroy_range@V-$allocator@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@Y.c)
 */

void __fastcall CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY::~CAPTURE_DISPLAY_MAP_ENTRY(
        CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY *this)
{
  CBaseObject **v2; // rcx

  v2 = (CBaseObject **)*((_QWORD *)this + 3);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>>(
      v2,
      *((CBaseObject ***)this + 4));
    std::_Deallocate<16>(*((void **)this + 3), (*((_QWORD *)this + 5) - *((_QWORD *)this + 3)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)this + 1);
}
