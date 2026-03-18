/*
 * XREFs of ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x180181DD8
 * Callers:
 *     ?GetBounds@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180181C90 (-GetBounds@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POIN.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x180182380 (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?Grow@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180182498 (-Grow@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAXXZ @ 0x1801825D4 (-Optimize@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeTreeIterator::Walk<CShapeBoundingContext>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  CSpriteVectorShape *v6; // rbx
  int v7; // r15d
  int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // rax
  const __m128i *v11; // rbx
  __m128 v12; // xmm2
  const __m128i *v13; // r14
  __int64 *v14; // rcx
  unsigned __int64 v15; // xmm0_8
  __int64 v16; // rax
  float *v17; // rax
  __int32 v18; // xmm2_4
  int v19; // ecx
  __int32 v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float *v23; // rax
  float v24; // xmm1_4
  unsigned int v25; // ecx
  float v26; // xmm2_4
  float v27; // xmm2_4
  __m128 v28; // xmm0
  __int64 v29; // rcx
  unsigned int v30; // eax
  int v31; // ebx
  unsigned int v32; // eax
  unsigned int v33; // ebx
  __int64 v34; // rax
  int v35; // r14d
  __int64 v36; // rcx
  int v37; // edx
  int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  float v43; // xmm7_4
  float v44; // xmm6_4
  float v45; // xmm5_4
  int v46; // ecx
  float v47; // xmm4_4
  float v48; // xmm3_4
  float v49; // xmm1_4
  int v50; // eax
  int v51; // eax
  __m128 v53; // [rsp+38h] [rbp-69h] BYREF
  __int128 v54; // [rsp+48h] [rbp-59h]
  __int128 v55; // [rsp+58h] [rbp-49h] BYREF
  __int64 v56; // [rsp+68h] [rbp-39h]
  float v57; // [rsp+70h] [rbp-31h] BYREF
  float v58; // [rsp+74h] [rbp-2Dh]
  __int32 v59; // [rsp+78h] [rbp-29h]
  _DWORD v60[2]; // [rsp+7Ch] [rbp-25h] BYREF
  __int32 v61; // [rsp+84h] [rbp-1Dh]
  __int32 v62; // [rsp+88h] [rbp-19h]
  __int32 v63; // [rsp+8Ch] [rbp-15h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v3 = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  while ( 1 )
  {
LABEL_2:
    v6 = *(CSpriteVectorShape **)(a3 + 8);
    *(_BYTE *)(a3 + 64) = 0;
    if ( !*((_BYTE *)v6 + 96) )
      goto LABEL_13;
    *(_BYTE *)(a3 + 64) = 1;
    if ( (*(unsigned __int8 (__fastcall **)(CSpriteVectorShape *, __int64))(*(_QWORD *)v6 + 64LL))(v6, 138LL) )
    {
      CSpriteVectorShape::ComputeBounds(v6);
      goto LABEL_13;
    }
    *((_WORD *)v6 + 48) = 0;
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 320LL))(*(_QWORD *)(a1 + 8));
    if ( !v7 )
    {
LABEL_13:
      while ( 1 )
      {
        v11 = *(const __m128i **)(a3 + 8);
        v12 = (__m128)_mm_loadu_si128(v11 + 5);
        if ( v11[6].m128i_i8[1] )
        {
          v13 = *(const __m128i **)(a3 + 16);
          v14 = (__int64 *)v11[4].m128i_i64[1];
          if ( *(_BYTE *)(a3 + 64) && v14 )
          {
            if ( v13 )
              v15 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
            else
              v15 = *(_QWORD *)(a3 + 56);
            v53.m128_u64[0] = v15;
            v56 = 0LL;
            v16 = *v14;
            v55 = 0LL;
            (*(void (__fastcall **)(__int64 *, __m128 *, __int128 *))(v16 + 216))(v14, &v53, &v55);
            v17 = &v57;
            v18 = v11[5].m128i_i32[0];
            v19 = 4;
            v20 = v11[5].m128i_i32[2];
            v58 = *(float *)&v11[5].m128i_i32[1];
            *(float *)v60 = v58;
            v61 = v11[5].m128i_i32[3];
            v63 = v61;
            v57 = *(float *)&v18;
            v59 = v20;
            v60[1] = v18;
            v62 = v20;
            do
            {
              v21 = (float)((float)(v17[1] * *((float *)&v55 + 3)) + (float)(*v17 * *((float *)&v55 + 1)))
                  + *((float *)&v56 + 1);
              *v17 = (float)((float)(v17[1] * *((float *)&v55 + 2)) + (float)(*v17 * *(float *)&v55)) + *(float *)&v56;
              v17[1] = v21;
              v17 += 2;
              --v19;
            }
            while ( v19 );
            v22 = v57;
            v23 = (float *)v60;
            v24 = v58;
            v25 = 1;
            *(float *)v11[5].m128i_i32 = v57;
            *(float *)&v11[5].m128i_i32[1] = v24;
            *(float *)&v11[5].m128i_i32[2] = v22;
            *(float *)&v11[5].m128i_i32[3] = v24;
            do
            {
              v26 = *(v23 - 1);
              if ( v22 > v26 )
              {
                *(float *)v11[5].m128i_i32 = v26;
                v22 = v26;
              }
              else if ( v26 > *(float *)&v11[5].m128i_i32[2] )
              {
                *(float *)&v11[5].m128i_i32[2] = v26;
              }
              v27 = *v23;
              if ( v24 > *v23 )
              {
                *(float *)&v11[5].m128i_i32[1] = v27;
                v24 = v27;
              }
              else if ( v27 > *(float *)&v11[5].m128i_i32[3] )
              {
                *(float *)&v11[5].m128i_i32[3] = v27;
              }
              ++v25;
              v23 += 2;
            }
            while ( v25 < 4 );
            v12 = (__m128)_mm_loadu_si128(v11 + 5);
          }
          if ( v13 )
            break;
        }
LABEL_34:
        *(_BYTE *)(a3 + 64) = 1;
        v29 = *(_QWORD *)(a1 + 16);
        if ( v29
          && (*(_DWORD *)(a1 + 28) == 1
           && *(_DWORD *)(a1 + 24) != -1
           && (v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 320LL))(v29),
               v31 = *(_DWORD *)(a1 + 24),
               v31 + 1 < v30)
           || !*(_DWORD *)(a1 + 28) && (v31 = *(_DWORD *)(a1 + 24)) != 0) )
        {
          v32 = v31 - 1;
          v33 = v31 + 1;
          if ( *(_DWORD *)(a1 + 28) != 1 )
            v33 = v32;
          v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 328LL))(*(_QWORD *)(a1 + 16), v33);
          *(_QWORD *)(a1 + 8) = v34;
          v35 = 0;
          *(_DWORD *)(a1 + 24) = v33;
          if ( v34 )
            goto LABEL_2;
        }
        else
        {
          v35 = 1;
        }
        if ( *(_DWORD *)(a1 + 4) )
        {
          v36 = 0LL;
          v53.m128_i32[3] = 0;
          v37 = 0;
          v38 = *(_DWORD *)(a1 + 40);
          if ( v38 )
          {
            v39 = v38 - 1;
            *(_DWORD *)(a1 + 40) = v39;
            v40 = v39;
            v41 = *(_QWORD *)(a1 + 32);
            v40 *= 2LL;
            v37 = *(_DWORD *)(v41 + 8 * v40 + 8);
            v36 = *(_QWORD *)(v41 + 8 * v40);
          }
          v42 = *(_QWORD *)(a1 + 16);
          --*(_DWORD *)(a1 + 4);
          *(_QWORD *)(a1 + 8) = v42;
          *(_QWORD *)(a1 + 16) = v36;
          *(_DWORD *)(a1 + 24) = v37;
          if ( v42 )
            continue;
        }
        goto LABEL_66;
      }
      v28 = (__m128)_mm_loadu_si128(v13 + 5);
      v53 = v28;
      if ( v13[6].m128i_i8[1] )
      {
        v43 = _mm_shuffle_ps(v28, v28, 170).m128_f32[0];
        LODWORD(v44) = _mm_shuffle_ps(v28, v28, 255).m128_u32[0];
        LODWORD(v45) = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
        if ( v43 <= v28.m128_f32[0] || (v46 = 0, v44 <= v45) )
          v46 = 1;
        v47 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
        LODWORD(v48) = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
        LODWORD(v49) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
        if ( v47 <= v12.m128_f32[0] || (v50 = 0, v48 <= v49) )
          v50 = 1;
        if ( v46 )
        {
          if ( v50 )
          {
            v53 = 0uLL;
            goto LABEL_32;
          }
          v53.m128_u64[0] = __PAIR64__(LODWORD(v49), v12.m128_u32[0]);
          v53.m128_f32[2] = v47;
        }
        else
        {
          if ( v50 )
            goto LABEL_33;
          if ( v28.m128_f32[0] > v12.m128_f32[0] )
          {
            v53.m128_i32[0] = v12.m128_i32[0];
            v28 = v53;
          }
          if ( v45 > v49 )
          {
            v53.m128_f32[1] = v49;
            v28 = v53;
          }
          if ( v47 > v43 )
          {
            v53.m128_f32[2] = v47;
            v28 = v53;
          }
          if ( v48 <= v44 )
            goto LABEL_33;
        }
        v53.m128_f32[3] = v48;
      }
      else
      {
        v53.m128_i32[0] = v12.m128_i32[0];
        v53.m128_i32[3] = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
        v53.m128_i32[1] = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
        v53.m128_i32[2] = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
      }
LABEL_32:
      v28 = v53;
LABEL_33:
      v13[6].m128i_i16[0] = 256;
      v13[5] = (const __m128i)v28;
      goto LABEL_34;
    }
    *(_QWORD *)&v54 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v54 + 1) = *(unsigned int *)(a1 + 24);
    if ( *(_DWORD *)(a1 + 40) == *(_DWORD *)(a1 + 44) )
    {
      v51 = CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Grow(a1 + 32);
      v35 = v51;
      if ( v51 < 0 )
        break;
    }
    v8 = 0;
    *(_OWORD *)(*(_QWORD *)(a1 + 32) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 40))++) = v54;
    v9 = *(_DWORD *)(a1 + 52);
    if ( v9 <= *(_DWORD *)(a1 + 40) )
      v9 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 52) = v9;
    if ( *(_DWORD *)(a1 + 28) != 1 )
      v8 = v7 - 1;
    *(_DWORD *)(a1 + 24) = v8;
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 328LL))(*(_QWORD *)(a1 + 8));
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v10;
    if ( !v10 )
      goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)(unsigned int)v51);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x87u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x29u, 0LL);
LABEL_66:
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Optimize();
  if ( v35 < 0 )
    return (unsigned int)v35;
  return v3;
}
