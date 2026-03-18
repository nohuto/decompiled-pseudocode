/*
 * XREFs of ?SetPositionInertiaDecayRateInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z @ 0x180276600
 * Callers:
 *     ?ProcessSetInertiaDecayRates@CInteractionTracker2@@AEAAXXZ @ 0x180274E28 (-ProcessSetInertiaDecayRates@CInteractionTracker2@@AEAAXXZ.c)
 *     ?SetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180276A20 (-SetProperty@CInteractionTracker2@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYP.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker2::SetPositionInertiaDecayRateInternal(
        CInteractionTracker2 *this,
        const struct D2DVector3 *a2)
{
  float v2; // xmm3_4
  float v3; // xmm4_4
  __m128i v4; // xmm2
  unsigned __int64 v5; // rdx
  float v6[6]; // [rsp+20h] [rbp-18h]

  v4 = (__m128i)LODWORD(FLOAT_1_0);
  v2 = fminf(1.0, fmaxf(1.0 - *(float *)a2, 0.0));
  v6[0] = v2;
  v3 = fminf(1.0, fmaxf(1.0 - *((float *)a2 + 1), 0.0));
  v6[1] = v3;
  *(float *)v4.m128i_i32 = fminf(1.0, fmaxf(1.0 - *((float *)a2 + 2), 0.0));
  v5 = *(_QWORD *)((char *)this + 460) - *(_QWORD *)v6;
  if ( !v5 )
    v5 = *((unsigned int *)this + 117) - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32(v4);
  if ( v5 )
  {
    *((float *)this + 115) = v2;
    *((float *)this + 116) = v3;
    *((_DWORD *)this + 117) = v4.m128i_i32[0];
  }
  CInteractionTracker2::BigHammerInvalidateConsumingAnimations((__int64)this, 67LL);
}
