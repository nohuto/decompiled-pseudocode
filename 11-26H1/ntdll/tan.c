/*
 * XREFs of tan @ 0x18012D070
 * Callers:
 *     <none>
 * Callees:
 *     tan_piby4 @ 0x18012D3A0 (tan_piby4.c)
 *     _controlfp @ 0x18012FFE0 (_controlfp.c)
 *     _handle_error @ 0x180130140 (_handle_error.c)
 *     __remainder_piby2 @ 0x1801302C0 (__remainder_piby2.c)
 */

double __cdecl tan(double X)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rcx
  __int64 v3; // r8
  double v4; // xmm6_8
  unsigned __int64 v5; // rbx
  double v6; // xmm3_8
  double v7; // xmm2_8
  double v8; // xmm6_8
  double v9; // xmm1_8
  double v10; // xmm1_8
  int v11; // r8d
  double v12; // [rsp+80h] [rbp+8h] BYREF
  double v13; // [rsp+88h] [rbp+10h] BYREF
  double v14; // [rsp+90h] [rbp+18h] BYREF
  double v15; // [rsp+98h] [rbp+20h]

  v13 = 0.0;
  v3 = 0LL;
  v14 = 0.0;
  v4 = X;
  LODWORD(v12) = 0;
  v15 = X;
  v5 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) <= 0x3FE921FB54442D18LL )
  {
    if ( v5 < 0x3F20000000000000LL )
    {
      if ( v5 >= 0x3E40000000000000LL )
        return X * X * X * 0.3333333333333333 + X;
      if ( v5 )
        controlfp(0x10u, 0x10u);
      return X;
    }
    return tan_piby4(v2, v1, v3);
  }
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
  {
    if ( v5 != *(_QWORD *)&X )
      *(_QWORD *)&v4 = *(_QWORD *)&X ^ _xmm;
    if ( v4 >= 500000.0 )
    {
      _remainder_piby2(0x7FF0000000000000LL, &v13, &v14, &v12);
      LOBYTE(v11) = LOBYTE(v12);
    }
    else
    {
      if ( v5 > 0x400F6A7A2955385ELL )
      {
        if ( v5 > 0x401C463ABECCB2BBLL )
        {
          LODWORD(v3) = (int)(v4 * 0.6366197723675814 + 0.5);
        }
        else
        {
          LOBYTE(v3) = v5 > 0x4015FDBBE9BBA775LL;
          LODWORD(v3) = v3 + 3;
        }
      }
      else
      {
        LOBYTE(v3) = v5 > 0x4002D97C7F3321D2LL;
        LODWORD(v3) = v3 + 1;
      }
      v6 = (double)(int)v3;
      v7 = (double)(int)v3 * 6.077100506506192e-11;
      v8 = v4 - (double)(int)v3 * 1.570796326734126;
      v12 = v8;
      v2 = (v5 >> 52) - ((*(_QWORD *)&v8 >> 52) & 0x7FFLL);
      if ( v2 > 0xF )
      {
        v9 = v8;
        v8 = v8 - v6 * 6.077100506303966e-11;
        v7 = v6 * 2.022266248795951e-21 - (v9 - v8 - v6 * 6.077100506303966e-11);
        if ( v2 > 0x30 )
        {
          v10 = v8;
          v8 = v8 - v6 * 2.022266248711166e-21;
          v7 = v6 * 8.4784276603689e-32 - (v10 - v8 - v6 * 2.022266248711166e-21);
        }
      }
      v11 = v3 & 3;
      LODWORD(v12) = v11;
      v13 = v8 - v7;
      v14 = v8 - (v8 - v7) - v7;
    }
    v3 = v11 & 1;
    if ( v5 != *(_QWORD *)&X )
    {
      *(_QWORD *)&X = COERCE_UNSIGNED_INT64(tan_piby4(v2, v1, v3)) ^ _xmm;
      return X;
    }
    return tan_piby4(v2, v1, v3);
  }
  if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
    handle_error((unsigned int)"tan", 32, LODWORD(X), 1, 0, 33, *(__int64 *)&X, 0LL, 1);
  else
    handle_error((unsigned int)"tan", 32, 0, 1, 8, 33, *(__int64 *)&X, 0LL, 1);
  return X;
}
