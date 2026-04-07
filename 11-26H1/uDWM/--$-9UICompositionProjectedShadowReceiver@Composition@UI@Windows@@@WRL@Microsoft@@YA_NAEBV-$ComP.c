/*
 * XREFs of ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x1800357D0
 * Callers:
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x180013990 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?UpdateScene@CGlobalLightSet@@QEAAJXZ @ 0x18001EAF0 (-UpdateScene@CGlobalLightSet@@QEAAJXZ.c)
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x1800355CC (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x18004B30C (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetReceiver@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUIVisual@Composition@UI@Windows@@@Z @ 0x18004DC4C (-SetReceiver@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUIVisual@Composition@U.c)
 *     ?OnSystemBackdropUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18004DEF8 (-OnSystemBackdropUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z @ 0x1800A50CC (-_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCaptur.c)
 *     ?_RemoveVisuals@CCaptureManager@@AEAAXAEAV?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A5554 (-_RemoveVisuals@CCaptureManager@@AEAAXAEAV-$vector@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Micr.c)
 *     ??1CGlobalLightSet@@EEAA@XZ @ 0x1800B5AD0 (--1CGlobalLightSet@@EEAA@XZ.c)
 *     wil::details::lambda_call__CSlide::_SlideWindow_::_2_::_lambda_1___::_lambda_call__CSlide::_SlideWindow_::_2_::_lambda_1___ @ 0x1800C02BC (wil--details--lambda_call__CSlide--_SlideWindow_--_2_--_lambda_1___--_lambda_call__CSlide--_Slid.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x1800CBE44 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x1800DF8DC (-AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(_QWORD *a1)
{
  return *a1 != 0LL;
}
