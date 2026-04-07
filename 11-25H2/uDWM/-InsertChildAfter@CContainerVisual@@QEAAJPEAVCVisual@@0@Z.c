/*
 * XREFs of ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x1800078BC
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800033F8 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180005BA4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180007764 (-InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18000BEF0 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18000C5C4 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18000D460 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18000F64C (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18000F940 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18000FB1C (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001A6E8 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800257F4 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800270F4 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ @ 0x1800354D0 (-InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x180038F98 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x18003C544 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18003F870 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180040CA8 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x180046D44 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180051D8C (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x1800592D4 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?AdjustNonClientBackgroundTreePosition@CTopLevelWindow@@AEAAJXZ @ 0x18006A304 (-AdjustNonClientBackgroundTreePosition@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180073820 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z @ 0x1800829AC (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x18008E25C (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContain.c)
 *     ?RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ @ 0x1800B625C (-RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ.c)
 *     ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z @ 0x1800CFCB4 (-CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180007DF0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 */

__int64 __fastcall CContainerVisual::InsertChildAfter(CContainerVisual *this, struct CVisual *a2, struct CVisual *a3)
{
  bool v4; // [rsp+20h] [rbp-18h]

  return VisualCollection::InsertRelative((CContainerVisual *)((char *)this + 144), a2, a3, 1, v4);
}
