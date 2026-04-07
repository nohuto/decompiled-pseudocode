/*
 * XREFs of ??0CResourceProxy@@IEAA@XZ @ 0x1800088BC
 * Callers:
 *     ??$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x180003A70 (--$CreateProxyFromSharedHandle@VCVisualTargetProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualTargetP.c)
 *     ??$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z @ 0x180005708 (--$CreateProxyFromSharedHandle@VCBaseGeometryProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCBaseGeometryP.c)
 *     ??$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x180006180 (--$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 *     ??$CreateProxy@VCAtlasedRectsGroupProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsGroupProxy@@@Z @ 0x180006364 (--$CreateProxy@VCAtlasedRectsGroupProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsGroupProxy@@@Z.c)
 *     ??$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z @ 0x1800070F8 (--$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z.c)
 *     ??0CVisualProxy@@QEAA@XZ @ 0x180007B28 (--0CVisualProxy@@QEAA@XZ.c)
 *     ??0CBaseGeometryProxy@@QEAA@XZ @ 0x18006942C (--0CBaseGeometryProxy@@QEAA@XZ.c)
 *     ??0CBaseTransformProxy@@QEAA@XZ @ 0x18006B3DC (--0CBaseTransformProxy@@QEAA@XZ.c)
 *     ??$CreateProxy@VCAtlasedRectsMeshProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z @ 0x1800704B8 (--$CreateProxy@VCAtlasedRectsMeshProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z.c)
 *     ??$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z @ 0x180074DC0 (--$CreateProxy@VCRectResourceProxy@@@CCompositor@@IEAAJPEAPEAVCRectResourceProxy@@@Z.c)
 *     ??$CreateProxy@VCSizeResourceProxy@@@CCompositor@@IEAAJPEAPEAVCSizeResourceProxy@@@Z @ 0x180075140 (--$CreateProxy@VCSizeResourceProxy@@@CCompositor@@IEAAJPEAPEAVCSizeResourceProxy@@@Z.c)
 *     ??$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z @ 0x180075D6C (--$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z.c)
 *     ??$CreateProxy@VCDoubleResourceProxy@@@CCompositor@@IEAAJPEAPEAVCDoubleResourceProxy@@@Z @ 0x18007E9AC (--$CreateProxy@VCDoubleResourceProxy@@@CCompositor@@IEAAJPEAPEAVCDoubleResourceProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z @ 0x18008111C (--$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfac.c)
 *     ??$CreateProxy@VCColorTransformResourceProxy@@@CCompositor@@IEAAJPEAPEAVCColorTransformResourceProxy@@@Z @ 0x180086A74 (--$CreateProxy@VCColorTransformResourceProxy@@@CCompositor@@IEAAJPEAPEAVCColorTransformResourceP.c)
 *     ??$CreateProxy@VCAnimationProxy@@@CCompositor@@IEAAJPEAPEAVCAnimationProxy@@@Z @ 0x18008A7F4 (--$CreateProxy@VCAnimationProxy@@@CCompositor@@IEAAJPEAPEAVCAnimationProxy@@@Z.c)
 *     ??0CBaseRenderTargetProxy@@QEAA@XZ @ 0x1800968DC (--0CBaseRenderTargetProxy@@QEAA@XZ.c)
 *     ??$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z @ 0x1800A9690 (--$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z.c)
 *     ??$CreateProxy@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAPEAVCVisualGroupProxy@@@Z @ 0x1800A9AC8 (--$CreateProxy@VCVisualGroupProxy@@@CCompositor@@IEAAJPEAPEAVCVisualGroupProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z @ 0x1800A9BA0 (--$CreateProxyFromSharedHandle@VCCaptureControllerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCCaptureC.c)
 *     ??$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCHolographicInteropTextureProxy@@@Z @ 0x1800A9C88 (--$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVC.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 */

CResourceProxy *__fastcall CResourceProxy::CResourceProxy(CResourceProxy *this)
{
  CResourceProxy *v1; // rcx
  CResourceProxy *result; // rax

  CBaseObject::CBaseObject(this);
  result = v1;
  *(_QWORD *)v1 = &CTransform3dGroupProxy::`vftable';
  *((_QWORD *)v1 + 2) = 0LL;
  return result;
}
