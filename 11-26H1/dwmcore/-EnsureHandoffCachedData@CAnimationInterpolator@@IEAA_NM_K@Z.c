/*
 * XREFs of ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x18016AD8C
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x18016A5D0 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 * Callees:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180140840 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 */

bool __fastcall CAnimationInterpolator::EnsureHandoffCachedData(CAnimationInterpolator *this, float a2, __int64 a3)
{
  bool InterpolatedValue; // di
  float v7; // xmm2_4
  float v8; // xmm3_4
  char v9; // cl
  float v10; // xmm6_4
  float v11; // xmm2_4
  float v12; // [rsp+40h] [rbp+8h] BYREF

  InterpolatedValue = 1;
  if ( (*((_BYTE *)this + 24) & 2) == 0 )
  {
    v12 = 0.0;
    InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, 0LL, &v12, 0LL);
    if ( InterpolatedValue )
    {
      InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, a3, (float *)this + 4, 0LL);
      if ( InterpolatedValue )
      {
        v7 = *((float *)this + 4);
        v8 = v7 - v12;
        v9 = *((_BYTE *)this + 24);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - v12) & _xmm) >= 0.0000011920929 )
        {
          *((_BYTE *)this + 24) = v9 | 1;
          v11 = (float)(v7 - a2) / v8;
          *((float *)this + 5) = v11;
          if ( !_finite(v11) )
            return 0;
        }
        else
        {
          *((_BYTE *)this + 24) = v9 & 0xFE;
        }
        v10 = a2 - v12;
        *((_BYTE *)this + 24) |= 2u;
        *((float *)this + 3) = v10;
      }
    }
  }
  return InterpolatedValue;
}
