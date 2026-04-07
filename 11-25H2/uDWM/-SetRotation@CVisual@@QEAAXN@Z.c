/*
 * XREFs of ?SetRotation@CVisual@@QEAAXN@Z @ 0x1800E15CC
 * Callers:
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B090C (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D66EC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D6BA0 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 *     ?UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800D70BC (-UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D71C4 (-UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetRotation(CVisual *this, double a2)
{
  float v2; // xmm0_4
  double v3; // rax

  v2 = a2;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 13) - v2) & _xmm) > 0.0000011920929 )
  {
    v3 = *(double *)this;
    *((double *)this + 13) = a2;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)&v3 + 24LL))(this, 16LL);
  }
}
