/*
 * XREFs of ?IsBlackLight@CPointLight@@UEBA_NXZ @ 0x18027D710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CPointLight::IsBlackLight(struct _D3DCOLORVALUE *this)
{
  return CLight::IsBlackColor((CLight *)this, this + 15, this[16].g);
}
