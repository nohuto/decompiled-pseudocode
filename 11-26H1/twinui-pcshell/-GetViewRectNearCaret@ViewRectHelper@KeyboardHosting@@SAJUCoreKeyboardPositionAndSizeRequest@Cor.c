/*
 * XREFs of ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18013E3B0
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x18024FCC0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x18013E8FC (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x18013E93C (-ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z.c)
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18013EAA0 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
        __int64 a1,
        float *a2,
        float *a3,
        float *a4,
        char a5,
        __int64 a6,
        bool *a7,
        char *a8)
{
  char v8; // bl
  __int128 v13; // xmm1
  int v14; // r14d
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm8_4
  float v18; // xmm1_4
  int v19; // r8d
  unsigned __int64 v20; // rdx
  int v21; // r9d
  bool IsRectNull; // al
  const struct Windows::Foundation::Rect *v23; // rdx
  int v24; // eax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  unsigned __int64 *RelativePosition; // rax
  float v30; // xmm3_4
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  int v33; // r8d
  unsigned __int64 v34; // rcx
  int v35; // edx
  float v36; // xmm4_4
  float v37; // xmm3_4
  int v38; // eax
  float v39; // xmm1_4
  float v40; // xmm2_4
  __int64 result; // rax
  float v42; // xmm5_4
  float v43; // xmm1_4
  bool v44; // cc
  float v45; // xmm0_4
  float v46; // xmm1_4
  const struct Windows::Foundation::Rect *v47; // rdx
  float v48; // xmm4_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  __int128 v51; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v52; // [rsp+48h] [rbp-C0h] BYREF
  bool *v53; // [rsp+58h] [rbp-B0h]
  char *v54; // [rsp+60h] [rbp-A8h]
  __int128 v55; // [rsp+68h] [rbp-A0h] BYREF
  _OWORD v56[4]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-50h]

  v8 = 0;
  v53 = a7;
  v54 = a8;
  *(_OWORD *)a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( a5 )
  {
    v43 = a4[1];
    v20 = (unsigned int)(int)*a4;
    v14 = (int)v43;
    v18 = v43 + a4[3];
    v19 = (int)(float)(*a4 + a4[2]);
    goto LABEL_5;
  }
  v13 = *(_OWORD *)a3;
  v51 = *(_OWORD *)a4;
  v52 = v13;
  KeyboardHosting::ViewRectHelper::ValidateRect((struct Windows::Foundation::Rect *)&v52);
  KeyboardHosting::ViewRectHelper::ValidateRect((struct Windows::Foundation::Rect *)&v51);
  v14 = 0;
  v15 = *((float *)&v51 + 2);
  v16 = *((float *)&v51 + 1);
  v17 = *(float *)&v51;
  if ( (*(float *)&v52 != 0.0
     || *((float *)&v52 + 1) != 0.0
     || *((float *)&v52 + 2) != 0.0
     || *((float *)&v52 + 3) != 0.0)
    && (*(float *)&v51 != 0.0
     || *((float *)&v51 + 1) != 0.0
     || *((float *)&v51 + 2) != 0.0
     || *((float *)&v51 + 3) != 0.0)
    || *(float *)&v52 != 0.0
    || *((float *)&v52 + 1) != 0.0
    || *((float *)&v52 + 2) != 0.0
    || *((float *)&v52 + 3) != 0.0 )
  {
    v18 = *((float *)&v52 + 3) + *((float *)&v52 + 1);
    v14 = (int)*((float *)&v52 + 1);
    v19 = (int)(float)(*((float *)&v52 + 2) + *(float *)&v52);
    v20 = (unsigned int)(int)*(float *)&v52;
LABEL_5:
    v21 = (int)v18;
    goto LABEL_6;
  }
  if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)&v51, 0LL) )
  {
    v20 = (unsigned int)(int)v17;
    v19 = (int)(float)(v15 + v17);
    v21 = (int)(float)(v42 + v16);
    v14 = (int)v16;
  }
LABEL_6:
  *(_QWORD *)&v52 = __PAIR64__(v14, v20);
  *((_QWORD *)&v52 + 1) = __PAIR64__(v21, v19);
  if ( (_DWORD)v20 || v14 || v19 || (LOBYTE(v20) = 1, v21) )
    LOBYTE(v20) = 0;
  IsRectNull = KeyboardHosting::IsRectNull((KeyboardHosting *)(a1 + 56), (const struct Windows::Foundation::Rect *)v20);
  if ( (_BYTE)v23 )
  {
    if ( IsRectNull )
    {
      v45 = (float)*(int *)(a1 + 8);
      v46 = (float)*(int *)(a1 + 4);
    }
    else
    {
      v45 = *(float *)(a1 + 64);
      v46 = *(float *)(a1 + 68);
    }
    *(float *)(a6 + 8) = v45;
    *(float *)(a6 + 12) = v46;
    v37 = (float)(a2[2] + *a2) - v45;
    v40 = (float)((float)(a2[1] + a2[3]) - v46) - 10.0;
    if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)a3, v23)
      || !KeyboardHosting::IsRectNull((KeyboardHosting *)a4, v47) )
    {
      v49 = (float)*(int *)(a1 + 16);
      v37 = fminf(v37, (float)*(int *)(a1 + 12) + *a3);
      v50 = a3[1];
      if ( *(_DWORD *)(a1 + 24) == 1 )
        v40 = fmaxf(a2[1], v50 - v49);
      else
        v40 = fminf(v48, v50 + v49);
    }
  }
  else
  {
    if ( IsRectNull )
    {
      LODWORD(v51) = *(_DWORD *)(a1 + 8);
      v24 = *(_DWORD *)(a1 + 4);
    }
    else
    {
      LODWORD(v51) = (int)*(float *)(a1 + 64);
      v24 = (int)*(float *)(a1 + 68);
    }
    v25 = *(_OWORD *)a2;
    v56[0] = *(_OWORD *)a1;
    v26 = *(_OWORD *)(a1 + 32);
    v55 = v25;
    DWORD1(v51) = v24;
    v27 = *(_OWORD *)(a1 + 16);
    v56[2] = v26;
    *(_QWORD *)&v26 = *(_QWORD *)(a1 + 64);
    v56[1] = v27;
    v28 = *(_OWORD *)(a1 + 48);
    v57 = v26;
    v56[3] = v28;
    RelativePosition = (unsigned __int64 *)KeyboardHosting::ViewRectHelper::GetRelativePosition(
                                             &v51,
                                             v56,
                                             &v55,
                                             &v52,
                                             v51);
    v30 = *a2;
    v31 = RelativePosition[1];
    v32 = *RelativePosition;
    v33 = v31 - v32;
    v34 = HIDWORD(v32);
    v35 = HIDWORD(v31) - HIDWORD(v32);
    v36 = (float)(int)v32;
    *(float *)(a6 + 8) = (float)v33;
    *(float *)(a6 + 12) = (float)(HIDWORD(v31) - HIDWORD(v32));
    if ( v30 > (float)(int)v32 )
      v36 = v30;
    v37 = (float)(v30 + a2[2]) - (float)(v33 + 1);
    if ( v36 <= v37 )
      v37 = v36;
    if ( a5 && (*(_BYTE *)(a1 + 24) & 4) != 0 )
      v37 = *a4;
    if ( *(_DWORD *)(a1 + 24) == 4 || *(_DWORD *)(a1 + 24) == 8 )
    {
      v40 = a2[1];
      v39 = (float)SHIDWORD(v32);
      if ( v40 > (float)SHIDWORD(v32) )
        v39 = a2[1];
      if ( SHIDWORD(v32) > v14 )
      {
        v40 = (float)(v40 + a2[3]) - (float)(v35 + 1);
        v44 = v39 <= v40;
      }
      else
      {
        v44 = v40 <= v39;
      }
      if ( v44 )
        v40 = v39;
    }
    else
    {
      v38 = *(_DWORD *)(a1 + 16);
      if ( (int)v34 <= v14 )
      {
        v39 = (float)((int)v34 - v38);
        v40 = fmaxf(a2[1], v39);
      }
      else
      {
        v39 = (float)((int)v34 + v38);
        v40 = fminf((float)(a2[3] + a2[1]) - (float)(v35 + 1), v39);
      }
    }
    *v53 = v36 != v37;
    if ( v39 != v40 )
      v8 = 1;
    *v54 = v8;
  }
  *(float *)a6 = v37;
  result = 0LL;
  *(float *)(a6 + 4) = v40;
  return result;
}
