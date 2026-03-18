/*
 * XREFs of ??0CSceneObjectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054F20
 * Callers:
 *     ??0CYCbCrSurfaceMarshaler@DirectComposition@@QEAA@XZ @ 0x140054BD0 (--0CYCbCrSurfaceMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSnapshotMarshaler@DirectComposition@@QEAA@XZ @ 0x140054E38 (--0CSnapshotMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSceneComponentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054EF8 (--0CSceneComponentMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CWindowBackdropBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x1400552E8 (--0CWindowBackdropBrushMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CGlobalDCompVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x1400557E4 (--0CGlobalDCompVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CBlurredWallpaperBackdropBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x140055C54 (--0CBlurredWallpaperBackdropBrushMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CBackdropBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x140055CF0 (--0CBackdropBrushMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CCompositionSurfaceBitmapMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14005601C (--0CCompositionSurfaceBitmapMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CNineGridBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x1400560FC (--0CNineGridBrushMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CColorBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x14005614C (--0CColorBrushMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CMaskBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x14005619C (--0CMaskBrushMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSurfaceBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x140056240 (--0CSurfaceBrushMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x14018B4DC (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 *     ??0CEffectBrushMarshaler@DirectComposition@@QEAA@XZ @ 0x1401B98C0 (--0CEffectBrushMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1401C2478 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ??0CGradientBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1401C46CC (--0CGradientBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CRemoteTextureMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B3FC (--0CRemoteTextureMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSceneMeshMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B44C (--0CSceneMeshMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CSuperWetSourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14023B4E0 (--0CSuperWetSourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CVisualBitmapMarshaler@DirectComposition@@QEAA@XZ @ 0x14023B5AC (--0CVisualBitmapMarshaler@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140056310 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CSceneObjectMarshaler::CSceneObjectMarshaler(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  DirectComposition::CResourceMarshaler::CResourceMarshaler(a1, a2);
  result = v2;
  *v2 = &DirectComposition::CBlurredWallpaperBackdropBrushMarshaler::`vftable';
  return result;
}
