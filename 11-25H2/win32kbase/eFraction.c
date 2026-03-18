/*
 * XREFs of eFraction @ 0x14010E930
 * Callers:
 *     ?efSin@@YA?AVEFLOAT@@V1@@Z @ 0x14010E800 (-efSin@@YA-AVEFLOAT@@V1@@Z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
double __fastcall eFraction(double a1)
{
  double v1; // xmm1_8
  int v2; // edx
  unsigned int v3; // ecx

  HIDWORD(v1) = HIDWORD(a1);
  v2 = _mm_cvtsi128_si32(*(__m128i *)&a1);
  v3 = (unsigned __int8)(v2 >> 23);
  if ( v3 >= 0x7F )
  {
    if ( v3 >= 0x96 )
    {
      return 0.0;
    }
    else
    {
      *(float *)&v1 = *(float *)&a1 - (float)((v2 & 0x7FFFFF | 0x800000) >> (-106 - v3));
      return v1;
    }
  }
  return a1;
}
