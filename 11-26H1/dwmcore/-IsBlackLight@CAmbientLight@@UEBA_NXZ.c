/*
 * XREFs of ?IsBlackLight@CAmbientLight@@UEBA_NXZ @ 0x180269810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAmbientLight::IsBlackLight(CAmbientLight *this)
{
  return CLight::IsBlackColor(this, (const struct _D3DCOLORVALUE *)((char *)this + 232), *((float *)this + 62));
}
