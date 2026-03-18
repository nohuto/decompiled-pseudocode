/*
 * XREFs of ?IsBlackLight@CDistantLight@@UEBA_NXZ @ 0x1801C1D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDistantLight::IsBlackLight(struct _D3DCOLORVALUE *this)
{
  return CLight::IsBlackColor((CLight *)this, this + 15, this[16].a);
}
