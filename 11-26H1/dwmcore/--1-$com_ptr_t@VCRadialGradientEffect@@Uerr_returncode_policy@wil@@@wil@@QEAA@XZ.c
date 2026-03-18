/*
 * XREFs of ??1?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E147C
 * Callers:
 *     ??1CRadialGradientBrush@@UEAA@XZ @ 0x1800E12EC (--1CRadialGradientBrush@@UEAA@XZ.c)
 *     ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x18027EAEC (-CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z.c)
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18028BC64 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 *     ?Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z @ 0x1802B3564 (-Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E2D40 (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter.c)
 */

unsigned int __fastcall wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::~com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>(
        CRadialGradientEffect **a1)
{
  CRadialGradientEffect *v1; // rcx
  unsigned int result; // eax

  v1 = *a1;
  if ( v1 )
    return CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease(v1);
  return result;
}
