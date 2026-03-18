/*
 * XREFs of ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x18010EDF4
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18010EAD0 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW45KeyframeAnimationDelayBehavior@@MW45KeyframeAnimationDirection@@MW45KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801E1D08 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@UDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EX.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CKeyframeAnimation::SetIterationInfo(__int64 a1, float a2, int a3, double a4, int a5)
{
  __m128 v5; // xmm2
  char v6; // bp
  int v7; // r14d
  char v8; // si
  __m128i v9; // xmm7
  int v12; // ecx
  unsigned int v13; // ebx
  __m128 v15; // rt1
  float v16; // xmm6_4
  float v17; // [rsp+80h] [rbp+8h]

  v6 = *(_BYTE *)(a1 + 465);
  v7 = 0;
  v8 = 0;
  v9 = *(__m128i *)&a4;
  if ( (v6 & 1) != 0 )
  {
    v13 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0x416u, 0LL);
    return v13;
  }
  if ( a2 != 1.0 )
  {
    if ( a2 < 0.0 )
    {
      v7 = -1;
    }
    else if ( a2 > 0.0 )
    {
      v7 = (int)ceilf_0(a2) - 1;
      v16 = a2 - floorf_0(a2);
      if ( v16 != 0.0 )
        *(float *)(a1 + 436) = v16;
    }
  }
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        a3 = 0;
        break;
      case 2:
        goto LABEL_4;
      case 3:
        a3 = 2;
        break;
      case 4:
        v7 = 0;
        goto LABEL_4;
      default:
        v13 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x459u, 0LL);
        return v13;
    }
    v8 = 1;
  }
LABEL_4:
  if ( a5 && (unsigned int)(a5 - 1) > 1 )
  {
    v13 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x46Cu, 0LL);
  }
  else
  {
    *(_DWORD *)(a1 + 428) = v7;
    *(_DWORD *)(a1 + 460) = a5;
    *(_DWORD *)(a1 + 456) = a3;
    *(_BYTE *)(a1 + 465) = (8 * v8) | v6 & 0xF7;
    if ( *(float *)&a4 > 0.0 )
    {
      *(float *)v9.m128i_i32 = *(float *)&a4 * 1000.0;
      if ( (_mm_cvtsi128_si32(v9) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v5.m128_f32[0] = (float)(int)*(float *)v9.m128i_i32 - *(float *)v9.m128i_i32;
        v15.m128_f32[0] = FLOAT_N0_5;
        v12 = (int)*(float *)v9.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v5, v15));
      }
      else
      {
        v17 = *(float *)v9.m128i_i32 + 6291456.25;
        v12 = (int)(LODWORD(v17) << 10) >> 11;
      }
      *(_DWORD *)(a1 + 368) = v12;
    }
    return 0;
  }
  return v13;
}
