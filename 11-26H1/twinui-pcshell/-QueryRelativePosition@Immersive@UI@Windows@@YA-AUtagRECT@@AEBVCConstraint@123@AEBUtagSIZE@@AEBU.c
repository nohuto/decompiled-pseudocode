/*
 * XREFs of ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x18013ED78
 * Callers:
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18013EAA0 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 * Callees:
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x18013DFEC (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x18013F3E8 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     ?CanPositionRelativeOnSide@Immersive@UI@Windows@@YA_NAEBVCConstraint@123@AEBUtagRECT@@W4FLYOUT_PLACEMENT@@0@Z @ 0x1801C3254 (-CanPositionRelativeOnSide@Immersive@UI@Windows@@YA_NAEBVCConstraint@123@AEBUtagRECT@@W4FLYOUT_P.c)
 *     ?MoveNearRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBU4@0W4FLYOUT_PLACEMENT@@@Z @ 0x1801CD950 (-MoveNearRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBU4@0W4FLYOUT_PLACEMENT@@@Z.c)
 *     ?HorizontallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1801D3588 (-HorizontallyCenterRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?VerticallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x18068508C (-VerticallyCenterRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 */

const struct Windows::UI::Immersive::CConstraint *__fastcall Windows::UI::Immersive::QueryRelativePosition(
        const struct Windows::UI::Immersive::CConstraint *a1,
        struct tagRECT *a2,
        __int64 a3,
        LONG *a4,
        int a5,
        int *a6)
{
  struct tagRECT v7; // xmm0
  unsigned int v8; // esi
  int v10; // r15d
  LONG v12; // r13d
  int v13; // ecx
  LONG v14; // r12d
  LONG v15; // r8d
  int v16; // r11d
  int v17; // r10d
  LONG top; // eax
  bool v19; // cc
  LONG v20; // ebx
  int v21; // edx
  int v22; // ecx
  const struct tagRECT *left; // r9
  LONG v24; // ebx
  LONG v25; // edx
  __m128i v26; // xmm1
  int v27; // r8d
  unsigned __int64 v28; // xmm0_8
  const struct tagRECT *v30; // r9
  char v31; // dl
  char v32; // r13
  unsigned int v33; // edi
  unsigned int v34; // r12d
  struct tagRECT *v35; // rax
  bool v36; // zf
  int v37; // eax
  char v38; // di
  const struct tagRECT *v39; // r9
  const struct tagRECT *v40; // r9
  struct tagRECT v41; // xmm0
  struct tagRECT *v42; // rax
  struct tagRECT v43; // xmm0
  int v44; // r8d
  const struct tagRECT *v45; // r9
  char v46; // [rsp+30h] [rbp-79h]
  char v47; // [rsp+31h] [rbp-78h]
  struct tagRECT v48; // [rsp+40h] [rbp-69h] BYREF
  int pvParam; // [rsp+50h] [rbp-59h] BYREF
  struct tagRECT v50; // [rsp+58h] [rbp-51h] BYREF
  struct tagRECT v51; // [rsp+70h] [rbp-39h] BYREF
  int *v52; // [rsp+80h] [rbp-29h]
  struct tagRECT v53; // [rsp+90h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+A0h] [rbp-9h] BYREF

  v7 = *a2;
  v8 = 1;
  v52 = a6;
  v10 = 1;
  if ( a5 )
    v10 = a5;
  rc = v7;
  InflateRect(&rc, -5, -5);
  v12 = *a4;
  v13 = *(_QWORD *)a3;
  v14 = a4[2];
  v15 = a4[3];
  v16 = rc.bottom - rc.top;
  v17 = rc.right - rc.left;
  *(_QWORD *)&v50.left = *(_QWORD *)a3;
  top = v50.top;
  if ( v13 > rc.right - rc.left )
    v13 = rc.right - rc.left;
  v48.left = v12;
  v19 = *(_DWORD *)(a3 + 4) <= v16;
  v20 = a4[1];
  if ( !v19 )
    top = rc.bottom - rc.top;
  *(_QWORD *)&v50.left = __PAIR64__(top, v13);
  v21 = 0;
  *(_QWORD *)&v53.left = 0LL;
  *(_QWORD *)&v53.right = __PAIR64__(top, v13);
  v22 = 0;
  *(_QWORD *)&v51.left = HIDWORD(*(_QWORD *)&v53.right);
  v48.right = v14;
  pvParam = v20;
  v48.top = v20;
  v48.bottom = v15;
  *(_OWORD *)a1 = 0LL;
  if ( v10 == 1 )
  {
    v22 = v20 - rc.top;
  }
  else
  {
    if ( v10 != 2 )
    {
      if ( v10 == 3 )
      {
        v21 = v12 - rc.left;
      }
      else
      {
        if ( v10 != 4 )
          goto LABEL_11;
        v21 = rc.right - v14;
      }
      v22 = v16;
      goto LABEL_11;
    }
    v22 = rc.bottom - v15;
  }
  v21 = v17;
LABEL_11:
  left = (const struct tagRECT *)(unsigned int)v50.left;
  v24 = v53.top;
  if ( v21 < v50.left - v53.left || (v25 = v51.left, v22 < v51.left - v53.top) )
  {
    v31 = 0;
    v32 = 0;
    v46 = 0;
    v33 = 1;
    v34 = 4;
    if ( v10 == 1 )
    {
      v33 = 2;
    }
    else if ( v10 != 2 )
    {
      if ( v10 == 3 )
      {
        v33 = 4;
      }
      else
      {
        if ( v10 != 4 )
          goto LABEL_50;
        v33 = 3;
      }
      v32 = 1;
LABEL_50:
      v47 = v31;
      if ( (unsigned __int8)Windows::UI::Immersive::CanPositionRelativeOnSide(&v48, &v53, v33, &rc) )
      {
        v35 = (struct tagRECT *)Windows::UI::Immersive::PositionRelativeOnSide(
                                  (__int64)&v51,
                                  &v48,
                                  &v53,
                                  (const struct tagRECT *)v33,
                                  &rc);
        v10 = v33;
LABEL_78:
        *(struct tagRECT *)a1 = *v35;
        goto LABEL_27;
      }
      if ( (unsigned int)(v10 - 3) <= 1 )
      {
        v34 = 1;
        v38 = 1;
      }
      else
      {
        pvParam = 1;
        v36 = !SystemParametersInfoW(0x1Bu, 0, &pvParam, 0);
        v37 = 1;
        if ( !v36 )
          v37 = pvParam;
        v38 = v46;
        if ( !v37 )
        {
          v34 = 3;
          v32 = 1;
        }
      }
      if ( (unsigned __int8)Windows::UI::Immersive::CanPositionRelativeOnSide(&v48, &v53, v34, &rc) )
      {
        v35 = (struct tagRECT *)Windows::UI::Immersive::PositionRelativeOnSide(
                                  (__int64)&v51,
                                  &v48,
                                  &v53,
                                  (const struct tagRECT *)v34,
                                  &rc);
        v10 = v34;
        goto LABEL_78;
      }
      if ( v38 )
      {
        if ( v47 )
          v8 = (v32 != 0) + 3;
        else
          v8 = 2;
      }
      if ( (unsigned __int8)Windows::UI::Immersive::CanPositionRelativeOnSide(&v48, &v53, v8, &rc) )
      {
        v35 = (struct tagRECT *)Windows::UI::Immersive::PositionRelativeOnSide(
                                  (__int64)&v51,
                                  &v48,
                                  &v53,
                                  (const struct tagRECT *)v8,
                                  &rc);
        v10 = v8;
        goto LABEL_78;
      }
      if ( v10 == 1 )
      {
        v43 = v53;
        v44 = rc.top - v53.top;
      }
      else
      {
        if ( v10 != 2 )
        {
          if ( v10 == 3 )
          {
            v51 = v53;
            OffsetRect(&v51, rc.left - v53.left, v24 - v53.top);
            v41 = v51;
          }
          else
          {
            if ( v10 != 4 )
            {
LABEL_77:
              v35 = Windows::UI::Immersive::ShiftRectIntoContainer((Windows::UI::Immersive *)&v48, &rc, a1, v39);
              goto LABEL_78;
            }
            OffsetRect(&v53, rc.right - v50.left, v24 - v53.top);
            v41 = v53;
          }
          *(struct tagRECT *)a1 = v41;
          v42 = Windows::UI::Immersive::VerticallyCenterRect(&v53, &v48, a1, v40);
LABEL_76:
          *(struct tagRECT *)a1 = *v42;
          goto LABEL_77;
        }
        v43 = v53;
        v44 = rc.bottom + v24 - v53.top - v51.left;
      }
      v53 = v43;
      OffsetRect(&v53, 0, v44);
      *(struct tagRECT *)a1 = v53;
      v42 = Windows::UI::Immersive::HorizontallyCenterRect(&v53, &v48, a1, v45);
      goto LABEL_76;
    }
    v31 = 1;
    v46 = 1;
    goto LABEL_50;
  }
  v26 = 0LL;
  v51 = 0LL;
  if ( v10 == 1 || v10 == 2 )
  {
    *(_QWORD *)&v50.left = 0LL;
    if ( v10 == 1 )
      v27 = pvParam - v25;
    else
      v27 = v15 - v53.top;
    v48 = v53;
    OffsetRect(&v48, 0, v27);
    v53 = v48;
    OffsetRect(&v53, (int)(v14 - v48.left - _mm_srli_si128((__m128i)v48, 8).m128i_u32[0] + v12) / 2, 0);
    v26 = (__m128i)v53;
    goto LABEL_18;
  }
  if ( (unsigned int)(v10 - 3) <= 1 )
  {
    v53 = *(struct tagRECT *)Windows::UI::Immersive::MoveNearRect(&v51, &v53, &v48);
    v26 = *(__m128i *)Windows::UI::Immersive::VerticallyCenterRect(
                        &v50,
                        &v48,
                        (const struct Windows::UI::Immersive::CConstraint *)&v53,
                        v30);
LABEL_18:
    v51 = (struct tagRECT)v26;
  }
  v28 = _mm_srli_si128(v26, 8).m128i_u64[0];
  if ( v26.m128i_i32[0] > (int)v28 || v26.m128i_i32[1] > SHIDWORD(v28) )
    LOBYTE(v8) = 0;
  if ( v26.m128i_i32[0] < rc.left
    || (int)v28 > rc.right
    || v26.m128i_i32[1] < rc.top
    || SHIDWORD(v28) > rc.bottom
    || !(_BYTE)v8 )
  {
    v26 = *(__m128i *)Windows::UI::Immersive::ShiftRectIntoContainer(
                        (Windows::UI::Immersive *)&v48,
                        &rc,
                        (const struct Windows::UI::Immersive::CConstraint *)&v51,
                        left);
  }
  *(__m128i *)a1 = v26;
LABEL_27:
  if ( v52 )
    *v52 = v10;
  return a1;
}
