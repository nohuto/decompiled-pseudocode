/*
 * XREFs of ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x180148114
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x180147980 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@1PEAU9Foundation@8@PEA_N3@Z @ 0x1804728D4 (-GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRe.c)
 * Callees:
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x180148434 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 */

__m128i *__fastcall KeyboardHosting::ViewRectHelper::GetRelativePosition(
        __m128i *a1,
        _DWORD *a2,
        float *a3,
        _DWORD *a4,
        __int64 a5)
{
  float v6; // xmm0_4
  LONG v8; // r15d
  int v9; // r14d
  LONG v12; // ecx
  int bottom; // edi
  float v14; // xmm0_4
  __m128i v15; // xmm2
  LONG v16; // edx
  LONG left; // ecx
  LONG right; // eax
  int v19; // r8d
  int v20; // r9d
  int v21; // r8d
  LONG v22; // eax
  LONG top; // r8d
  __m128i v24; // xmm0
  __m128i *result; // rax
  struct tagRECT v26; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v28; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v29; // [rsp+60h] [rbp-10h] BYREF

  v6 = a3[3] + a3[1];
  v8 = (int)a3[1];
  v9 = a2[6];
  *(_QWORD *)&rc.left = a5;
  v12 = (int)*a3;
  v26.top = v8;
  bottom = (int)v6;
  v26.left = v12;
  v14 = a3[2];
  v26.bottom = bottom;
  v26.right = (int)(float)(v14 + *a3);
  v15 = *(__m128i *)Windows::UI::Immersive::QueryRelativePosition(&v28, &v26, &rc);
  v29 = (struct tagRECT)v15;
  if ( v9 == 1 )
  {
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
    if ( v16 < a4[3] || v8 > a4[1] || v8 - a4[1] < rc.top )
    {
      bottom = v29.bottom;
    }
    else
    {
      v16 = v8;
      bottom = v8 + rc.top;
      v29.top = v8;
      v29.bottom = v8 + rc.top;
    }
LABEL_9:
    left = *a4 + a2[3];
    right = left + rc.left;
    v29.left = left;
    v29.right = left + rc.left;
LABEL_10:
    v15 = (__m128i)v29;
    goto LABEL_11;
  }
  if ( _mm_srli_si128(v15, 8).m128i_i32[1] > a4[1] || bottom < a4[3] || bottom - a4[3] < rc.top )
  {
    bottom = _mm_cvtsi128_si32(_mm_srli_si128(v15, 12));
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
  }
  else
  {
    v29.bottom = bottom;
    v16 = bottom - rc.top;
    v29.top = bottom - rc.top;
    v15 = (__m128i)v29;
  }
  if ( v9 == 2 )
    goto LABEL_9;
  if ( ((v9 - 4) & 0xFFFFFFFB) == 0 )
  {
    v16 = a2[4] + a4[1];
    right = v29.right;
    left = v29.left;
    v29.top = v16;
    bottom = v16 + rc.top;
    v29.bottom = v16 + rc.top;
    goto LABEL_10;
  }
  left = _mm_cvtsi128_si32(v15);
  right = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
LABEL_11:
  v19 = (int)a3[2];
  v20 = (int)a3[3];
  v29 = (struct tagRECT)v15;
  if ( right - left > v19 )
  {
    v21 = left + v19;
    v29.right = v21;
    v15 = (__m128i)v29;
  }
  else
  {
    v21 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
  }
  if ( bottom - v16 > v20 )
  {
    v29.bottom = v20 + v29.top;
    v15 = (__m128i)v29;
  }
  v22 = _mm_cvtsi128_si32(v15);
  if ( v22 < v26.left )
  {
    v29 = (struct tagRECT)v15;
    OffsetRect(&v29, v26.left - v22, 0);
    v15 = (__m128i)v29;
  }
  else if ( v21 > v26.right )
  {
    rc = (struct tagRECT)v15;
    OffsetRect(&rc, v26.right - v21, 0);
    v15 = (__m128i)rc;
  }
  top = v26.top;
  if ( v15.m128i_i32[1] < v26.top )
  {
    v26 = (struct tagRECT)v15;
    OffsetRect(&v26, 0, top - v15.m128i_i32[1]);
    v15 = (__m128i)v26;
  }
  else
  {
    v24 = _mm_srli_si128(v15, 8);
    if ( v24.m128i_i32[1] > v26.bottom )
    {
      v28 = (struct tagRECT)v15;
      OffsetRect(&v28, 0, v26.bottom - v24.m128i_i32[1]);
      v15 = (__m128i)v28;
    }
  }
  result = a1;
  *a1 = v15;
  return result;
}
