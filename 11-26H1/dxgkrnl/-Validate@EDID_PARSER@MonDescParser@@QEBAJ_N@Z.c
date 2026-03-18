/*
 * XREFs of ?Validate@EDID_PARSER@MonDescParser@@QEBAJ_N@Z @ 0x1400435DC
 * Callers:
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x140042918 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x140042F74 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x14004304C (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1400431C8 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x140043204 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1400433BC (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x140043430 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x140043580 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::EDID_PARSER::Validate(MonDescParser::EDID_PARSER *this)
{
  __int64 v1; // rdx
  __m128i v2; // xmm1
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __m128i v7; // xmm1

  if ( **(_QWORD **)this != 0xFFFFFFFFFFFF00LL )
    return 3223126018LL;
  v1 = 0LL;
  if ( this == (MonDescParser::EDID_PARSER *)((char *)this + 8 * *((_QWORD *)this + 10)) )
    this = 0LL;
  v2 = 0LL;
  do
  {
    v3 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)this + v1));
    v1 += 16LL;
    v4 = _mm_add_epi8(v3, v2);
    v2 = v4;
  }
  while ( v1 < 128 );
  v5 = _mm_add_epi8(v4, _mm_srli_si128(v4, 8));
  v6 = _mm_add_epi8(v5, _mm_srli_si128(v5, 4));
  v7 = _mm_add_epi8(v6, _mm_srli_si128(v6, 2));
  return (unsigned __int8)_mm_cvtsi128_si32(_mm_add_epi8(v7, _mm_srli_si128(v7, 1))) != 0 ? 0xC01D0003 : 0;
}
