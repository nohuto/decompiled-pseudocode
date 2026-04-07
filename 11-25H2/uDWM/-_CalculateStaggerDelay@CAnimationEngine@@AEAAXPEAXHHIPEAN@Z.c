/*
 * XREFs of ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x180048D18
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180047834 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
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
  double v12; // xmm4_8
  bool v13; // r9
  unsigned int v14; // r10d
  unsigned int v15; // edx
  int i; // ecx
  int v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+44h] [rbp-Ch] BYREF
  float v19; // [rsp+48h] [rbp-8h] BYREF
  int v20; // [rsp+70h] [rbp+20h] BYREF
  int v21; // [rsp+74h] [rbp+24h]

  v21 = HIDWORD(this);
  v6 = a6;
  v17 = 0;
  v18 = 0;
  LODWORD(a6) = 0;
  *v6 = 0.0;
  v20 = 0;
  v19 = 1.0;
  if ( (int)GetThemeAnimationProperty(a2, a3, a4, 0LL, &v17, 4, &v20) >= 0 && (v17 & 5) == 5 )
  {
    if ( (int)GetThemeAnimationProperty(a2, a3, a4, 2LL, &v18, 4, &v20) >= 0 )
    {
      if ( (int)GetThemeAnimationProperty(a2, a3, a4, 3LL, &a6, 4, &v20) < 0 )
        LODWORD(a6) = 1000;
      GetThemeAnimationProperty(a2, a3, a4, 4LL, &v19, 4, &v20);
    }
    v10 = v18;
    if ( v18 )
    {
      v11 = v19;
      v12 = DOUBLE_1_0;
      v13 = COERCE_FLOAT(LODWORD(v19) & _xmm) >= 0.0000011920929
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - 1.0) & _xmm) >= 0.0000011920929;
      v14 = a5;
      v15 = 0;
      for ( i = (int)a6; v15 < v14; ++v15 )
      {
        if ( (float)i <= *v6 )
          break;
        *v6 = (double)v10 * v12 + *v6;
        if ( v13 )
          v12 = v12 * v11;
      }
      if ( i )
        *v6 = fmin(*v6, (double)i);
      *v6 = *v6 / 1000.0;
    }
  }
}
