/*
 * XREFs of ?UpdateColor@CSolidRectangleVisual@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1800C5E08
 * Callers:
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D66EC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D6BA0 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSolidRectangleVisual::UpdateColor(struct _D3DCOLORVALUE *this, const struct _D3DCOLORVALUE *a2)
{
  void (__fastcall *v2)(struct _D3DCOLORVALUE *, __int64); // rax

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(1.0 - this[16].a) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - this[16].r) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - this[16].g) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(0.0 - this[16].b) & _xmm) > 0.0000011920929 )
  {
    v2 = *(void (__fastcall **)(struct _D3DCOLORVALUE *, __int64))(*(_QWORD *)&this->r + 24LL);
    *(struct _D3DCOLORVALUE *)&this[16].r = *(const struct _D3DCOLORVALUE *)&stru_1800FED18.r;
    v2(this, 0x4000LL);
  }
}
