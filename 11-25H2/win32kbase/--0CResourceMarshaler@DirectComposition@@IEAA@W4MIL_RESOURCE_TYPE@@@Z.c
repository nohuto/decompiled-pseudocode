/*
 * XREFs of ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053FB4
 * Callers:
 *     ?GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVCResourceMarshaler@1@@Z @ 0x14004EBDC (-GeneratedCreateSharedWriteMarshaler@DirectComposition@@YAJIPEBVCSharedSystemResource@1@PEAPEAVC.c)
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140051868 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x1400533D8 (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 *     ??0CPropertySetMarshaler@DirectComposition@@QEAA@XZ @ 0x140053EE0 (--0CPropertySetMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140053F20 (--0CVisualMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CVisualMarshaler@DirectComposition@@QEAA@XZ @ 0x140053F68 (--0CVisualMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ @ 0x140053FF4 (--0CRegionGeometryMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CGenericMarshaler@DirectComposition@@QEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x14005402C (--0CGenericMarshaler@DirectComposition@@QEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CGradientBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054064 (--0CGradientBrushMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@XZ @ 0x1400540AC (--0CInteractionMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054168 (--0-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@QEA.c)
 *     ??0CVisualTargetMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z @ 0x1400541A4 (--0CVisualTargetMarshaler@DirectComposition@@QEAA@PEBVCSharedSystemResource@1@@Z.c)
 *     ??0CBaseAnimationMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1400541E4 (--0CBaseAnimationMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CFilterEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140054230 (--0CFilterEffectMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??0CDropShadowMarshaler@DirectComposition@@QEAA@XZ @ 0x1400546D0 (--0CDropShadowMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ @ 0x14014C258 (--0CInteractionTrackerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x140157A4C (--0CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x140198138 (--0CCaptureControllerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CHolographicViewerMarshaler@DirectComposition@@QEAA@XZ @ 0x14019E9D0 (--0CHolographicViewerMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CProjectedShadowSceneMarshaler@DirectComposition@@QEAA@XZ @ 0x14019F6C4 (--0CProjectedShadowSceneMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x14019FA4C (--0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ.c)
 *     ??0CCompositionSurfaceBitmapMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140228418 (--0CCompositionSurfaceBitmapMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     Feature_29159638__private_IsEnabledDeviceUsageNoInline @ 0x140228F1C (Feature_29159638__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::CResourceMarshaler(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 24) = 1LL;
  *(_DWORD *)(a1 + 36) = a2;
  if ( (unsigned int)Feature_29159638__private_IsEnabledDeviceUsageNoInline() )
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 24) ^ ~(_DWORD)a1;
  return a1;
}
