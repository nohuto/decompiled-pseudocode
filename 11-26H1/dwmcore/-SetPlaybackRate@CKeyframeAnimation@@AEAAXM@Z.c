/*
 * XREFs of ?SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z @ 0x18016D2F0
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801850D0 (-SetProperty@CKeyframeAnimation@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::SetPlaybackRate(CKeyframeAnimation *this, float a2)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  __int64 v4; // rdx

  if ( *((float *)this + 102) != a2 )
  {
    if ( a2 != 0.0 )
    {
      if ( a2 >= 0.0 )
      {
        v2 = fmaxf(a2, 0.0625);
        v3 = FLOAT_16_0;
      }
      else
      {
        v2 = fmaxf(a2, -16.0);
        v3 = FLOAT_N0_0625;
      }
      a2 = fminf(v3, v2);
    }
    v4 = *((_QWORD *)this + 38);
    *((float *)this + 102) = a2;
    *(_BYTE *)(v4 + 132) &= ~0x10u;
    *(_BYTE *)(v4 + 88) = a2 < 0.0;
    *(_BYTE *)(v4 + 132) |= 16 * (a2 < 0.0);
  }
}
