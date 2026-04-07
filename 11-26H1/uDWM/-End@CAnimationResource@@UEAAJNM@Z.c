/*
 * XREFs of ?End@CAnimationResource@@UEAAJNM@Z @ 0x1800507E0
 * Callers:
 *     ?StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180050CAC (-StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@.c)
 * Callees:
 *     ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180050940 (-_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ?_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z @ 0x180050B3C (-_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z.c)
 *     ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x180050BE0 (--1MagnifierTableElement@CMagnifierControl@@QEAA@XZ.c)
 */

__int64 __fastcall CAnimationResource::End(CAnimationResource *this, double a2, float a3)
{
  _DWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-40h]
  float v7; // [rsp+30h] [rbp-38h]
  __int64 v8; // [rsp+34h] [rbp-34h]
  int v9; // [rsp+3Ch] [rbp-2Ch]

  if ( !_finite(a2) || a2 < 0.0 )
    return 2147942487LL;
  CMagnifierControl::MagnifierTableElement::~MagnifierTableElement(this);
  v5[1] = 0;
  v8 = 0LL;
  v9 = 0;
  v7 = a3;
  v6 = CAnimationResource::_ConvertDoubleToQPC(a2);
  v5[0] = 4;
  return CAnimationResource::_AddPrimitive(this, (const struct DwmAnimationPrimitive *)v5);
}
