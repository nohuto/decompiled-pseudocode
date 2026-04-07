/*
 * XREFs of ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x18005327C
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180051450 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimationEngine::_CalculateStaggerDelay(
        CAnimationEngine *this,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        double *a6)
{
  double *v6; // rbx
  int v10; // r8d
  float v11; // xmm1_4
  __int32 v12; // xmm2_4
  double v13; // xmm4_8
  bool v14; // r9
  unsigned int v15; // r10d
  unsigned int v16; // edx
  int v17; // ecx
  double v18; // xmm2_8
  int v19; // [rsp+40h] [rbp-10h] BYREF
  int v20; // [rsp+44h] [rbp-Ch] BYREF
  float v21; // [rsp+48h] [rbp-8h] BYREF
  int v22; // [rsp+70h] [rbp+20h] BYREF
  int v23; // [rsp+74h] [rbp+24h]

  v23 = HIDWORD(this);
  v6 = a6;
  v19 = 0;
  v20 = 0;
  *a6 = 0.0;
  LODWORD(a6) = 0;
  v21 = 1.0;
  v22 = 0;
  if ( (int)GetThemeAnimationProperty(a2, a3, a4, 0LL, &v19, 4, &v22) >= 0 && (v19 & 5) == 5 )
  {
    if ( (int)GetThemeAnimationProperty(a2, a3, a4, 2LL, &v20, 4, &v22) >= 0 )
    {
      if ( (int)GetThemeAnimationProperty(a2, a3, a4, 3LL, &a6, 4, &v22) < 0 )
        LODWORD(a6) = 1000;
      GetThemeAnimationProperty(a2, a3, a4, 4LL, &v21, 4, &v22);
    }
    v10 = v20;
    if ( v20 )
    {
      v11 = v21;
      COERCE_FLOAT(v12 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      v13 = DOUBLE_1_0;
      v14 = COERCE_FLOAT(LODWORD(v21) & v12) >= 0.0000011920929
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - 1.0) & v12) >= 0.0000011920929;
      v15 = a5;
      v16 = 0;
      v17 = (int)a6;
      if ( a5 )
      {
        v18 = (float)(int)a6;
        do
        {
          if ( v18 <= *v6 )
            break;
          *v6 = (double)v10 * v13 + *v6;
          if ( v14 )
            v13 = v13 * v11;
          ++v16;
        }
        while ( v16 < v15 );
      }
      if ( v17 )
        *v6 = fmin(*v6, (double)v17);
      *v6 = *v6 / 1000.0;
    }
  }
}
