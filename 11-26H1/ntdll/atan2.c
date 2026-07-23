/*
 * XREFs of atan2 @ 0x1801295D0
 * Callers:
 *     <none>
 * Callees:
 *     _controlfp @ 0x18012FFE0 (_controlfp.c)
 *     _handle_error @ 0x180130140 (_handle_error.c)
 */

double __cdecl atan2(double Y, double X)
{
  __int64 v2; // r9
  double v3; // r10
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  double v6; // xmm9_8
  int v7; // eax
  double v8; // xmm8_8
  unsigned __int64 v9; // xmm6_8
  __int64 v10; // xmm0_8
  double v11; // xmm0_8
  unsigned __int64 v12; // rcx
  __int64 v13; // xmm0_8
  double v14; // xmm0_8
  double v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rax
  _BOOL8 v20; // r9
  double v21; // xmm0_8
  double v22; // xmm5_8
  double v23; // xmm5_8
  __int64 v24; // rcx
  double v25; // xmm7_8
  double v26; // xmm10_8
  int v27; // kr00_4
  __int64 v28; // rdx
  __int64 v29; // rcx
  double v30; // xmm2_8
  double v31; // xmm3_8
  double v32; // xmm10_8

  v2 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  v3 = Y;
  v4 = (*(_QWORD *)&X >> 52) & 0x7FFLL;
  v5 = *(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFLL;
  v6 = X;
  v7 = ((*(_QWORD *)&Y >> 52) & 0x7FF) - v4;
  v8 = Y;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
  {
    handle_error((unsigned int)"atan2", 16, LODWORD(X), 1, 0, 33, *(__int64 *)&X, *(__int64 *)&Y, 2);
    return Y;
  }
  if ( v5 > 0x7FF0000000000000LL )
  {
    handle_error((unsigned int)"atan2", 16, LODWORD(Y), 1, 0, 33, *(__int64 *)&X, *(__int64 *)&Y, 2);
    return Y;
  }
  if ( !v5 )
  {
    if ( X >= 0.0 )
      return Y;
    v9 = qword_1801C4AA8;
    goto LABEL_50;
  }
  if ( !v2 )
  {
    v9 = qword_1801C4AB0;
    goto LABEL_50;
  }
  if ( (unsigned int)v4 < 0x3FD && ((unsigned __int16)(*(_QWORD *)&Y >> 52) & 0x7FFu) < 0x3FD )
  {
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0 )
    {
      v12 = *(_QWORD *)&X + 0x4000000000000000LL;
    }
    else
    {
      v10 = *(_QWORD *)&X | 0x4010000000000000LL;
      if ( X >= 0.0 )
        v11 = *(double *)&v10 + -4.0;
      else
        v11 = *(double *)&v10 + 4.0;
      *(double *)&v12 = v11;
    }
    if ( (*(_QWORD *)&v3 & 0x7FF0000000000000LL) != 0 )
    {
      *(_QWORD *)&v15 = *(_QWORD *)&v3 + 0x4000000000000000LL;
    }
    else
    {
      v13 = *(_QWORD *)&v3 | 0x4010000000000000LL;
      if ( v3 >= 0.0 )
        v14 = *(double *)&v13 + -4.0;
      else
        v14 = *(double *)&v13 + 4.0;
      v15 = v14;
    }
    v6 = *(double *)&v12;
    v8 = v15;
    v7 = ((*(_QWORD *)&v15 >> 52) & 0x7FF) - ((v12 >> 52) & 0x7FF);
  }
  if ( v7 > 56 )
  {
    v9 = qword_1801C4AB0;
    goto LABEL_50;
  }
  if ( v7 >= -28 || X < 0.0 )
  {
    if ( v7 < -56 && X < 0.0 )
    {
      v9 = qword_1801C4AA8;
      goto LABEL_50;
    }
    if ( v5 == 0x7FF0000000000000LL && v2 == 0x7FF0000000000000LL )
    {
      if ( X >= 0.0 )
        v9 = qword_1801C4AB8;
      else
        v9 = qword_1801C4AC0;
LABEL_50:
      if ( v3 < 0.0 )
        v9 ^= _xmm;
      controlfp(0x10u, 0x10u);
      return *(double *)&v9;
    }
    if ( X < 0.0 )
      *(_QWORD *)&v6 ^= _xmm;
    if ( v3 < 0.0 )
      *(_QWORD *)&v8 ^= _xmm;
    v20 = v8 > v6;
    if ( v8 > v6 )
    {
      v21 = v6;
      v6 = v8;
      v8 = v21;
    }
    v22 = v8 / v6;
    if ( v8 / v6 <= 0.0625 )
    {
      v26 = 0.0;
      if ( v22 >= 0.00000001 )
        v22 = v22
            + (v8
             - COERCE_DOUBLE(*(_QWORD *)&v22 & 0xFFFFFFFF00000000uLL)
             * COERCE_DOUBLE(*(_QWORD *)&v6 & 0xFFFFFFFF00000000uLL)
             - (v6 - COERCE_DOUBLE(*(_QWORD *)&v6 & 0xFFFFFFFF00000000uLL))
             * COERCE_DOUBLE(*(_QWORD *)&v22 & 0xFFFFFFFF00000000uLL)
             - (v22 - COERCE_DOUBLE(*(_QWORD *)&v22 & 0xFFFFFFFF00000000uLL)) * v6)
            / v6
            - (0.3333333333333317
             - (0.1999999999939322
              - (0.1428571356180717 - (0.1111073628351453 - v22 * v22 * 0.09002981028544979) * (v22 * v22))
              * (v22
               * v22))
             * (v22
              * v22))
            * (v22
             * v22
             * v22);
    }
    else
    {
      v23 = v22 * 256.0;
      v24 = (unsigned int)((int)(v23 + 0.5) - 16);
      v25 = qword_180183FF0[v24];
      v26 = qword_180183860[v24];
      v27 = 1023 - ((*(_QWORD *)&v6 >> 52) & 0x7FF);
      v28 = (__int64)(v27 / 2) << 52;
      v29 = (__int64)(v27 - v27 / 2) << 52;
      *(_QWORD *)&v30 = COERCE_UNSIGNED_INT64(COERCE_DOUBLE(v28 + 0x3FF0000000000000LL) * v6 * COERCE_DOUBLE(
                                                                                                 v29
                                                                                               + 0x3FF0000000000000LL)) & 0xFFFFFFFFF8000000uLL;
      v31 = (COERCE_DOUBLE(v28 + 0x3FF0000000000000LL) * v8 * COERCE_DOUBLE(v29 + 0x3FF0000000000000LL)
           - (double)(int)(v23 + 0.5) * 0.00390625 * v30
           - (COERCE_DOUBLE(v28 + 0x3FF0000000000000LL) * v6 * COERCE_DOUBLE(v29 + 0x3FF0000000000000LL) - v30)
           * ((double)(int)(v23 + 0.5)
            * 0.00390625))
          / (COERCE_DOUBLE(v28 + 0x3FF0000000000000LL)
           * v8
           * COERCE_DOUBLE(v29 + 0x3FF0000000000000LL)
           * ((double)(int)(v23 + 0.5)
            * 0.00390625)
           + COERCE_DOUBLE(v28 + 0x3FF0000000000000LL) * v6 * COERCE_DOUBLE(v29 + 0x3FF0000000000000LL));
      v22 = v31 + v25 - (0.333333333332241 - v31 * v31 * 0.1999991803898914) * (v31 * v31) * v31;
    }
    if ( v20 )
    {
      v26 = *(double *)&qword_1801C4AD8 - v26;
      v22 = *(double *)&qword_1801C4AE0 - v22;
    }
    if ( X < 0.0 )
    {
      v26 = *(double *)&qword_1801C4AC8 - v26;
      v22 = *(double *)&qword_1801C4AD0 - v22;
    }
    v32 = v26 + v22;
    if ( v3 < 0.0 )
      *(_QWORD *)&v32 ^= _xmm;
    return v32;
  }
  else
  {
    if ( v7 >= -1074 )
    {
      if ( v7 >= -1022 )
        return v8 / v6;
      v16 = COERCE_UNSIGNED_INT64(1.267650600228229e30 * v8 / v6) & 0xFFFFFFFFFFFFFLL;
      v17 = (COERCE_UNSIGNED_INT64(1.267650600228229e30 * v8 / v6) >> 52) & 0x7FF;
      if ( (unsigned int)v17 <= 0x64 )
      {
        v19 = v16 | 0x10000000000000LL;
        if ( 101 - (int)v17 <= 54 )
          v18 = ((v19 >> (101 - (unsigned __int8)(COERCE_UNSIGNED_INT64(1.267650600228229e30 * v8 / v6) >> 52) - 1)) & 1)
              + (v19 >> (101 - (unsigned __int8)(COERCE_UNSIGNED_INT64(1.267650600228229e30 * v8 / v6) >> 52) - 1) >> 1);
        else
          v18 = 0LL;
      }
      else
      {
        v18 = v16 | ((((COERCE_UNSIGNED_INT64(1.267650600228229e30 * v8 / v6) >> 52) & 0x7FF) - 100) << 52);
      }
      v9 = v18 | COERCE_UNSIGNED_INT64(1.267650600228229e30 * v8 / v6) & 0x8000000000000000uLL;
      if ( (v18 & 0x7FF0000000000000LL) == 0 )
      {
        controlfp(0x12u, 0x12u);
        return *(double *)&v9;
      }
      return *(double *)&v9;
    }
    if ( v3 >= 0.0 )
    {
      controlfp(0x12u, 0x12u);
      return 0.0;
    }
    else
    {
      controlfp(0x12u, 0x12u);
      return DOUBLE_N0_0;
    }
  }
}
