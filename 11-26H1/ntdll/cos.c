/*
 * XREFs of cos @ 0x18012A0C0
 * Callers:
 *     <none>
 * Callees:
 *     cos_piby4 @ 0x18012A3B0 (cos_piby4.c)
 *     sin_piby4 @ 0x18012A7E0 (sin_piby4.c)
 *     _controlfp @ 0x18012FFE0 (_controlfp.c)
 *     _handle_error @ 0x180130140 (_handle_error.c)
 *     __remainder_piby2 @ 0x1801302C0 (__remainder_piby2.c)
 */

double __cdecl cos(double X)
{
  int v1; // ecx
  double v2; // xmm2_8
  unsigned __int64 v3; // rdx
  int v4; // ecx
  double v5; // xmm4_8
  double v6; // xmm3_8
  double v7; // xmm2_8
  unsigned __int64 v8; // r8
  double v9; // xmm1_8
  double v10; // xmm1_8
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  double v14; // [rsp+60h] [rbp+8h] BYREF
  double v15; // [rsp+68h] [rbp+10h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  double v17; // [rsp+78h] [rbp+20h]

  v1 = 0;
  v15 = 0.0;
  v16 = 0LL;
  v2 = X;
  LODWORD(v14) = 0;
  v17 = X;
  v3 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x3FE921FB54442D18LL )
  {
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
    {
      if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
        handle_error((unsigned int)"cos", 18, LODWORD(X), 1, 0, 33, *(__int64 *)&X, 0LL, 1);
      else
        handle_error((unsigned int)"cos", 18, 0, 1, 8, 33, *(__int64 *)&X, 0LL, 1);
      return X;
    }
    if ( v3 != *(_QWORD *)&X )
      *(_QWORD *)&v2 = *(_QWORD *)&X ^ _xmm;
    if ( v2 >= 500000.0 )
    {
      _remainder_piby2(0LL, &v15, &v16, &v14);
      X = v15;
      v11 = LODWORD(v14);
    }
    else
    {
      if ( v3 > 0x400F6A7A2955385ELL )
      {
        if ( v3 > 0x401C463ABECCB2BBLL )
        {
          v4 = (int)(v2 * 0.6366197723675814 + 0.5);
        }
        else
        {
          LOBYTE(v1) = v3 > 0x4015FDBBE9BBA775LL;
          v4 = v1 + 3;
        }
      }
      else
      {
        LOBYTE(v1) = v3 > 0x4002D97C7F3321D2LL;
        v4 = v1 + 1;
      }
      v5 = (double)v4;
      v6 = (double)v4 * 6.077100506506192e-11;
      v7 = v2 - (double)v4 * 1.570796326734126;
      v14 = v7;
      v8 = (v3 >> 52) - ((*(_QWORD *)&v7 >> 52) & 0x7FFLL);
      if ( v8 > 0xF )
      {
        v9 = v7;
        v7 = v7 - v5 * 6.077100506303966e-11;
        v6 = v5 * 2.022266248795951e-21 - (v9 - v7 - v5 * 6.077100506303966e-11);
        if ( v8 > 0x30 )
        {
          v10 = v7;
          v7 = v7 - v5 * 2.022266248711166e-21;
          v6 = v5 * 8.4784276603689e-32 - (v10 - v7 - v5 * 2.022266248711166e-21);
        }
      }
      v11 = v4 & 3;
      X = v7 - v6;
    }
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        *(_QWORD *)&X = COERCE_UNSIGNED_INT64(((double (*)(void))sin_piby4)()) ^ _xmm;
        return X;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        *(_QWORD *)&X = COERCE_UNSIGNED_INT64(((double (*)(void))cos_piby4)()) ^ _xmm;
        return X;
      }
      if ( v13 == 1 )
      {
        sin_piby4();
        return X;
      }
    }
LABEL_32:
    cos_piby4();
    return X;
  }
  if ( v3 >= 0x3F20000000000000LL )
    goto LABEL_32;
  if ( v3 >= 0x3E40000000000000LL )
    return 1.0 - X * X * 0.5;
  if ( v3 )
    controlfp(0x10u, 0x10u);
  return DOUBLE_1_0;
}
