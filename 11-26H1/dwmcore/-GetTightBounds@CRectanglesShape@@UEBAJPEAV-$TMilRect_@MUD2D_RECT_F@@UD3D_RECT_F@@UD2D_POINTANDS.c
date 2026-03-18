/*
 * XREFs of ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18005B860
 * Callers:
 *     <none>
 * Callees:
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B1E0 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CRectanglesShape::GetTightBounds(__int64 a1, struct D2D_RECT_F *a2, __int64 a3)
{
  __int64 v3; // r9
  struct D2D_RECT_F *v4; // r10
  __int64 v5; // r8
  struct D2D_RECT_F *v6; // rcx
  int v7; // r11d
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  float v11; // xmm5_4
  char v12; // cl
  char v13; // cl
  char v14; // cl
  char v15; // al
  char v16; // al
  char v17; // cl
  float bottom; // xmm0_4
  float v19; // xmm2_4
  char v20; // cl
  float v21; // xmm4_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  __int64 v25; // rdi
  float *v26; // rcx
  int v27; // esi
  float v28; // xmm1_4
  int v29; // eax
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  char v33; // cl
  FLOAT *v34; // r10
  unsigned __int64 v35; // r11
  float x; // xmm0_4
  float y; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  char v40; // cl
  struct D2D_RECT_F *v41; // rcx
  char v42; // cl
  char v43; // al
  char v44; // cl
  char v45; // cl
  char v46; // cl
  struct D2D_POINT_2F v47[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = *(struct D2D_RECT_F **)(a1 + 16);
  if ( *(struct D2D_RECT_F **)(v5 + 24) == v6 )
  {
    *(_QWORD *)&a2->right = 0LL;
    *(_QWORD *)&a2->left = 0LL;
    return 0LL;
  }
  v7 = 1;
  *a2 = *v6;
  v8 = *(_QWORD *)(v5 + 16);
  v9 = 1LL;
  if ( (unsigned __int64)((*(_QWORD *)(v5 + 24) - v8) >> 4) > 1 )
  {
    v25 = 16LL;
    do
    {
      v26 = (float *)(v25 + v8);
      if ( v4->right <= v4->left || v4->bottom <= v4->top )
        v27 = v7;
      else
        v27 = 0;
      v28 = *v26;
      if ( v26[2] <= *v26 || v26[3] <= v26[1] )
        v29 = v7;
      else
        v29 = 0;
      if ( v27 )
      {
        if ( v29 || !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues() )
        {
          *(_QWORD *)&v4->right = 0LL;
          *(_QWORD *)&v4->left = 0LL;
        }
        else
        {
          *v4 = *v41;
        }
      }
      else if ( !v29 )
      {
        if ( v4->left > v28 )
          v4->left = v28;
        v30 = v26[1];
        if ( v4->top > v30 )
          v4->top = v30;
        v31 = v26[2];
        if ( v31 > v4->right )
          v4->right = v31;
        v32 = v26[3];
        if ( v32 > v4->bottom )
          v4->bottom = v32;
      }
      v8 = *(_QWORD *)(v5 + 16);
      ++v9;
      v25 += 16LL;
    }
    while ( v9 < (*(_QWORD *)(v5 + 24) - v8) >> 4 );
  }
  if ( v3 )
  {
    v11 = 0.0;
    if ( (char)(*(_BYTE *)(v3 + 64) << 6) >> 6 == 1 )
      goto LABEL_22;
    if ( (char)(*(_BYTE *)(v3 + 64) << 6) >> 6 == 0xFE )
      return 0LL;
    v12 = *(_BYTE *)(v3 + 65);
    if ( (char)(16 * v12) >> 6 == 1 )
      goto LABEL_22;
    if ( (char)(16 * v12) >> 6 != 0xFE )
    {
      v13 = (char)(4 * v12) >> 6;
      if ( v13 > 0 )
        goto LABEL_22;
      if ( v13 == -2 )
      {
        v16 = (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 44) & _xmm) * 61440.0) == 0.0 ? v7 : 0;
      }
      else
      {
        if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 28) & _xmm) * 61440.0)
                           + (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 12) & _xmm) * 61440.0))
                   + COERCE_FLOAT(*(_DWORD *)(v3 + 60) & _xmm)) == 1.0 )
        {
          v14 = v7;
          *(_BYTE *)(v3 + 65) = *(_BYTE *)(v3 + 65) & 0xCF ^ 0x20;
        }
        else
        {
          v14 = 0;
        }
        v15 = (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 44) & _xmm) * 61440.0) == 0.0 ? v7 : 0;
        v16 = v14 & v15;
      }
      if ( !v16 || *(float *)(v3 + 32) != 0.0 || *(float *)(v3 + 36) != 0.0 )
        goto LABEL_22;
      *(_BYTE *)(v3 + 65) = *(_BYTE *)(v3 + 65) & 0xF3 ^ 8;
    }
    if ( (char)(16 * *(_BYTE *)(v3 + 64)) >> 6 == 1 )
      goto LABEL_22;
    if ( (char)(16 * *(_BYTE *)(v3 + 64)) >> 6 != 0xFE )
    {
      v46 = *(_BYTE *)(v3 + 65);
      if ( (char)(4 * v46) >> 6 == 1 )
        goto LABEL_22;
      if ( (char)(4 * v46) >> 6 != 0xFE )
      {
        if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 28) & _xmm) * 61440.0)
                           + (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 12) & _xmm) * 61440.0))
                   + COERCE_FLOAT(*(_DWORD *)(v3 + 60) & _xmm)) != 1.0 )
          goto LABEL_22;
        *(_BYTE *)(v3 + 65) = v46 & 0xCF ^ 0x20;
      }
      if ( *(float *)(v3 + 8) != 0.0 || *(float *)(v3 + 24) != 0.0 )
      {
LABEL_22:
        v17 = *(_BYTE *)(v3 + 64);
        if ( (char)(4 * v17) >> 6 == 1 )
        {
          v19 = *(float *)&FLOAT_0_000081380211;
        }
        else
        {
          if ( (char)(4 * v17) >> 6 < 0 )
          {
LABEL_24:
            v4->left = *(float *)(v3 + 48) + v4->left;
            v4->top = v4->top + *(float *)(v3 + 52);
            bottom = v4->bottom;
            v4->right = *(float *)(v3 + 48) + v4->right;
            v4->bottom = bottom + *(float *)(v3 + 52);
            return 0LL;
          }
          v19 = *(float *)&FLOAT_0_000081380211;
          if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v3)
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v3 - 1.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 20) - 1.0) & _xmm) < 0.000081380211 )
          {
            *(_BYTE *)(v3 + 64) = *(_BYTE *)(v3 + 64) & 0xCF ^ 0x30;
            goto LABEL_24;
          }
          v17 = *(_BYTE *)(v3 + 64) & 0xCF ^ 0x10;
          *(_BYTE *)(v3 + 64) = v17;
        }
        v20 = v17 >> 6;
        if ( v20 > 0 )
        {
LABEL_61:
          CMILMatrix::Transform2DRectToPerspective((CMILMatrix *)v3, v4, v47);
          x = v47[0].x;
          y = v47[0].y;
          v38 = v47[0].x;
          *v34 = v47[0].x;
          v39 = y;
          v34[1] = y;
          v34[2] = v38;
          v34[3] = y;
          do
          {
            x = fminf(x, v47[v35].x);
            *v34 = x;
            y = fminf(y, v47[v35].y);
            v34[1] = y;
            v38 = fmaxf(v38, v47[v35].x);
            v34[2] = v38;
            v39 = fmaxf(v39, v47[v35++].y);
            v34[3] = v39;
          }
          while ( v35 < 4 );
          return 0LL;
        }
        if ( v20 < 0 )
        {
LABEL_29:
          v21 = (float)(*(float *)v3 * v4->left) + *(float *)(v3 + 48);
          v4->left = v21;
          v22 = (float)(*(float *)(v3 + 20) * v4->top) + *(float *)(v3 + 52);
          v4->top = v22;
          v23 = (float)(*(float *)v3 * v4->right) + *(float *)(v3 + 48);
          v4->right = v23;
          v24 = (float)(*(float *)(v3 + 20) * v4->bottom) + *(float *)(v3 + 52);
          v4->bottom = v24;
          if ( *(float *)v3 <= v11 || *(float *)(v3 + 20) <= v11 )
          {
            if ( v21 > v23 )
            {
              v4->left = v23;
              v4->right = v21;
            }
            if ( v22 > v24 )
            {
              v4->top = v24;
              v4->bottom = v22;
            }
          }
          return 0LL;
        }
        v33 = *(_BYTE *)(v3 + 65);
        if ( (char)(4 * v33) >> 6 != 1 )
        {
          if ( (char)(4 * v33) >> 6 < 0 )
          {
LABEL_59:
            if ( v19 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 4) - v11) & _xmm)
              && v19 > COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v3 + 16) - v11) & _xmm) )
            {
              *(_BYTE *)(v3 + 64) |= 0xC0u;
              goto LABEL_29;
            }
            goto LABEL_60;
          }
          v40 = v33 & 0xCF;
          if ( v19 > COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                    (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 28) & _xmm) * 61440.0)
                                                  + (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 12) & _xmm) * 61440.0))
                                          + COERCE_FLOAT(*(_DWORD *)(v3 + 60) & _xmm))
                                  - 1.0) & _xmm) )
          {
            *(_BYTE *)(v3 + 65) = v40 ^ 0x30;
            goto LABEL_59;
          }
          *(_BYTE *)(v3 + 65) = v40 ^ 0x10;
        }
LABEL_60:
        *(_BYTE *)(v3 + 64) = *(_BYTE *)(v3 + 64) & 0x3F | 0x40;
        goto LABEL_61;
      }
      *(_BYTE *)(v3 + 64) = *(_BYTE *)(v3 + 64) & 0xF3 ^ 8;
    }
    v42 = *(_BYTE *)(v3 + 64);
    v43 = (char)(4 * v42) >> 6;
    if ( v43 == 1 )
      goto LABEL_22;
    if ( v43 >= 0 || v43 != -2 )
    {
      v44 = v42 >> 6;
      if ( v44 > 0 )
        goto LABEL_22;
      if ( v44 >= 0 || v44 != -2 )
      {
        v45 = *(_BYTE *)(v3 + 65);
        if ( (char)(4 * v45) >> 6 == 1 )
          goto LABEL_22;
        if ( (char)(4 * v45) >> 6 != 0xFE )
        {
          if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v3 + 28) & _xmm) * 61440.0)
                             + (float)(COERCE_FLOAT(*(_DWORD *)(v3 + 12) & _xmm) * 61440.0))
                     + COERCE_FLOAT(*(_DWORD *)(v3 + 60) & _xmm)) != 1.0 )
            goto LABEL_22;
          *(_BYTE *)(v3 + 65) = v45 & 0xCF ^ 0x20;
        }
        if ( *(float *)(v3 + 4) != 0.0 || *(float *)(v3 + 16) != 0.0 )
          goto LABEL_22;
        *(_BYTE *)(v3 + 64) = *(_BYTE *)(v3 + 64) & 0x3F | 0x80;
      }
      if ( *(float *)v3 != 1.0 || *(float *)(v3 + 20) != 1.0 )
        goto LABEL_22;
      *(_BYTE *)(v3 + 64) = *(_BYTE *)(v3 + 64) & 0xCF ^ 0x20;
    }
    if ( *(float *)(v3 + 40) == 1.0
      && *(float *)(v3 + 48) == 0.0
      && *(float *)(v3 + 52) == 0.0
      && *(float *)(v3 + 56) == 0.0 )
    {
      *(_BYTE *)(v3 + 64) = *(_BYTE *)(v3 + 64) & 0xFC ^ 2;
      return 0LL;
    }
    goto LABEL_22;
  }
  return 0LL;
}
