/*
 * XREFs of ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ @ 0x180189B6C
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     CanCombineToRegion @ 0x180189B00 (CanCombineToRegion.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall CMILMatrix::Is2DAxisAlignedIntegerPreserving(CMILMatrix *this, __int64 a2, double a3)
{
  char v3; // al
  unsigned int *v4; // rcx
  unsigned int *v5; // r9
  char v6; // dl
  __m128i v7; // xmm3
  int v8; // ecx
  __int32 v9; // xmm5_4
  __m128i v10; // xmm3
  int v11; // ecx
  __m128i v12; // xmm3
  int v13; // ecx
  __m128i v14; // xmm3
  int v15; // ecx
  __m128i v16; // xmm3
  int v17; // ecx
  __m128i v18; // xmm3
  int v19; // ecx
  float v21; // [rsp+58h] [rbp+10h]
  float v22; // [rsp+58h] [rbp+10h]
  float v23; // [rsp+58h] [rbp+10h]
  float v24; // [rsp+58h] [rbp+10h]
  float v25; // [rsp+58h] [rbp+10h]
  float v26; // [rsp+58h] [rbp+10h]

  v3 = CMILMatrix::Is2DAxisAlignedPreserving(this);
  v6 = 0;
  if ( v3 )
  {
    v7 = (__m128i)*v4;
    if ( (_mm_cvtsi128_si32(v7) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)*(float *)v7.m128i_i32 - *(float *)v7.m128i_i32;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
      v8 = (int)*(float *)v7.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
    }
    else
    {
      v21 = *(float *)v7.m128i_i32 + 6291456.25;
      v8 = (int)(LODWORD(v21) << 10) >> 11;
    }
    COERCE_FLOAT(v9 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v7.m128i_i32 - (float)v8) & v9) <= 0.000081380211 )
    {
      v10 = (__m128i)v5[1];
      if ( (_mm_cvtsi128_si32(v10) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)*(float *)v10.m128i_i32 - *(float *)v10.m128i_i32;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
        v11 = (int)*(float *)v10.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
      }
      else
      {
        v22 = *(float *)v10.m128i_i32 + 6291456.25;
        v11 = (int)(LODWORD(v22) << 10) >> 11;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v10.m128i_i32 - (float)v11) & v9) <= 0.000081380211 )
      {
        v12 = (__m128i)v5[4];
        if ( (_mm_cvtsi128_si32(v12) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)v12.m128i_i32 - *(float *)v12.m128i_i32;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
          v13 = (int)*(float *)v12.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
        }
        else
        {
          v23 = *(float *)v12.m128i_i32 + 6291456.25;
          v13 = (int)(LODWORD(v23) << 10) >> 11;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v12.m128i_i32 - (float)v13) & v9) <= 0.000081380211 )
        {
          v14 = (__m128i)v5[5];
          if ( (_mm_cvtsi128_si32(v14) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            *(float *)&a3 = (float)(int)*(float *)v14.m128i_i32 - *(float *)v14.m128i_i32;
            *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
            v15 = (int)*(float *)v14.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
          }
          else
          {
            v24 = *(float *)v14.m128i_i32 + 6291456.25;
            v15 = (int)(LODWORD(v24) << 10) >> 11;
          }
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v14.m128i_i32 - (float)v15) & v9) <= 0.000081380211 )
          {
            v16 = (__m128i)v5[12];
            if ( (_mm_cvtsi128_si32(v16) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              *(float *)&a3 = (float)(int)*(float *)v16.m128i_i32 - *(float *)v16.m128i_i32;
              *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
              v17 = (int)*(float *)v16.m128i_i32 - _mm_cvtsi128_si32(*(__m128i *)&a3);
            }
            else
            {
              v25 = *(float *)v16.m128i_i32 + 6291456.25;
              v17 = (int)(LODWORD(v25) << 10) >> 11;
            }
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v16.m128i_i32 - (float)v17) & v9) <= 0.00390625 )
            {
              v18 = (__m128i)v5[13];
              if ( (_mm_cvtsi128_si32(v18) & 0x7FFFFFFFu) > 0x497FFFF0 )
              {
                *(float *)&a3 = (float)(int)*(float *)v18.m128i_i32 - *(float *)v18.m128i_i32;
                v19 = (int)*(float *)v18.m128i_i32
                    - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)));
              }
              else
              {
                v26 = *(float *)v18.m128i_i32 + 6291456.25;
                v19 = (int)(LODWORD(v26) << 10) >> 11;
              }
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v18.m128i_i32 - (float)v19) & v9) <= 0.00390625 )
                return 1;
            }
          }
        }
      }
    }
  }
  return v6;
}
