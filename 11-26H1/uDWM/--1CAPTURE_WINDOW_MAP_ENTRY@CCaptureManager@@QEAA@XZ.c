/*
 * XREFs of ??1CAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@QEAA@XZ @ 0x18009E434
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18009D754 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@C.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18009E220 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WIN.c)
 *     ??1?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@QEAA@XZ @ 0x18009E300 (--1-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@QEAA@XZ.c)
 *     ?_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A44B8 (-_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAV.c)
 *     _CCaptureManager::_AddWindowCaptureEntry_::_1_::dtor$2 @ 0x1800E8E86 (_CCaptureManager--_AddWindowCaptureEntry_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY::~CAPTURE_WINDOW_MAP_ENTRY(CBaseObject **this)
{
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(this + 3);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(this + 1);
}
