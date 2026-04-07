/*
 * XREFs of ??1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x18009E390
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18009D6FC (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_M.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009E1F0 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FIL.c)
 *     ?_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@PEAVCContainerVisualProxy@@@Z @ 0x1800A3CF8 (-_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPro.c)
 *     _CCaptureManager::_AddFilteredDisplayCaptureEntry_::_1_::dtor$6 @ 0x1800E8E50 (_CCaptureManager--_AddFilteredDisplayCaptureEntry_--_1_--dtor$6.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAXPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU12@AEAV?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@0@@Z @ 0x18009D060 (--$_Destroy_range@V-$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@YAXPEAUCAPT.c)
 */

void __fastcall CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY::~CAPTURE_FILTERED_DISPLAY_MAP_ENTRY(
        CCaptureManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *this)
{
  void *v2; // rcx
  __int64 v3; // rcx

  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*((_QWORD *)this + 13) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<CCaptureManager::CAPTURE_FILTERED_WINDOW>>(v3, *((_QWORD *)this + 9));
    std::_Deallocate<16>(*((void **)this + 8), (*((_QWORD *)this + 10) - *((_QWORD *)this + 8)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)this + 7);
  CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY::~CAPTURE_DISPLAY_MAP_ENTRY(this);
}
