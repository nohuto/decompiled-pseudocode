/*
 * XREFs of atan @ 0x180129360
 * Callers:
 *     <none>
 * Callees:
 *     _controlfp @ 0x18012FFE0 (_controlfp.c)
 *     _handle_error @ 0x180130140 (_handle_error.c)
 */

double __cdecl atan(double X)
{
  int v1; // ecx
  double v3; // xmm1_8
  unsigned __int64 v4; // rax
  double result; // xmm0_8
  double v6; // xmm6_8
  double v7; // xmm5_8
  double v8; // xmm6_8
  double v9; // xmm4_8
  double v10; // xmm5_8

  v1 = LODWORD(X);
  v3 = X;
  v4 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)&X != (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) )
    *(_QWORD *)&v3 = *(_QWORD *)&X ^ _xmm;
  if ( v4 <= 0x4003800000000000LL )
  {
    v9 = v3;
    if ( v4 <= 0x3FF3000000000000LL )
    {
      if ( v4 <= 0x3FE6000000000000LL )
      {
        if ( v4 <= 0x3FDC000000000000LL )
        {
          v7 = 0.0;
          v8 = 0.0;
        }
        else
        {
          v7 = DOUBLE_0_4636476090008061;
          v8 = DOUBLE_2_269877745296168eN17;
          v9 = (v3 + v3 - 1.0) / (v3 + 2.0);
        }
      }
      else
      {
        v7 = DOUBLE_0_7853981633974483;
        v8 = DOUBLE_3_061616997868382eN17;
        v9 = (v3 - 1.0) / (v3 + 1.0);
      }
    }
    else
    {
      v7 = DOUBLE_0_9827937232473291;
      v8 = DOUBLE_1_3903311031231eN17;
      v9 = (v3 - 1.5) / (v3 * 1.5 + 1.0);
    }
  }
  else
  {
    if ( v4 > 0x7FF0000000000000LL )
    {
      result = 0.0;
      handle_error((unsigned int)"atan", 15, v1, 1, 0, 33, *(__int64 *)&X, 0LL, 1);
      return result;
    }
    if ( v3 > 4.859383997932765e18 )
    {
      v6 = *(double *)&qword_1801C4AA0;
      if ( *(_QWORD *)&X != v4 )
        *(_QWORD *)&v6 = qword_1801C4AA0 ^ _xmm;
      controlfp(0x10u, 0x10u);
      return v6;
    }
    v7 = DOUBLE_1_570796326794897;
    v8 = DOUBLE_6_123233995736765eN17;
    v9 = -1.0 / v3;
  }
  v10 = v7
      - (((((v9 * v9 * 0.0001423169033423178 + 0.0304455919504853) * (v9 * v9) + 0.2206387807166674) * (v9 * v9)
         + 0.4476772068054975)
        * (v9
         * v9)
        + 0.2682979205325459)
       * (v9
        * v9
        * v9)
       / ((((v9 * v9 * 0.03895258739447422 + 0.4246025942038471) * (v9 * v9) + 1.412542599319589) * (v9 * v9)
         + 1.825967877375071)
        * (v9
         * v9)
        + 0.8048937615976377)
       - v8
       - v9);
  if ( *(_QWORD *)&X != v4 )
    *(_QWORD *)&v10 ^= _xmm;
  return v10;
}
