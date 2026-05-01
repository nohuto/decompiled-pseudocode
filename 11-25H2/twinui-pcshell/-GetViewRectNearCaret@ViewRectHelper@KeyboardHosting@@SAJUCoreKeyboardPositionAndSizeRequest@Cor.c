/*
 * XREFs of ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x180147980
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180146EF0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x180147F94 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x180147FD4 (-ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z.c)
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x180148114 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
        __int128 *a1,
        const struct Windows::Foundation::Rect *a2,
        float *a3,
        float *a4,
        char a5,
        __int64 a6,
        bool *a7,
        char *a8)
{
  char v8; // bl
  float *v11; // rsi
  __m128i v13; // xmm1
  float v14; // xmm5_4
  float v15; // xmm6_4
  __m128i v16; // xmm3
  float v17; // xmm7_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  __m128i v20; // xmm6
  unsigned __int64 v21; // rax
  bool IsRectNull; // al
  const struct Windows::Foundation::Rect *v23; // rdx
  int v24; // eax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 *RelativePosition; // rax
  float v30; // xmm3_4
  __int64 v31; // r8
  __int64 v32; // rax
  float v33; // xmm4_4
  float v34; // xmm3_4
  int v35; // edx
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  bool v39; // cc
  __int64 result; // rax
  int v41; // eax
  float v42; // xmm1_4
  float v43; // xmm0_4
  int v44; // eax
  float v45; // xmm1_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  const struct Windows::Foundation::Rect *v48; // rdx
  float v49; // xmm4_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  __m128i v52; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v53; // [rsp+48h] [rbp-C0h] BYREF
  char *v54; // [rsp+58h] [rbp-B0h]
  _OWORD v55[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-60h]
  __m128i v57; // [rsp+B8h] [rbp-50h] BYREF

  v8 = 0;
  v11 = (float *)a2;
  v54 = a8;
  *(_OWORD *)a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( a5 )
  {
    v42 = a4[1];
    v43 = *a4 + a4[2];
    v57.m128i_i32[0] = (int)*a4;
    v44 = (int)v42;
    v45 = v42 + a4[3];
    v57.m128i_i32[1] = v44;
    v57.m128i_i32[2] = (int)v43;
    v57.m128i_i32[3] = (int)v45;
    goto LABEL_6;
  }
  v13 = *(__m128i *)a3;
  v53 = *(_OWORD *)a4;
  v57 = v13;
  KeyboardHosting::ViewRectHelper::ValidateRect((struct Windows::Foundation::Rect *)&v57);
  KeyboardHosting::ViewRectHelper::ValidateRect((struct Windows::Foundation::Rect *)&v53);
  v14 = *(float *)v57.m128i_i32;
  v15 = *((float *)&v53 + 3);
  v16 = 0LL;
  v17 = *((float *)&v53 + 2);
  v18 = *((float *)&v53 + 1);
  v19 = *(float *)&v53;
  v52 = 0LL;
  if ( *(float *)v57.m128i_i32 == 0.0
    && *(float *)&v57.m128i_i32[1] == 0.0
    && *(float *)&v57.m128i_i32[2] == 0.0
    && *(float *)&v57.m128i_i32[3] == 0.0
    || *(float *)&v53 == 0.0
    && *((float *)&v53 + 1) == 0.0
    && *((float *)&v53 + 2) == 0.0
    && *((float *)&v53 + 3) == 0.0 )
  {
    if ( *(float *)v57.m128i_i32 == 0.0
      && *(float *)&v57.m128i_i32[1] == 0.0
      && *(float *)&v57.m128i_i32[2] == 0.0
      && *(float *)&v57.m128i_i32[3] == 0.0 )
    {
      if ( KeyboardHosting::IsRectNull((KeyboardHosting *)&v53, a2) )
        goto LABEL_5;
      v52.m128i_i32[0] = (int)v19;
      v52.m128i_i32[1] = (int)v18;
      v52.m128i_i32[2] = (int)(float)(v17 + v19);
      v41 = (int)(float)(v15 + v18);
    }
    else
    {
      v52.m128i_i32[0] = (int)*(float *)v57.m128i_i32;
      v52.m128i_i32[1] = (int)*(float *)&v57.m128i_i32[1];
      v52.m128i_i32[2] = (int)(float)(*(float *)&v57.m128i_i32[2] + *(float *)v57.m128i_i32);
      v41 = (int)(float)(*(float *)&v57.m128i_i32[3] + *(float *)&v57.m128i_i32[1]);
    }
    v52.m128i_i32[3] = v41;
    v16 = v52;
  }
  else
  {
    v57.m128i_i32[0] = (int)*(float *)v57.m128i_i32;
    v57.m128i_i32[2] = (int)(float)(*(float *)&v57.m128i_i32[2] + v14);
    a2 = (const struct Windows::Foundation::Rect *)(unsigned int)(int)*(float *)&v57.m128i_i32[1];
    v57.m128i_i32[3] = (int)(float)(*(float *)&v57.m128i_i32[3] + *(float *)&v57.m128i_i32[1]);
    v57.m128i_i32[1] = (int)*(float *)&v57.m128i_i32[1];
    v16 = v57;
  }
LABEL_5:
  v57 = v16;
LABEL_6:
  v20 = v57;
  if ( v57.m128i_i64[0] || (v21 = _mm_srli_si128(v57, 8).m128i_u64[0], (_DWORD)v21) || (LOBYTE(a2) = 1, HIDWORD(v21)) )
    LOBYTE(a2) = 0;
  IsRectNull = KeyboardHosting::IsRectNull((KeyboardHosting *)((char *)a1 + 56), a2);
  if ( !(_BYTE)v23 )
  {
    if ( IsRectNull )
    {
      v52.m128i_i32[0] = *((_DWORD *)a1 + 2);
      v24 = *((_DWORD *)a1 + 1);
    }
    else
    {
      v52.m128i_i32[0] = (int)*((float *)a1 + 16);
      v24 = (int)*((float *)a1 + 17);
    }
    v25 = *a1;
    v53 = *(_OWORD *)v11;
    v52.m128i_i32[1] = v24;
    v26 = a1[1];
    v55[0] = v25;
    v27 = a1[2];
    v55[1] = v26;
    v28 = a1[3];
    v55[2] = v27;
    *(_QWORD *)&v27 = *((_QWORD *)a1 + 8);
    v55[3] = v28;
    v56 = v27;
    v57 = v20;
    RelativePosition = (__int64 *)KeyboardHosting::ViewRectHelper::GetRelativePosition(
                                    &v52,
                                    v55,
                                    &v53,
                                    &v57,
                                    v52.m128i_i64[0]);
    v30 = *v11;
    v31 = RelativePosition[1];
    v32 = *RelativePosition;
    v33 = (float)(int)v32;
    *(float *)(a6 + 8) = (float)(v31 - v32);
    *(float *)(a6 + 12) = (float)(HIDWORD(v31) - HIDWORD(v32));
    if ( v30 > (float)(int)v32 )
      v33 = v30;
    v34 = (float)(v30 + v11[2]) - (float)(v31 - v32 + 1);
    if ( v33 <= v34 )
      v34 = v33;
    if ( a5 && (*((_BYTE *)a1 + 24) & 4) != 0 )
      v34 = *a4;
    if ( ((*((_DWORD *)a1 + 6) - 4) & 0xFFFFFFFB) != 0 )
    {
      v35 = *((_DWORD *)a1 + 4);
      if ( SHIDWORD(v32) > _mm_cvtsi128_si32(_mm_srli_si128(v20, 4)) )
      {
        v36 = v11[3] + v11[1];
        v37 = (float)(v35 + HIDWORD(v32));
LABEL_20:
        v38 = v36 - (float)(HIDWORD(v31) - HIDWORD(v32) + 1);
        v39 = v37 <= v38;
LABEL_21:
        if ( v39 )
          v38 = v37;
        *a7 = v33 != v34;
        if ( v37 != v38 )
          v8 = 1;
        *v54 = v8;
        goto LABEL_26;
      }
      v38 = v11[1];
      v37 = (float)(HIDWORD(v32) - v35);
    }
    else
    {
      v38 = v11[1];
      v37 = (float)SHIDWORD(v32);
      if ( v38 > (float)SHIDWORD(v32) )
        v37 = v11[1];
      if ( SHIDWORD(v32) > _mm_cvtsi128_si32(_mm_srli_si128(v20, 4)) )
      {
        v36 = v38 + v11[3];
        goto LABEL_20;
      }
    }
    v39 = v38 <= v37;
    goto LABEL_21;
  }
  if ( IsRectNull )
  {
    v46 = (float)*((int *)a1 + 1);
    v47 = (float)*((int *)a1 + 2);
  }
  else
  {
    v46 = *((float *)a1 + 17);
    v47 = *((float *)a1 + 16);
  }
  *(float *)(a6 + 8) = v47;
  *(float *)(a6 + 12) = v46;
  v34 = (float)(v11[2] + *v11) - v47;
  v38 = (float)((float)(v11[1] + v11[3]) - v46) - 10.0;
  if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)a3, v23)
    || !KeyboardHosting::IsRectNull((KeyboardHosting *)a4, v48) )
  {
    v50 = a3[1];
    v34 = fminf(v34, (float)*((int *)a1 + 3) + *a3);
    v51 = (float)*((int *)a1 + 4);
    if ( *((_DWORD *)a1 + 6) == 1 )
      v38 = fmaxf(v11[1], v50 - v51);
    else
      v38 = fminf(v49, v50 + v51);
  }
LABEL_26:
  *(float *)a6 = v34;
  result = 0LL;
  *(float *)(a6 + 4) = v38;
  return result;
}
