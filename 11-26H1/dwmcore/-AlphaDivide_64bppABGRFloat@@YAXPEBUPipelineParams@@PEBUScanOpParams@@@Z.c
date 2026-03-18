/*
 * XREFs of ?AlphaDivide_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802B61D0
 * Callers:
 *     <none>
 * Callees:
 *     ??BCFloat16@@QEAAMXZ @ 0x1802B0F7C (--BCFloat16@@QEAAMXZ.c)
 */

void __fastcall AlphaDivide_64bppABGRFloat(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // ebx
  __int64 v3; // r10
  float v4; // xmm1_4
  unsigned __int16 *v5; // r9
  float v6; // xmm1_4
  unsigned __int16 *v7; // r9
  __m128i v8; // xmm1
  unsigned __int16 *v9; // r10
  unsigned int v10; // r8d
  unsigned int v11; // edx
  int v12; // r8d
  unsigned __int16 v13; // r8
  int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // r8d
  unsigned int v19; // edx
  int v20; // r8d
  unsigned __int16 v21; // r8
  int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  __m128i v25; // xmm1
  __int16 v26; // r9
  __int64 v27; // r10
  _WORD *v28; // r11
  unsigned int v29; // r8d
  unsigned int v30; // edx
  int v31; // r8d
  __int16 v32; // r8
  int v33; // ecx
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // r8d
  unsigned int v37; // edx
  int v38; // r8d
  unsigned __int16 v39; // r8
  int v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // ecx
  __m128i v43; // xmm1
  __int16 v44; // r9
  __int64 v45; // r10
  __int64 v46; // r11
  unsigned int v47; // r8d
  unsigned int v48; // edx
  int v49; // r8d
  __int16 v50; // r8
  int v51; // ecx
  unsigned int v52; // edx
  unsigned int v53; // ecx
  unsigned int v54; // r8d
  unsigned int v55; // edx
  int v56; // r8d
  unsigned __int16 v57; // r8
  int v58; // ecx
  unsigned int v59; // edx
  unsigned int v60; // ecx
  __m128i v61; // xmm1
  __int64 v62; // r10
  __int64 v63; // r11
  unsigned int v64; // r8d
  unsigned int v65; // edx
  __int16 v66; // r9
  int v67; // r8d
  __int16 v68; // r8
  int v69; // ecx
  unsigned int v70; // edx
  unsigned int v71; // ecx
  unsigned __int16 v72; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int16 v73; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a1 + 2);
  v3 = *((_QWORD *)a2 + 1);
  while ( v2 )
  {
    --v2;
    v4 = *(float *)CFloat16::operator float((unsigned __int16 *)(v3 + 6)).m128i_i32;
    if ( v4 != *(float *)CFloat16::operator float((unsigned __int16 *)&word_1803DD4C4).m128i_i32 )
    {
      v6 = *(float *)CFloat16::operator float(v5).m128i_i32;
      if ( v6 != *(float *)CFloat16::operator float(word_1803DE644).m128i_i32 )
      {
        v8 = (__m128i)LODWORD(FLOAT_1_0);
        *(float *)v8.m128i_i32 = 1.0 / *(float *)CFloat16::operator float(v7).m128i_i32;
        v10 = _mm_cvtsi128_si32(v8);
        v11 = v10 & 0x7FFFFFFF;
        v12 = HIWORD(v10) & 0x8000;
        if ( v11 <= 0x47FFEFFF )
        {
          if ( v11 >= 0x38800000 )
          {
            v16 = v11 + ((v11 >> 13) & 1) - 939520001;
          }
          else
          {
            v14 = 113 - (v11 >> 23);
            if ( v14 >= 24 )
              v15 = 0;
            else
              v15 = (v11 & 0x7FFFFF | 0x800000) >> v14;
            v16 = ((v15 >> 13) & 1) + v15 + 4095;
          }
          v13 = (v16 >> 13) | v12;
        }
        else
        {
          v13 = v12 | 0x7FFF;
        }
        v17 = *v9;
        v72 = v13;
        v18 = _mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)v17));
        v19 = v18 & 0x7FFFFFFF;
        v20 = HIWORD(v18) & 0x8000;
        if ( v19 <= 0x47FFEFFF )
        {
          if ( v19 >= 0x38800000 )
          {
            v24 = v19 + ((v19 >> 13) & 1) - 939520001;
          }
          else
          {
            v22 = 113 - (v19 >> 23);
            if ( v22 >= 24 )
              v23 = 0;
            else
              v23 = (v19 & 0x7FFFFF | 0x800000) >> v22;
            v24 = ((v23 >> 13) & 1) + v23 + 4095;
          }
          v21 = (v24 >> 13) | v20;
        }
        else
        {
          v21 = v20 | 0x7FFF;
        }
        v73 = v21;
        v25 = CFloat16::operator float(&v73);
        *(float *)v25.m128i_i32 = *(float *)v25.m128i_i32 * *(float *)CFloat16::operator float(&v72).m128i_i32;
        v29 = _mm_cvtsi128_si32(v25);
        v30 = v29 & 0x7FFFFFFF;
        v31 = *(_DWORD *)&v26 & HIWORD(v29);
        if ( v30 <= 0x47FFEFFF )
        {
          if ( v30 >= 0x38800000 )
          {
            v35 = v30 + ((v30 >> 13) & 1) - 939520001;
          }
          else
          {
            v33 = 113 - (v30 >> 23);
            if ( v33 >= 24 )
              v34 = 0;
            else
              v34 = (v30 & 0x7FFFFF | 0x800000) >> v33;
            v35 = ((v34 >> 13) & 1) + v34 + 4095;
          }
          v32 = (v35 >> 13) | v31;
        }
        else
        {
          v32 = v31 | 0x7FFF;
        }
        *v28 = v32;
        v36 = _mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)*(unsigned __int16 *)(v27 + 2)));
        v37 = v36 & 0x7FFFFFFF;
        v38 = *(_DWORD *)&v26 & HIWORD(v36);
        if ( v37 <= 0x47FFEFFF )
        {
          if ( v37 >= 0x38800000 )
          {
            v42 = v37 + ((v37 >> 13) & 1) - 939520001;
          }
          else
          {
            v40 = 113 - (v37 >> 23);
            if ( v40 >= 24 )
              v41 = 0;
            else
              v41 = (v37 & 0x7FFFFF | 0x800000) >> v40;
            v42 = ((v41 >> 13) & 1) + v41 + 4095;
          }
          v39 = (v42 >> 13) | v38;
        }
        else
        {
          v39 = v38 | 0x7FFF;
        }
        v73 = v39;
        v43 = CFloat16::operator float(&v73);
        *(float *)v43.m128i_i32 = *(float *)v43.m128i_i32 * *(float *)CFloat16::operator float(&v72).m128i_i32;
        v47 = _mm_cvtsi128_si32(v43);
        v48 = v47 & 0x7FFFFFFF;
        v49 = *(_DWORD *)&v44 & HIWORD(v47);
        if ( v48 <= 0x47FFEFFF )
        {
          if ( v48 >= 0x38800000 )
          {
            v53 = v48 + ((v48 >> 13) & 1) - 939520001;
          }
          else
          {
            v51 = 113 - (v48 >> 23);
            if ( v51 >= 24 )
              v52 = 0;
            else
              v52 = (v48 & 0x7FFFFF | 0x800000) >> v51;
            v53 = ((v52 >> 13) & 1) + v52 + 4095;
          }
          v50 = (v53 >> 13) | v49;
        }
        else
        {
          v50 = v49 | 0x7FFF;
        }
        *(_WORD *)(v46 + 2) = v50;
        v54 = _mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)*(unsigned __int16 *)(v45 + 4)));
        v55 = v54 & 0x7FFFFFFF;
        v56 = *(_DWORD *)&v44 & HIWORD(v54);
        if ( v55 <= 0x47FFEFFF )
        {
          if ( v55 >= 0x38800000 )
          {
            v60 = v55 + ((v55 >> 13) & 1) - 939520001;
          }
          else
          {
            v58 = 113 - (v55 >> 23);
            if ( v58 >= 24 )
              v59 = 0;
            else
              v59 = (v55 & 0x7FFFFF | 0x800000) >> v58;
            v60 = ((v59 >> 13) & 1) + v59 + 4095;
          }
          v57 = (v60 >> 13) | v56;
        }
        else
        {
          v57 = v56 | 0x7FFF;
        }
        v73 = v57;
        v61 = CFloat16::operator float(&v73);
        *(float *)v61.m128i_i32 = *(float *)v61.m128i_i32 * *(float *)CFloat16::operator float(&v72).m128i_i32;
        v64 = _mm_cvtsi128_si32(v61);
        v65 = v64 & 0x7FFFFFFF;
        v67 = *(_DWORD *)&v66 & HIWORD(v64);
        if ( v65 <= 0x47FFEFFF )
        {
          if ( v65 >= 0x38800000 )
          {
            v71 = v65 + ((v65 >> 13) & 1) - 939520001;
          }
          else
          {
            v69 = 113 - (v65 >> 23);
            if ( v69 >= 24 )
              v70 = 0;
            else
              v70 = (v65 & 0x7FFFFF | 0x800000) >> v69;
            v71 = ((v70 >> 13) & 1) + v70 + 4095;
          }
          v68 = (v71 >> 13) | v67;
        }
        else
        {
          v68 = v67 | 0x7FFF;
        }
        *(_WORD *)(v63 + 4) = v68;
        v3 = v62 + 8;
      }
    }
  }
}
