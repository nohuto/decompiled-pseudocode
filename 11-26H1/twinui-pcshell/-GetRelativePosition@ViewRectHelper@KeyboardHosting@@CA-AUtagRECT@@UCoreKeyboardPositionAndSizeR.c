/*
 * XREFs of ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18013EAA0
 * Callers:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18013E3B0 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@1PEAU9Foundation@8@PEA_N3@Z @ 0x180481550 (-GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRe.c)
 * Callees:
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x18013ED78 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
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
  LONG v12; // eax
  int bottom; // edi
  float v14; // xmm0_4
  __m128i v15; // xmm2
  LONG v16; // edx
  int left; // ecx
  LONG right; // eax
  int v19; // r8d
  int v20; // r8d
  int v21; // ecx
  LONG v22; // eax
  int v23; // edx
  LONG top; // r8d
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // xmm0_8
  __m128i *result; // rax
  struct tagRECT rc; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h] BYREF

  v6 = a3[3] + a3[1];
  v8 = (int)a3[1];
  v9 = a2[6];
  v30 = a5;
  v12 = (int)*a3;
  v29.top = v8;
  bottom = (int)v6;
  v29.left = v12;
  v14 = a3[2];
  v29.bottom = bottom;
  v29.right = (int)(float)(v14 + *a3);
  v15 = *(__m128i *)Windows::UI::Immersive::QueryRelativePosition(&rc, &v29, &v30);
  rc = (struct tagRECT)v15;
  if ( v9 == 1 )
  {
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
    if ( v16 < a4[3] || v8 > a4[1] || v8 - a4[1] < SHIDWORD(v30) )
    {
      bottom = rc.bottom;
    }
    else
    {
      v16 = v8;
      bottom = v8 + HIDWORD(v30);
      rc.top = v8;
      rc.bottom = v8 + HIDWORD(v30);
    }
LABEL_9:
    left = *a4 + a2[3];
    right = left + v30;
    rc.left = left;
    rc.right = left + v30;
LABEL_10:
    v15 = (__m128i)rc;
    goto LABEL_11;
  }
  if ( _mm_srli_si128(v15, 8).m128i_i32[1] > a4[1] || bottom < a4[3] || bottom - a4[3] < SHIDWORD(v30) )
  {
    bottom = _mm_cvtsi128_si32(_mm_srli_si128(v15, 12));
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
  }
  else
  {
    rc.bottom = bottom;
    v16 = bottom - HIDWORD(v30);
    rc.top = bottom - HIDWORD(v30);
    v15 = (__m128i)rc;
  }
  if ( v9 == 2 )
    goto LABEL_9;
  if ( ((v9 - 4) & 0xFFFFFFFB) == 0 )
  {
    v16 = a2[4] + a4[1];
    right = rc.right;
    left = rc.left;
    rc.top = v16;
    bottom = v16 + HIDWORD(v30);
    rc.bottom = v16 + HIDWORD(v30);
    goto LABEL_10;
  }
  left = _mm_cvtsi128_si32(v15);
  right = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
LABEL_11:
  v19 = (int)a3[2];
  rc = (struct tagRECT)v15;
  if ( right - left > v19 )
  {
    v20 = left + v19;
    rc.right = v20;
    v15 = (__m128i)rc;
  }
  else
  {
    v20 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
  }
  v21 = (int)a3[3];
  if ( bottom - v16 > v21 )
  {
    rc.bottom = v21 + rc.top;
    v15 = (__m128i)rc;
  }
  v22 = _mm_cvtsi128_si32(v15);
  if ( v22 < v29.left )
  {
    v23 = v29.left - v22;
    goto LABEL_18;
  }
  if ( v20 > v29.right )
  {
    v23 = v29.right - v20;
LABEL_18:
    rc = (struct tagRECT)v15;
    OffsetRect(&rc, v23, 0);
    v15 = (__m128i)rc;
  }
  top = v29.top;
  v25 = HIDWORD(v15.m128i_i64[0]);
  if ( v15.m128i_i32[1] < v29.top
    || (top = v29.bottom, v26 = _mm_srli_si128(v15, 8).m128i_u64[0], v25 = HIDWORD(v26), SHIDWORD(v26) > v29.bottom) )
  {
    v29 = (struct tagRECT)v15;
    OffsetRect(&v29, 0, top - v25);
    v15 = (__m128i)v29;
  }
  result = a1;
  *a1 = v15;
  return result;
}
