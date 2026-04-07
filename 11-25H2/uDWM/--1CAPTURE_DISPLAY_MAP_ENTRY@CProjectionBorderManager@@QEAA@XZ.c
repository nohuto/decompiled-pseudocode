/*
 * XREFs of ??1CAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x180099D78
 * Callers:
 *     ??1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x1800AC058 (--1CAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ.c)
 *     ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x1800AD740 (-RemoveElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderM.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800C3078 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     _CProjectionBorderManager::_AddDisplayCaptureEntry_::_1_::dtor$2 @ 0x1800ED1A1 (_CProjectionBorderManager--_AddDisplayCaptureEntry_--_1_--dtor$2.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY::~CAPTURE_DISPLAY_MAP_ENTRY(
        CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)this + 3);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 1);
}
