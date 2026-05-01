/*
 * XREFs of ?GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@1PEAU9Foundation@8@PEA_N3@Z @ 0x180481550
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x18024FCC0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x18013E8FC (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18013EAA0 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectNearFocusedElement(
        __int128 *a1,
        float *a2,
        float *a3,
        __int64 a4,
        bool *a5,
        char *a6)
{
  float v6; // xmm1_4
  char v7; // si
  const struct Windows::Foundation::Rect *v11; // rdx
  int v12; // r15d
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __m128i *RelativePosition; // rax
  float v22; // xmm4_4
  float v23; // xmm3_4
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  bool v27; // zf
  float v28; // xmm4_4
  float v29; // xmm3_4
  int v30; // eax
  float v31; // xmm1_4
  float v32; // xmm2_4
  bool v33; // cc
  float v34; // xmm1_4
  float v35; // xmm2_4
  __int64 result; // rax
  __m128i v37; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v38[4]; // [rsp+40h] [rbp-69h] BYREF
  __int128 v39; // [rsp+50h] [rbp-59h] BYREF
  _OWORD v40[4]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-9h]

  v6 = a3[1];
  v7 = 0;
  *(_OWORD *)a4 = 0LL;
  v11 = (const struct Windows::Foundation::Rect *)(unsigned int)(int)*a3;
  *a5 = 0;
  *a6 = 0;
  v12 = (int)v6;
  if ( KeyboardHosting::IsRectNull((KeyboardHosting *)((char *)a1 + 56), v11) )
  {
    v37.m128i_i32[0] = *((_DWORD *)a1 + 2);
    v16 = *((_DWORD *)a1 + 1);
  }
  else
  {
    v37.m128i_i32[0] = (int)*((float *)a1 + 16);
    v16 = (int)*((float *)a1 + 17);
  }
  v17 = *a1;
  v39 = *(_OWORD *)a2;
  v37.m128i_i32[1] = v16;
  v18 = a1[1];
  v40[0] = v17;
  v19 = a1[2];
  v40[1] = v18;
  v20 = a1[3];
  v40[2] = v19;
  *(_QWORD *)&v19 = *((_QWORD *)a1 + 8);
  v38[0] = v13;
  v38[2] = v15;
  v38[3] = v14;
  v40[3] = v20;
  v41 = v19;
  v38[1] = v12;
  RelativePosition = KeyboardHosting::ViewRectHelper::GetRelativePosition(
                       &v37,
                       v40,
                       (float *)&v39,
                       v38,
                       v37.m128i_i64[0]);
  v22 = *a2;
  v23 = *a2 + a2[2];
  v24 = RelativePosition->m128i_i64[1];
  v25 = RelativePosition->m128i_i64[0];
  v26 = HIDWORD(v25);
  v27 = *((_DWORD *)a1 + 6) == 4;
  *(float *)(a4 + 8) = (float)(v24 - (unsigned int)v25);
  v28 = fmaxf(v22, (float)(int)v25);
  *(float *)(a4 + 12) = (float)(HIDWORD(v24) - HIDWORD(v25));
  v29 = fminf(v23 - (float)(v24 - (unsigned int)v25 + 1), v28);
  if ( v27 || *((_DWORD *)a1 + 6) == 8 )
  {
    v35 = a2[1];
    v34 = v35 + a2[3];
    v32 = fmaxf(v35, (float)SHIDWORD(v25));
  }
  else
  {
    v30 = *((_DWORD *)a1 + 4);
    if ( (int)v26 <= v12 )
    {
      v31 = a2[1];
      v32 = (float)((int)v26 - v30);
      v33 = v31 <= v32;
      goto LABEL_11;
    }
    v34 = a2[3] + a2[1];
    v32 = (float)((int)v26 + v30);
  }
  v31 = v34 - (float)(HIDWORD(v24) - HIDWORD(v25) + 1);
  v33 = v32 <= v31;
LABEL_11:
  if ( v33 )
    v31 = v32;
  *a5 = v28 != v29;
  if ( v32 != v31 )
    v7 = 1;
  *a6 = v7;
  result = 0LL;
  *(float *)a4 = v29;
  *(float *)(a4 + 4) = v31;
  return result;
}
