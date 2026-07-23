/*
 * XREFs of sin @ 0x18012A460
 * Callers:
 *     <none>
 * Callees:
 *     cos_piby4 @ 0x18012A3B0 (cos_piby4.c)
 *     sin_piby4 @ 0x18012A7E0 (sin_piby4.c)
 *     _controlfp @ 0x18012FFE0 (_controlfp.c)
 *     _handle_error @ 0x180130140 (_handle_error.c)
 *     __remainder_piby2 @ 0x1801302C0 (__remainder_piby2.c)
 */

double __cdecl sin(double X)
{
  int v1; // ecx
  double v2; // xmm6_8
  double v3; // rdi
  unsigned __int64 v4; // rbx
  int v5; // ecx
  double v6; // xmm3_8
  double v7; // xmm2_8
  double v8; // xmm6_8
  unsigned __int64 v9; // rdx
  double v10; // xmm1_8
  double v11; // xmm1_8
  int v12; // ecx
  double v13; // xmm6_8
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  double v18; // [rsp+90h] [rbp+8h] BYREF
  double v19; // [rsp+98h] [rbp+10h] BYREF
  double v20; // [rsp+A0h] [rbp+18h] BYREF
  double v21; // [rsp+A8h] [rbp+20h]

  v19 = 0.0;
  v1 = 0;
  v20 = 0.0;
  v2 = X;
  LODWORD(v18) = 0;
  v21 = X;
  v3 = X;
  v4 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) <= 0x3FE921FB54442D18LL )
  {
    if ( v4 >= 0x3F20000000000000LL )
    {
      sin_piby4();
    }
    else if ( v4 >= 0x3E40000000000000LL )
    {
      return X - X * X * X * 0.1666666666666667;
    }
    else if ( v4 )
    {
      controlfp(0x10u, 0x10u);
    }
    return X;
  }
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
  {
    if ( v4 != *(_QWORD *)&X )
      *(_QWORD *)&v2 = *(_QWORD *)&X ^ _xmm;
    if ( v2 >= 500000.0 )
    {
      _remainder_piby2(0LL, &v19, &v20, &v18);
      X = v19;
      v12 = LODWORD(v18);
      v13 = v20;
    }
    else
    {
      if ( v4 > 0x400F6A7A2955385ELL )
      {
        if ( v4 > 0x401C463ABECCB2BBLL )
        {
          v5 = (int)(v2 * 0.6366197723675814 + 0.5);
        }
        else
        {
          LOBYTE(v1) = v4 > 0x4015FDBBE9BBA775LL;
          v5 = v1 + 3;
        }
      }
      else
      {
        LOBYTE(v1) = v4 > 0x4002D97C7F3321D2LL;
        v5 = v1 + 1;
      }
      v6 = (double)v5;
      v7 = (double)v5 * 6.077100506506192e-11;
      v8 = v2 - (double)v5 * 1.570796326734126;
      v18 = v8;
      v9 = (v4 >> 52) - ((*(_QWORD *)&v8 >> 52) & 0x7FFLL);
      if ( v9 > 0xF )
      {
        v10 = v8;
        v8 = v8 - v6 * 6.077100506303966e-11;
        v7 = v6 * 2.022266248795951e-21 - (v10 - v8 - v6 * 6.077100506303966e-11);
        if ( v9 > 0x30 )
        {
          v11 = v8;
          v8 = v8 - v6 * 2.022266248711166e-21;
          v7 = v6 * 8.4784276603689e-32 - (v11 - v8 - v6 * 2.022266248711166e-21);
        }
      }
      v12 = v5 & 3;
      X = v8 - v7;
      v13 = v8 - (v8 - v7) - v7;
    }
    if ( v4 == *(_QWORD *)&v3 )
    {
      if ( !v12 )
        goto LABEL_37;
      v16 = v12 - 1;
      if ( !v16 )
        return cos_piby4(X, v13);
      v17 = v16 - 1;
      if ( !v17 )
      {
LABEL_36:
        *(_QWORD *)&X = COERCE_UNSIGNED_INT64(((double (*)(void))sin_piby4)()) ^ _xmm;
        return X;
      }
      if ( v17 != 1 )
      {
LABEL_37:
        sin_piby4();
        return X;
      }
    }
    else
    {
      if ( !v12 )
        goto LABEL_36;
      v14 = v12 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            return cos_piby4(X, v13);
          goto LABEL_36;
        }
        goto LABEL_37;
      }
    }
    *(_QWORD *)&X = COERCE_UNSIGNED_INT64(cos_piby4(X, v13)) ^ _xmm;
    return X;
  }
  if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
    handle_error((unsigned int)"sin", 30, LODWORD(X), 1, 0, 33, *(__int64 *)&X, 0LL, 1);
  else
    handle_error((unsigned int)"sin", 30, 0, 1, 8, 33, *(__int64 *)&X, 0LL, 1);
  return X;
}
