/*
 * XREFs of ?SetRotation@CVisual@@QEAAXN@Z @ 0x1800DE430
 * Callers:
 *     ?CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B01BC (-CaptureAndPositionToExtendedDisplay@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D38AC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D3D34 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 *     ?UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800D41AC (-UpdateAngle@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D42B8 (-UpdateParentVisual@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAA.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@03$00@@YA?AVDirtyFlags@@XZ @ 0x1800166EC (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@03$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::SetRotation(CVisual *this, double a2)
{
  float v2; // xmm0_4
  _DWORD *v3; // rax
  __int64 v4; // r9
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 12) - v2) & _xmm) > 0.0000011920929 )
  {
    *((double *)this + 12) = a2;
    v3 = ___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__03_00__YA_AVDirtyFlags__XZ(&v5);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, (unsigned int)*v3);
  }
}
