/*
 * XREFs of ??1CAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@QEAA@XZ @ 0x180099DC0
 * Callers:
 *     ?RemoveElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAHPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@Z @ 0x1800AD7C0 (-RemoveElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorde.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C3490 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresent.c)
 *     _CProjectionBorderManager::_AddTabGroupCaptureEntry_::_1_::dtor$2 @ 0x1800ED1C5 (_CProjectionBorderManager--_AddTabGroupCaptureEntry_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY::~CAPTURE_TAB_GROUP_MAP_ENTRY(CBaseObject **this)
{
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(this + 3);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(this + 1);
}
