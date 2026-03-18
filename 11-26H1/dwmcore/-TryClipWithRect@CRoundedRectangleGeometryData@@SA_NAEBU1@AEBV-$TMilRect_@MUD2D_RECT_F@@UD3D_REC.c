/*
 * XREFs of ?TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAU1@@Z @ 0x1800DD760
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRoundedRectangleGeometryData::TryClipWithRect(__int64 a1, float *a2, __int64 a3)
{
  float v3; // xmm7_4
  float v4; // xmm12_4
  float v5; // xmm6_4
  float v6; // xmm13_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm4_4
  float v11; // xmm4_4
  float v12; // xmm9_4
  float v13; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm11_4
  float v18; // xmm14_4
  float v19; // xmm5_4
  float v20; // xmm0_4
  __int32 v21; // xmm2_4
  float *v22; // r9
  float v23; // xmm4_4
  float v24; // xmm9_4
  bool v25; // si
  bool v26; // r11
  bool v27; // di
  float v28; // xmm0_4
  bool v29; // bl
  float v30; // xmm2_4
  char v31; // r10
  float *v32; // rdx
  float *v33; // rax
  float v34; // xmm2_4
  float v35; // xmm5_4
  char v36; // r10
  float *v37; // rdx
  float *v38; // rax
  float v39; // xmm0_4
  float v40; // xmm2_4
  char v41; // dl
  float *v42; // rax
  float *v43; // rcx
  float v44; // xmm0_4
  float v45; // xmm1_4
  bool result; // al
  __int128 v47; // [rsp+10h] [rbp-B8h]

  v3 = *(float *)a1;
  v4 = *(float *)(a1 + 4);
  if ( *(_BYTE *)(a1 + 52) )
  {
    v5 = v3 + *(float *)(a1 + 8);
    v6 = v4 + *(float *)(a1 + 12);
  }
  else
  {
    v5 = *(float *)(a1 + 8);
    v6 = *(float *)(a1 + 12);
  }
  v47 = *(_OWORD *)a2;
  if ( COERCE_FLOAT(*(_OWORD *)a2) <= -3.4028235e38 )
    v7 = FLOAT_N3_4028235e38;
  else
    v7 = COERCE_FLOAT(*(_OWORD *)a2) + -0.015625;
  if ( *((float *)&v47 + 1) <= -3.4028235e38 )
    v8 = FLOAT_N3_4028235e38;
  else
    v8 = *((float *)&v47 + 1) + -0.015625;
  if ( *((float *)&v47 + 2) >= 3.4028235e38 )
    v9 = FLOAT_3_4028235e38;
  else
    v9 = *((float *)&v47 + 2) + 0.015625;
  if ( *((float *)&v47 + 3) >= 3.4028235e38 )
    v10 = FLOAT_3_4028235e38;
  else
    v10 = *((float *)&v47 + 3) + 0.015625;
  if ( v5 <= v3 || v6 <= v4 || v3 >= v7 && v4 >= v8 && v9 >= v5 && v10 >= v6 )
  {
    result = 1;
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
    *(_QWORD *)(a3 + 48) = *(_QWORD *)(a1 + 48);
    return result;
  }
  v11 = fmaxf(*a2, v3);
  v12 = *(float *)(a1 + 4);
  v13 = v12;
  if ( a2[1] > v12 )
  {
    v12 = a2[1];
    v13 = v12;
  }
  v14 = v5;
  v15 = v5;
  v16 = v5;
  v17 = v5;
  if ( v5 > a2[2] )
  {
    v14 = a2[2];
    v15 = v14;
    v16 = v14;
    v17 = v14;
  }
  v18 = v6;
  v19 = v6;
  v20 = v6;
  if ( v6 > a2[3] )
  {
    v18 = a2[3];
    v19 = v18;
    v16 = v17;
    v20 = v18;
  }
  if ( v15 <= v11 || v19 <= v13 || (float)(v16 - 0.0000011920929) <= v11 || (float)(v20 - 0.0000011920929) <= v12 )
  {
    result = 1;
    *(_BYTE *)(a3 + 52) = 1;
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_DWORD *)(a3 + 48) = 0;
    return result;
  }
  COERCE_FLOAT(v21 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  v22 = (float *)(a1 + 16);
  *(float *)a3 = v11;
  *(float *)(a3 + 4) = v12;
  v23 = v11 - v3;
  *(float *)(a3 + 8) = v14;
  v24 = v12 - v4;
  *(float *)(a3 + 12) = v18;
  *(_BYTE *)(a3 + 52) = 0;
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a1 + 48);
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  v25 = COERCE_FLOAT(LODWORD(v23) & v21) <= 0.0000011920929;
  v26 = COERCE_FLOAT(LODWORD(v24) & v21) <= 0.0000011920929;
  v27 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - v5) & v21) <= 0.0000011920929;
  v28 = *(float *)(a1 + 16);
  v29 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - v6) & v21) <= 0.0000011920929;
  if ( v28 > 0.0 )
  {
    v30 = *(float *)(a1 + 20);
    if ( v30 > 0.0 )
    {
      if ( v25 && v26 )
      {
        *(float *)(a3 + 16) = v28;
        *(float *)(a3 + 20) = v30;
      }
      else if ( (float)(v28 - v23) > 0.0000011920929 && (float)(v30 - v24) > 0.0000011920929 )
      {
        return 0;
      }
    }
  }
  v31 = *(_BYTE *)(a1 + 52);
  if ( v31 )
    v32 = (float *)(a1 + 16);
  else
    v32 = (float *)(a1 + 24);
  v33 = (float *)(a1 + 24);
  if ( *v32 > 0.0 && v32[1] > 0.0 )
  {
    if ( v31 )
      v33 = (float *)(a1 + 16);
    v34 = *v33;
    v35 = v33[1];
    if ( v27 && v26 )
    {
      *(float *)(a3 + 24) = v34;
      *(float *)(a3 + 28) = v35;
    }
    else if ( (float)(v34 - (float)(v5 - v14)) > 0.0000011920929 && (float)(v35 - v24) > 0.0000011920929 )
    {
      return 0;
    }
  }
  v36 = *(_BYTE *)(a1 + 52);
  if ( v36 )
    v37 = (float *)(a1 + 16);
  else
    v37 = (float *)(a1 + 32);
  v38 = (float *)(a1 + 32);
  if ( *v37 > 0.0 && v37[1] > 0.0 )
  {
    if ( v36 )
      v38 = (float *)(a1 + 16);
    v39 = *v38;
    v40 = v38[1];
    if ( v27 && v29 )
    {
      *(float *)(a3 + 32) = v39;
      *(float *)(a3 + 36) = v40;
    }
    else if ( (float)(v39 - (float)(v5 - v14)) > 0.0000011920929 && (float)(v40 - (float)(v6 - v18)) > 0.0000011920929 )
    {
      return 0;
    }
  }
  v41 = *(_BYTE *)(a1 + 52);
  if ( v41 )
    v42 = (float *)(a1 + 16);
  else
    v42 = (float *)(a1 + 40);
  v43 = (float *)(a1 + 40);
  if ( *v42 <= 0.0 || v42[1] <= 0.0 )
    return 1;
  if ( v41 )
    v43 = v22;
  v44 = *v43;
  v45 = v43[1];
  if ( !v25 || !v29 )
    return (float)(v44 - v23) <= 0.0000011920929 || (float)(v45 - (float)(v6 - v18)) <= 0.0000011920929;
  *(float *)(a3 + 40) = v44;
  *(float *)(a3 + 44) = v45;
  return 1;
}
