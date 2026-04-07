/*
 * XREFs of ??0CBaseGeometryProxy@@QEAA@XZ @ 0x18006942C
 * Callers:
 *     ??$CreateProxy@VCCombinedGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800690B4 (--$CreateProxy@VCCombinedGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCCombinedGeometryProxy@@@Z.c)
 *     ??$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z @ 0x180069194 (--$CreateProxy@VCGeometry2dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCGeometry2dGroupProxy@@@Z.c)
 *     ??$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x180069270 (--$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18006934C (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ??$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x180075340 (--$CreateProxyFromSharedHandle@VCAnimationTriggerProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCAnimation.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@XZ @ 0x1800088BC (--0CResourceProxy@@IEAA@XZ.c)
 */

CBaseGeometryProxy *__fastcall CBaseGeometryProxy::CBaseGeometryProxy(CBaseGeometryProxy *this)
{
  CBaseGeometryProxy *v1; // rcx
  CBaseGeometryProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v1;
  *(_QWORD *)v1 = &CTransform3dGroupProxy::`vftable';
  return result;
}
