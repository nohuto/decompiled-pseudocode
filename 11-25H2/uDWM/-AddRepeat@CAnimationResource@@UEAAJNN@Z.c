/*
 * XREFs of ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x1800A73B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180061A70 (-_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ?_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z @ 0x180061CE8 (-_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z.c)
 *     ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x180061D8C (--1MagnifierTableElement@CMagnifierControl@@QEAA@XZ.c)
 */

__int64 __fastcall CAnimationResource::AddRepeat(CAnimationResource *this, double a2, double a3)
{
  _DWORD v5[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-50h]
  unsigned __int64 v7; // [rsp+30h] [rbp-48h]
  __int64 v8; // [rsp+38h] [rbp-40h]

  if ( !_finite(a2) || a2 < 0.0 || !_finite(a3) || a3 <= 0.0 )
    return 2147942487LL;
  CMagnifierControl::MagnifierTableElement::~MagnifierTableElement(this);
  v5[1] = 0;
  v8 = 0LL;
  v6 = CAnimationResource::_ConvertDoubleToQPC(a2);
  v5[0] = 3;
  v7 = CAnimationResource::_ConvertDoubleToQPC(a3);
  return CAnimationResource::_AddPrimitive(this, (const struct DwmAnimationPrimitive *)v5);
}
