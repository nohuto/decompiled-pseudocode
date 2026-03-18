/*
 * XREFs of ?IsBlackColor@CLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z @ 0x1801C1D5C
 * Callers:
 *     ?IsBlackLight@CDistantLight@@UEBA_NXZ @ 0x1801C1D40 (-IsBlackLight@CDistantLight@@UEBA_NXZ.c)
 *     ?IsBlackLight@CAmbientLight@@UEBA_NXZ @ 0x180269810 (-IsBlackLight@CAmbientLight@@UEBA_NXZ.c)
 *     ?IsBlackLight@CPointLight@@UEBA_NXZ @ 0x18027D710 (-IsBlackLight@CPointLight@@UEBA_NXZ.c)
 *     ?IsBlackLight@CSpotLight@@UEBA_NXZ @ 0x1802826E0 (-IsBlackLight@CSpotLight@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLight::IsBlackColor(CLight *this, const struct _D3DCOLORVALUE *a2, float a3)
{
  __int32 v3; // xmm1_4

  COERCE_FLOAT(v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(a3 * a2->r) & v3) < 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a3 * a2->g) & v3) < 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a3 * a2->b) & v3) < 0.0000011920929;
}
