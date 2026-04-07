/*
 * XREFs of ??0CBaseTransformProxy@@QEAA@XZ @ 0x18006B3DC
 * Callers:
 *     ??$CreateProxy@VCLinearGradientLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCLinearGradientLegacyMilBrushProxy@@@Z @ 0x18006B13C (--$CreateProxy@VCLinearGradientLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCLinearGradientLeg.c)
 *     ??$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x18006B21C (--$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBr.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18006B2FC (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     ??$CreateProxy@VCBitmapSourceProxy@@@CCompositor@@IEAAJPEAPEAVCBitmapSourceProxy@@@Z @ 0x18006B548 (--$CreateProxy@VCBitmapSourceProxy@@@CCompositor@@IEAAJPEAPEAVCBitmapSourceProxy@@@Z.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18006B628 (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ??$CreateProxy@VCTransformGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransformGroupProxy@@@Z @ 0x18006FA24 (--$CreateProxy@VCTransformGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransformGroupProxy@@@Z.c)
 *     ??$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z @ 0x18006FB00 (--$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z.c)
 *     ??$CreateProxy@VCRotateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCRotateTransformProxy@@@Z @ 0x18006FBDC (--$CreateProxy@VCRotateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCRotateTransformProxy@@@Z.c)
 *     ??$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x18006FCC0 (--$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x18006FD9C (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ??$CreateProxy@VCMatrixTransform3dProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransform3dProxy@@@Z @ 0x1800A9918 (--$CreateProxy@VCMatrixTransform3dProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransform3dProxy@@@Z.c)
 *     ??$CreateProxy@VCTransform3dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransform3dGroupProxy@@@Z @ 0x1800A99F0 (--$CreateProxy@VCTransform3dGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransform3dGroupProxy@@@Z.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@XZ @ 0x1800088BC (--0CResourceProxy@@IEAA@XZ.c)
 */

CBaseTransformProxy *__fastcall CBaseTransformProxy::CBaseTransformProxy(CBaseTransformProxy *this)
{
  CBaseTransformProxy *v1; // rcx
  CBaseTransformProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v1;
  *(_QWORD *)v1 = &CBaseImageProxy::`vftable';
  return result;
}
