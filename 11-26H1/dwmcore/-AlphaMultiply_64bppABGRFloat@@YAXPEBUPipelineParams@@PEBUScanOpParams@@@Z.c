/*
 * XREFs of ?AlphaMultiply_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802B6810
 * Callers:
 *     <none>
 * Callees:
 *     ??BCFloat16@@QEAAMXZ @ 0x1802B0F7C (--BCFloat16@@QEAAMXZ.c)
 */

void __fastcall AlphaMultiply_64bppABGRFloat(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  unsigned __int16 *v2; // r9
  unsigned __int16 *v3; // rbx
  float v4; // xmm1_4
  int v5; // r11d
  float v6; // xmm1_4
  unsigned int v7; // r8d
  unsigned int v8; // edx
  int v9; // r8d
  unsigned __int16 v10; // r8
  int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  __m128i v14; // xmm1
  __int64 v15; // r9
  _WORD *v16; // r10
  unsigned int v17; // r8d
  unsigned int v18; // edx
  int v19; // r8d
  __int16 v20; // r8
  int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  unsigned int v25; // edx
  int v26; // r8d
  unsigned __int16 v27; // r8
  int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // ecx
  __m128i v31; // xmm1
  __int64 v32; // r9
  __int64 v33; // r10
  unsigned int v34; // r8d
  unsigned int v35; // edx
  int v36; // r8d
  __int16 v37; // r8
  int v38; // ecx
  unsigned int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // r8d
  unsigned int v42; // edx
  int v43; // r8d
  unsigned __int16 v44; // r8
  int v45; // ecx
  unsigned int v46; // edx
  __m128i v47; // xmm1
  __int64 v48; // r9
  __int64 v49; // r10
  unsigned int v50; // r8d
  unsigned int v51; // edx
  int v52; // r8d
  __int16 v53; // r8
  int v54; // ecx
  unsigned int v55; // edx
  unsigned int v56; // ecx
  unsigned __int16 v57; // [rsp+40h] [rbp+8h] BYREF

  v2 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  if ( *((_DWORD *)a1 + 2) )
  {
    do
    {
      v3 = v2 + 3;
      v4 = *(float *)CFloat16::operator float(v2 + 3).m128i_i32;
      if ( v4 != *(float *)CFloat16::operator float((unsigned __int16 *)&word_1803DD4C4).m128i_i32 )
      {
        v6 = *(float *)CFloat16::operator float(v3).m128i_i32;
        if ( v6 != *(float *)CFloat16::operator float(word_1803DE644).m128i_i32 )
        {
          v7 = _mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)*v2));
          v8 = v7 & 0x7FFFFFFF;
          v9 = HIWORD(v7) & 0x8000;
          if ( v8 <= 0x47FFEFFF )
          {
            if ( v8 >= 0x38800000 )
            {
              v13 = v8 + ((v8 >> 13) & 1) - 939520001;
            }
            else
            {
              v11 = 113 - (v8 >> 23);
              if ( v11 >= 24 )
                v12 = 0;
              else
                v12 = (v8 & 0x7FFFFF | 0x800000) >> v11;
              v13 = ((v12 >> 13) & 1) + v12 + 4095;
            }
            v10 = (v13 >> 13) | v9;
          }
          else
          {
            v10 = v9 | 0x7FFF;
          }
          v57 = v10;
          v14 = CFloat16::operator float(v3);
          *(float *)v14.m128i_i32 = *(float *)v14.m128i_i32 * *(float *)CFloat16::operator float(&v57).m128i_i32;
          v17 = _mm_cvtsi128_si32(v14);
          v18 = v17 & 0x7FFFFFFF;
          v19 = HIWORD(v17) & 0x8000;
          if ( v18 <= 0x47FFEFFF )
          {
            if ( v18 >= 0x38800000 )
            {
              v23 = v18 + ((v18 >> 13) & 1) - 939520001;
            }
            else
            {
              v21 = 113 - (v18 >> 23);
              if ( v21 >= 24 )
                v22 = 0;
              else
                v22 = (v18 & 0x7FFFFF | 0x800000) >> v21;
              v23 = ((v22 >> 13) & 1) + v22 + 4095;
            }
            v20 = (v23 >> 13) | v19;
          }
          else
          {
            v20 = v19 | 0x7FFF;
          }
          *v16 = v20;
          v24 = _mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)*(unsigned __int16 *)(v15 + 2)));
          v25 = v24 & 0x7FFFFFFF;
          v26 = HIWORD(v24) & 0x8000;
          if ( v25 <= 0x47FFEFFF )
          {
            if ( v25 >= 0x38800000 )
            {
              v30 = v25 + ((v25 >> 13) & 1) - 939520001;
            }
            else
            {
              v28 = 113 - (v25 >> 23);
              if ( v28 >= 24 )
                v29 = 0;
              else
                v29 = (v25 & 0x7FFFFF | 0x800000) >> v28;
              v30 = ((v29 >> 13) & 1) + v29 + 4095;
            }
            v27 = (v30 >> 13) | v26;
          }
          else
          {
            v27 = v26 | 0x7FFF;
          }
          v57 = v27;
          v31 = CFloat16::operator float(v3);
          *(float *)v31.m128i_i32 = *(float *)v31.m128i_i32 * *(float *)CFloat16::operator float(&v57).m128i_i32;
          v34 = _mm_cvtsi128_si32(v31);
          v35 = v34 & 0x7FFFFFFF;
          v36 = HIWORD(v34) & 0x8000;
          if ( v35 <= 0x47FFEFFF )
          {
            if ( v35 >= 0x38800000 )
            {
              v40 = v35 + ((v35 >> 13) & 1) - 939520001;
            }
            else
            {
              v38 = 113 - (v35 >> 23);
              if ( v38 >= 24 )
                v39 = 0;
              else
                v39 = (v35 & 0x7FFFFF | 0x800000) >> v38;
              v40 = ((v39 >> 13) & 1) + v39 + 4095;
            }
            v37 = (v40 >> 13) | v36;
          }
          else
          {
            v37 = v36 | 0x7FFF;
          }
          *(_WORD *)(v33 + 2) = v37;
          v41 = _mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)*(unsigned __int16 *)(v32 + 4)));
          v42 = v41 & 0x7FFFFFFF;
          v43 = HIWORD(v41) & 0x8000;
          if ( v42 <= 0x47FFEFFF )
          {
            if ( v42 >= 0x38800000 )
            {
              v44 = ((((v42 >> 13) & 1) - 939520001 + v42) >> 13) | v43;
            }
            else
            {
              v45 = 113 - (v42 >> 23);
              if ( v45 >= 24 )
                v46 = 0;
              else
                v46 = (v42 & 0x7FFFFF | 0x800000) >> v45;
              v44 = ((((v46 >> 13) & 1) + v46 + 4095) >> 13) | v43;
            }
          }
          else
          {
            v44 = v43 | 0x7FFF;
          }
          v57 = v44;
          v47 = CFloat16::operator float(v3);
          *(float *)v47.m128i_i32 = *(float *)v47.m128i_i32 * *(float *)CFloat16::operator float(&v57).m128i_i32;
          v50 = _mm_cvtsi128_si32(v47);
          v51 = v50 & 0x7FFFFFFF;
          v52 = HIWORD(v50) & 0x8000;
          if ( v51 <= 0x47FFEFFF )
          {
            if ( v51 >= 0x38800000 )
            {
              v56 = v51 + ((v51 >> 13) & 1) - 939520001;
            }
            else
            {
              v54 = 113 - (v51 >> 23);
              if ( v54 >= 24 )
                v55 = 0;
              else
                v55 = (v51 & 0x7FFFFF | 0x800000) >> v54;
              v56 = ((v55 >> 13) & 1) + v55 + 4095;
            }
            v53 = (v56 >> 13) | v52;
          }
          else
          {
            v53 = v52 | 0x7FFF;
          }
          v2 = (unsigned __int16 *)(v48 + 8);
          *(_WORD *)(v49 + 4) = v53;
        }
      }
    }
    while ( v5 );
  }
}
