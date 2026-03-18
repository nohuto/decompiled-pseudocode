/*
 * XREFs of ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F1BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180011FD0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x180064CE0 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800F2210 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetTightBounds(_QWORD *a1, struct D2D_RECT_F *a2, __int64 a3)
{
  __int64 v3; // rax
  CMILMatrix *v4; // r10
  _QWORD *v6; // r9
  float v7; // xmm1_4
  float v8; // xmm2_4
  __int64 v9; // rax
  struct D2D_POINT_2F *v11; // rsi
  __int64 v12; // r10
  int v13; // eax
  int v14; // edi
  int v15; // eax
  float v16; // xmm3_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  __int64 v20; // r10
  char v21; // cl
  char v22; // dl
  float v23; // xmm1_4
  CMILMatrix *v24; // rcx
  float *v25; // r10
  float v26; // xmm4_4
  float v27; // xmm2_4
  float v28; // xmm3_4
  float v29; // xmm1_4
  char v30; // dl
  float x; // xmm0_4
  unsigned __int64 v32; // rax
  float y; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  FLOAT v36; // xmm1_4
  FLOAT v37; // xmm0_4
  FLOAT v38; // xmm1_4
  unsigned int v39; // xmm0_4
  struct D2D_RECT_F v40; // [rsp+30h] [rbp-29h] BYREF
  __int128 v41; // [rsp+40h] [rbp-19h] BYREF
  struct D2D_POINT_2F v42[2]; // [rsp+50h] [rbp-9h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp+7h]

  v3 = a1[2];
  v4 = (CMILMatrix *)a3;
  v6 = a1;
  if ( *(_BYTE *)(v3 + 68) )
  {
    if ( (float)(*(float *)(v3 + 32) + *(float *)(v3 + 32)) > (float)((float)(*(float *)(v3 + 16) + *(float *)(v3 + 24))
                                                                    - *(float *)(v3 + 16))
      || (float)(*(float *)(v3 + 36) + *(float *)(v3 + 36)) > (float)((float)(*(float *)(v3 + 20) + *(float *)(v3 + 28))
                                                                    - *(float *)(v3 + 20)) )
    {
      goto LABEL_12;
    }
  }
  else
  {
    v7 = *(float *)(v3 + 24) - *(float *)(v3 + 16);
    if ( (float)(*(float *)(v3 + 40) + *(float *)(v3 + 32)) > v7 )
      goto LABEL_12;
    if ( (float)(*(float *)(v3 + 56) + *(float *)(v3 + 48)) > v7 )
      goto LABEL_12;
    v8 = *(float *)(v3 + 28) - *(float *)(v3 + 20);
    if ( (float)(*(float *)(v3 + 60) + *(float *)(v3 + 36)) > v8
      || (float)(*(float *)(v3 + 52) + *(float *)(v3 + 44)) > v8 )
    {
      goto LABEL_12;
    }
  }
  if ( !a3 )
    goto LABEL_7;
  v21 = *(_BYTE *)(a3 + 64);
  if ( v21 >> 6 == 1 )
  {
LABEL_11:
    if ( CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a3) )
      goto LABEL_7;
LABEL_12:
    *(_QWORD *)&v40.left = 0LL;
    v11 = 0LL;
    v43 = 0LL;
    *(_OWORD *)&v42[0].x = 0LL;
    if ( v4 )
    {
      if ( !CMILMatrix::Is2DAffineOrNaN(v4) )
        goto LABEL_14;
      v11 = v42;
      v36 = *(float *)(v12 + 4);
      v42[0].x = *(FLOAT *)v12;
      v37 = *(float *)(v12 + 16);
      v42[0].y = v36;
      v38 = *(float *)(v12 + 20);
      v42[1].x = v37;
      v39 = *(_DWORD *)(v12 + 48);
      v42[1].y = v38;
      v43 = __PAIR64__(*(_DWORD *)(v12 + 52), v39);
    }
    v12 = 0LL;
LABEL_14:
    v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64, struct D2D_RECT_F *))(*v6 + 24LL))(v6, v12, &v40);
    v14 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x407u, 0LL);
    }
    else
    {
      v41 = 0LL;
      v15 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_POINT_2F *, __int128 *))(**(_QWORD **)&v40.left + 32LL))(
              *(_QWORD *)&v40.left,
              v11,
              &v41);
      v16 = *(float *)&v41;
      v14 = v15;
      v17 = *((float *)&v41 + 1);
      v18 = *((float *)&v41 + 2);
      v19 = *((float *)&v41 + 3);
      LODWORD(a2->left) = v41;
      a2->top = v17;
      a2->right = v18;
      a2->bottom = v19;
      if ( v18 < v16 || v19 < v17 )
      {
        *(_QWORD *)&a2->right = 0LL;
        *(_QWORD *)&a2->left = 0LL;
      }
    }
    if ( v14 == -2003238895 )
      v14 = -2003304438;
    if ( *(_QWORD *)&v40.left )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v40.left + 16LL))(*(_QWORD *)&v40.left);
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x6Au, 0LL);
    return 0LL;
  }
  if ( v21 >> 6 < 0 )
    goto LABEL_7;
  v22 = *(_BYTE *)(a3 + 65);
  if ( (char)(4 * v22) >> 6 == 1 )
    goto LABEL_37;
  if ( (char)(4 * v22) >> 6 < 0 )
    goto LABEL_36;
  v30 = v22 & 0xCF;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a3 + 28) & _xmm) * 61440.0)
                                    + (float)(COERCE_FLOAT(*(_DWORD *)(a3 + 12) & _xmm) * 61440.0))
                            + COERCE_FLOAT(*(_DWORD *)(a3 + 60) & _xmm))
                    - 1.0) & _xmm) >= 0.000081380211 )
  {
    *(_BYTE *)(a3 + 65) = v30 ^ 0x10;
    *(_BYTE *)(a3 + 64) = v21 & 0x3F | 0x40;
    goto LABEL_11;
  }
  *(_BYTE *)(a3 + 65) = v30 ^ 0x30;
LABEL_36:
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 4) - 0.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 16) - 0.0) & _xmm) >= 0.000081380211 )
  {
LABEL_37:
    *(_BYTE *)(a3 + 64) = v21 & 0x3F | 0x40;
    goto LABEL_11;
  }
  *(_BYTE *)(a3 + 64) = v21 | 0xC0;
LABEL_7:
  v9 = v6[2];
  if ( *(_BYTE *)(v9 + 68) )
  {
    v23 = *(float *)(v9 + 20);
    v40.left = *(FLOAT *)(v9 + 16);
    *(_QWORD *)&v40.top = __PAIR64__(v40.left + *(float *)(v9 + 24), LODWORD(v23));
    v40.bottom = v23 + *(float *)(v9 + 28);
  }
  else
  {
    v40 = *(struct D2D_RECT_F *)(v9 + 16);
  }
  *a2 = v40;
  if ( v4 && !(unsigned __int8)CMILMatrix::IsIdentity<0>(v4) )
  {
    if ( (char)(4 * *(_BYTE *)(v20 + 64)) >> 6 != 1 )
    {
      if ( (char)(4 * *(_BYTE *)(v20 + 64)) >> 6 < 0 )
      {
LABEL_28:
        a2->left = *(float *)(v20 + 48) + a2->left;
        a2->top = a2->top + *(float *)(v20 + 52);
        a2->right = *(float *)(v20 + 48) + a2->right;
        a2->bottom = *(float *)(v20 + 52) + a2->bottom;
        return 0LL;
      }
      if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v20)
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v20 - 1.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v20 + 20) - 1.0) & _xmm) < 0.000081380211 )
      {
        *(_BYTE *)(v20 + 64) = *(_BYTE *)(v20 + 64) & 0xCF ^ 0x30;
        goto LABEL_28;
      }
      *(_BYTE *)(v20 + 64) = *(_BYTE *)(v20 + 64) & 0xCF ^ 0x10;
    }
    if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v20) )
    {
      v26 = (float)(*v25 * a2->left) + v25[12];
      a2->left = v26;
      v27 = (float)(v25[5] * a2->top) + v25[13];
      a2->top = v27;
      v28 = (float)(*v25 * a2->right) + v25[12];
      a2->right = v28;
      v29 = (float)(v25[5] * a2->bottom) + v25[13];
      a2->bottom = v29;
      if ( *v25 <= 0.0 || v25[5] <= 0.0 )
      {
        if ( v26 > v28 )
        {
          a2->left = v28;
          a2->right = v26;
        }
        if ( v27 > v29 )
        {
          a2->top = v29;
          a2->bottom = v27;
        }
      }
    }
    else
    {
      CMILMatrix::Transform2DRectToPerspective(v24, a2, v42);
      x = v42[0].x;
      v32 = 1LL;
      y = v42[0].y;
      v34 = v42[0].x;
      a2->left = v42[0].x;
      v35 = y;
      a2->top = y;
      a2->right = v34;
      a2->bottom = y;
      do
      {
        x = fminf(x, v42[v32].x);
        a2->left = x;
        y = fminf(y, v42[v32].y);
        a2->top = y;
        v34 = fmaxf(v34, v42[v32].x);
        a2->right = v34;
        v35 = fmaxf(v35, v42[v32++].y);
        a2->bottom = v35;
      }
      while ( v32 < 4 );
    }
  }
  return 0LL;
}
