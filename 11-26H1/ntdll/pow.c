/*
 * XREFs of pow @ 0x18012B060
 * Callers:
 *     <none>
 * Callees:
 *     _pow_special @ 0x180131600 (_pow_special.c)
 */

// local variable allocation has failed, the output may be wrong!
double __cdecl pow(double X, double Y)
{
  __int64 v2; // rcx
  __m128i v3; // xmm5
  double v4; // rdx
  double v5; // r8
  double v6; // r8
  double v7; // xmm6_8
  __m128i v8; // xmm2
  double v9; // xmm2_8
  double v10; // xmm1_8
  double v11; // xmm4_8
  double v12; // xmm5_8
  double v13; // xmm7_8
  double v14; // xmm2_8
  double v15; // xmm0_8
  double v16; // xmm1_8
  double v17; // xmm3_8
  double v18; // xmm7_8
  double v19; // xmm0_8
  double v20; // xmm7_8
  double v21; // xmm6_8
  double v22; // xmm3_8
  double v23; // xmm0_8
  double v24; // xmm6_8
  __m128d v25; // xmm7
  __m128i v26; // xmm4
  double v27; // xmm1_8
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rcx
  double v31; // xmm2_8
  unsigned int v32; // r9d
  double v33; // xmm0_8
  double v34; // xmm1_8
  __int64 v35; // rcx
  unsigned int v36; // r11d
  char v37; // cl
  __int64 v38; // r11
  __m128i v39; // xmm2
  __int64 v40; // r11
  signed __int64 v41; // r10
  double v42; // xmm0_8
  double v43; // xmm1_8
  double v44; // xmm3_8
  double v45; // xmm5_8
  double v46; // xmm7_8
  double v47; // xmm2_8
  double v48; // xmm1_8
  double v49; // xmm3_8
  double v50; // xmm2_8
  double v51; // xmm5_8
  double v52; // xmm7_8
  double v53; // xmm4_8
  double v54; // rax
  double v55; // rax
  __int64 v56; // r11
  double v57; // rax
  double v58; // rax
  __int64 v59; // r9
  double v60; // rax
  double v61; // [rsp+40h] [rbp-D8h]
  double v63; // [rsp+60h] [rbp-B8h]
  double v64; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v65; // [rsp+A0h] [rbp-78h]

  v61 = X;
  v4 = X;
  v5 = Y;
  if ( (*(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFLL) == 0 )
    return 1.0;
  if ( Y != 1.0 )
  {
    v64 = 0.0;
    if ( (*(_QWORD *)&X & 0x8000000000000000uLL) != 0x8000000000000000uLL )
    {
      if ( X == 1.0 )
        return X;
      if ( X == 0.0 )
        goto LABEL_62;
      if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
        goto LABEL_69;
      if ( (*(_QWORD *)&Y & 0x7FF0000000000000uLL) <= 0x43E0000000000000LL )
      {
        if ( (*(_QWORD *)&Y & 0x7FF0000000000000uLL) < 0x3C00000000000000LL )
          return Y + 1.0;
LABEL_9:
        v6 = X;
        v7 = _mm_cvtepi32_pd(_mm_sub_epi64(_mm_srli_epi64(*(__m128i *)&X, 0x34u), (__m128i)xmmword_180184EC0)).m128d_f64[0];
        v8 = _mm_and_si128(*(__m128i *)&X, (__m128i)xmmword_180184EB0);
        if ( v7 == -1023.0 )
        {
          v39 = _mm_or_si128(v8, (__m128i)xmmword_180184F10);
          *(double *)v39.m128i_i64 = *(double *)v39.m128i_i64 - 1.0;
          v3.m128i_i64[0] = v39.m128i_i64[0];
          v8 = _mm_and_si128(v39, (__m128i)xmmword_180184EB0);
          v6 = *(double *)v8.m128i_i64;
          *(_QWORD *)&v7 = *(_OWORD *)&_mm_cvtepi32_pd(_mm_sub_epi32(_mm_srli_epi64(v3, 0x34u), (__m128i)xmmword_180184FB0));
        }
        v65 = 2 * (*(_QWORD *)&v6 & 0x80000000000LL) + (*(_QWORD *)&v6 & 0xFF00000000000LL);
        *(_QWORD *)&v5 = v65 >> 44;
        *(_QWORD *)&v9 = _mm_or_si128(v8, (__m128i)xmmword_180184F20).m128i_u64[0];
        *(_QWORD *)&v10 = _mm_or_si128((__m128i)v65, (__m128i)xmmword_180184F20).m128i_u64[0];
        if ( fabs(X - 1.0) < 0.125 )
        {
          v42 = v10;
          v43 = v10 - v9;
          v44 = dbl_180186000[*(_QWORD *)&v5] + dbl_180186810[*(_QWORD *)&v5];
          *(_QWORD *)&v45 = COERCE_UNSIGNED_INT64(v43 * v44) & 0xFFFFFFFFF8000000uLL;
          v46 = (v43 - v45 * v42) * v44;
          v47 = v46 + v45;
          v48 = (0.25 * v47 + 0.3333333333333333) * v47 * (v47 * v47);
          v49 = ((0.1428571428571429 * v47 + 0.1666666666666667) * v47 + 0.2) * v47 * (v47 * v47 * (v47 * v47));
          v50 = v45;
          v51 = v45 * v46 + v46 * v46 * 0.5 + v46;
          v52 = v50;
          v53 = v50 * v50 * 0.5;
          v14 = v50 + v53;
          v16 = 0.00000005769999047543285 * v7 + dbl_1801857F0[*(_QWORD *)&v5] - (v48 + v49 + v52 - v14 + v53 + v51);
          v17 = v16 - v14;
          v15 = dbl_180184FE0[*(_QWORD *)&v5];
        }
        else
        {
          v11 = v10 - v9;
          v12 = v11 * dbl_180186000[*(_QWORD *)&v5];
          v13 = v11 * dbl_180186810[*(_QWORD *)&v5];
          v14 = v12 + v13;
          v15 = dbl_180184FE0[*(_QWORD *)&v5];
          v16 = dbl_1801857F0[*(_QWORD *)&v5]
              + 0.00000005769999047543285 * v7
              - ((0.3333333333333333 * v14 + 0.5) * (v14 * v14)
               + ((0.1666666666666667 * v14 + 0.2) * v14 + 0.25) * (v14 * v14 * (v14 * v14))
               + v13
               + v12
               - v14);
          v17 = v16 - v14;
        }
        v18 = v15 + 0.6931471228599548 * v7;
        *(_QWORD *)&v19 = COERCE_UNSIGNED_INT64(v18 + v17) & 0xFFFFFFFFF8000000uLL;
        v20 = v18 - (v18 + v17) + v17 + v16 - (v14 + v17) + v18 + v17 - v19;
        v21 = v19 * COERCE_DOUBLE(*(_QWORD *)&Y & 0xFFFFFFFFF8000000uLL);
        v22 = (Y - COERCE_DOUBLE(*(_QWORD *)&Y & 0xFFFFFFFFF8000000uLL)) * v20
            + (Y - COERCE_DOUBLE(*(_QWORD *)&Y & 0xFFFFFFFFF8000000uLL)) * v19
            + v20 * COERCE_DOUBLE(*(_QWORD *)&Y & 0xFFFFFFFFF8000000uLL);
        v23 = v21 + v22;
        v24 = v21 - v23 + v22;
        v25 = (__m128d)0x40571547652B82FEuLL;
        v25.m128d_f64[0] = 92.33248261689366 * v23;
        v4 = v23;
        if ( 92.33248261689366 * v23 <= 65536.0 )
        {
          if ( v25.m128d_f64[0] < -68800.0 )
          {
            *(double *)&v38 = v64;
LABEL_86:
            v59 = 7LL;
            if ( (v38 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
              v59 = 9LL;
            X = v61;
            pow_special(v2, *(_QWORD *)&v4, *(_QWORD *)&v5, v59);
            return X;
          }
          v26 = _mm_cvtpd_epi32(v25);
          v27 = _mm_cvtepi32_pd(v26).m128d_f64[0];
          v28 = _mm_cvtsi128_si32(v26);
          v29 = v28 & 0x3F;
          v30 = (unsigned int)((v28 - (int)v29) >> 6);
          v32 = 0;
          if ( (int)v30 <= -1022 )
            v32 = v30;
          v2 = (v30 + 1023) << 52;
          v31 = v23 - 0.01083042426034808 * v27 + v27 * -4.359010638708991e-10 + v24;
          v33 = (0.5 * v31 + 1.0) * v31
              + (0.04166666666666666 * v31 + 0.1666666666666667) * (v31 * v31 * v31)
              + (0.001388888888888889 * v31 + 0.008333333333333333) * (v31 * v31 * (v31 * v31 * v31));
          v34 = dbl_180187110[v29] * v33 + dbl_180187310[v29] * v33 + dbl_180187310[v29] + dbl_180187110[v29];
          if ( *(double *)&v2 != INFINITY )
          {
            v63 = *(double *)&v2;
            if ( v32 )
            {
              v35 = v32;
              v36 = 0;
              if ( v34 >= 1.0 )
                v36 = v32;
              if ( v36 == -1022 )
              {
                *(_QWORD *)&X = COERCE_UNSIGNED_INT64(v34 * v63) | *(_QWORD *)&v64;
              }
              else
              {
                if ( *(__int64 *)&v4 <= (__int64)0xC0874046DFEFD9D0uLL )
                {
                  v37 = v32 + 50;
                  if ( (int)(v32 + 1074) < 0 )
                    v37 = 0;
                  v35 = 1LL << v37;
                }
                X = v61;
                pow_special(v35, *(_QWORD *)&v4, 0LL, 8LL);
              }
            }
            else
            {
              *(_QWORD *)&X = COERCE_UNSIGNED_INT64(v34 * *(double *)&v2) | *(_QWORD *)&v64;
            }
            return X;
          }
          if ( v34 < 1.0 )
          {
            *(_QWORD *)&X = *(_QWORD *)&v34 | 0x7FE0000000000000LL | *(_QWORD *)&v64;
            return X;
          }
        }
        v38 = *(_QWORD *)&v64 | 0x7FF0000000000000LL;
        goto LABEL_86;
      }
      goto LABEL_57;
    }
    if ( (*(_QWORD *)&Y & 0x7FF0000000000000uLL) > 0x43E0000000000000LL )
    {
LABEL_57:
      if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
      {
        if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) != 0 )
        {
          if ( X != -1.0 )
          {
            if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) < 0x3FF0000000000000LL )
            {
              *(double *)&v38 = 0.0;
              if ( Y < 0.0 )
                *(double *)&v38 = INFINITY;
            }
            else
            {
              *(double *)&v38 = 0.0;
              if ( Y >= 0.0 )
                *(double *)&v38 = INFINITY;
            }
            v58 = 0.0;
            if ( (*(_QWORD *)&Y & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
              v58 = Y;
            if ( (*(_QWORD *)&v58 & 0xFFFFFFFFFFFFFLL) == 0 )
            {
              if ( v58 != 0.0 )
                return *(double *)&v38;
              goto LABEL_86;
            }
LABEL_94:
            pow_special(v2, *(_QWORD *)&v4, *(_QWORD *)&Y, 4LL);
            return X;
          }
LABEL_50:
          *(_QWORD *)&v4 = *(_QWORD *)&v64 | 0x3FF0000000000000LL;
          v55 = 0.0;
          if ( (*(_QWORD *)&Y & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
            v55 = Y;
          if ( (*(_QWORD *)&v55 & 0xFFFFFFFFFFFFFLL) == 0 )
          {
            *(_QWORD *)&X = *(_QWORD *)&v64 | 0x3FF0000000000000LL;
            return X;
          }
          goto LABEL_94;
        }
LABEL_62:
        if ( (*(_QWORD *)&Y & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
        {
          if ( Y != -INFINITY )
          {
            if ( (*(_QWORD *)&Y & 0xFFFFFFFFFFFFFLL) == 0 )
              return 0.0;
            goto LABEL_94;
          }
        }
        else if ( Y >= 0.0 )
        {
          return v64;
        }
        pow_special(v2, *(_QWORD *)&X, *(_QWORD *)&Y, 2LL);
        return X;
      }
      goto LABEL_69;
    }
    v40 = *(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFLL;
    v2 = 52LL;
    v41 = ((*(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFuLL) >> 52) - 1023;
    if ( v41 >= 0 )
    {
      v2 = ((*(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFuLL) >> 52) - 1023;
      if ( v41 > 53 )
      {
LABEL_39:
        if ( *(_QWORD *)&X == 0x8000000000000000uLL )
          goto LABEL_62;
        if ( X == -1.0 )
          goto LABEL_50;
        if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
        {
          *(_OWORD *)&X = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_9;
        }
LABEL_69:
        v56 = 0LL;
        if ( Y >= 0.0 )
          v56 = 0x7FF0000000000000LL;
        if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) == 0 )
        {
          v57 = 0.0;
          if ( (*(_QWORD *)&Y & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
            v57 = Y;
          if ( (*(_QWORD *)&v57 & 0xFFFFFFFFFFFFFLL) == 0 )
          {
            *(_QWORD *)&X = v56 | *(_QWORD *)&v64;
            return X;
          }
          goto LABEL_94;
        }
        goto LABEL_90;
      }
      if ( (v40 & (0xFFFFFFFFFFFFFuLL >> ((unsigned __int8)((*(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFuLL) >> 52) + 1))) == 0 )
      {
        if ( (v40 & (0x10000000000000uLL >> ((unsigned __int8)((*(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFuLL) >> 52) + 1))) != 0 )
          v64 = -0.0;
        goto LABEL_39;
      }
    }
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
    {
      if ( *(_QWORD *)&X != 0x8000000000000000uLL )
      {
        pow_special(v2, *(_QWORD *)&X, *(_QWORD *)&Y, 6LL);
        return X;
      }
      goto LABEL_62;
    }
    goto LABEL_69;
  }
  v54 = 0.0;
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
    v54 = X;
  if ( (*(_QWORD *)&v54 & 0xFFFFFFFFFFFFFLL) != 0 )
  {
LABEL_90:
    v60 = 0.0;
    if ( (*(_QWORD *)&Y & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
      v60 = Y;
    if ( (*(_QWORD *)&v60 & 0xFFFFFFFFFFFFFLL) != 0 )
      pow_special(v2, *(_QWORD *)&X, *(_QWORD *)&Y, 5LL);
    else
      pow_special(v2, *(_QWORD *)&X, *(_QWORD *)&Y, 3LL);
  }
  return X;
}
