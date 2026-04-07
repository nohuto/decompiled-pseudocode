/*
 * XREFs of ?SetCenter@CVisual@@QEAAXMM@Z @ 0x18009550C
 * Callers:
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x18008AEF8 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@1PEAPEAVCAnimatedTransitionVisu.c)
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B090C (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800B3E10 (-StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 *     ?UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D71C4 (-UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetCenter(CVisual *this, float a2, float a3)
{
  __int64 v3; // rax

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 24) - a2) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 25) - a3) & _xmm) > 0.0000011920929 )
  {
    v3 = *(_QWORD *)this;
    *((float *)this + 24) = a2;
    *((float *)this + 25) = a3;
    (*(void (__fastcall **)(CVisual *, __int64))(v3 + 24))(this, 16LL);
  }
}
