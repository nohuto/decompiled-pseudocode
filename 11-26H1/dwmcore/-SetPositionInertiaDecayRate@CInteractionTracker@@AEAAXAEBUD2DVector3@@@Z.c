/*
 * XREFs of ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180139140
 * Callers:
 *     ?SetProperty@CInteractionTracker@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801351E0 (-SetProperty@CInteractionTracker@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE.c)
 *     ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z @ 0x1801390A0 (-ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::SetPositionInertiaDecayRate(
        CInteractionTracker *this,
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
  v5 = *(_QWORD *)((char *)this + 220) - *(_QWORD *)v6;
  if ( !v5 )
    v5 = *((unsigned int *)this + 57) - (unsigned __int64)(unsigned int)_mm_cvtsi128_si32(v4);
  if ( v5 )
  {
    *((float *)this + 55) = v2;
    *((float *)this + 56) = v3;
    *((_DWORD *)this + 57) = v4.m128i_i32[0];
  }
  CInteractionTracker::BigHammerInvalidateConsumingAnimations(this, 61LL);
}
