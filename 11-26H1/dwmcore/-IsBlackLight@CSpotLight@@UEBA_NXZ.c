/*
 * XREFs of ?IsBlackLight@CSpotLight@@UEBA_NXZ @ 0x1802826E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBlackColor@CLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z @ 0x1801C1D5C (-IsBlackColor@CLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z.c)
 */

char __fastcall CSpotLight::IsBlackLight(CSpotLight *this)
{
  bool IsBlackColor; // al
  __int64 v2; // rcx
  char v3; // r8

  IsBlackColor = CLight::IsBlackColor(this, (const struct _D3DCOLORVALUE *)((char *)this + 260), *((float *)this + 69));
  v3 = 0;
  if ( IsBlackColor )
    return CLight::IsBlackColor((CLight *)v2, (const struct _D3DCOLORVALUE *)(v2 + 308), *(float *)(v2 + 324));
  return v3;
}
