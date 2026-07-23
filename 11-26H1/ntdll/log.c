/*
 * XREFs of log @ 0x18012ABB0
 * Callers:
 *     <none>
 * Callees:
 *     _handle_error @ 0x180130140 (_handle_error.c)
 */

double __cdecl log(double X)
{
  double v1; // r8
  __int64 v2; // xmm4_8
  double v3; // xmm3_8
  double v4; // xmm2_8
  int v5; // r9d
  __int64 v6; // rdx
  int v7; // r8d
  double v8; // xmm3_8
  __int64 v9; // [rsp+60h] [rbp+8h]

  v1 = X;
  v2 = *(_QWORD *)&X;
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
  {
    if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      X = 0.0;
      handle_error((unsigned int)"log", 26, LODWORD(v1), 1, 0, 33, v2, 0LL, 1);
      return X;
    }
    if ( X < 0.0 )
      goto LABEL_5;
  }
  else if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    if ( X < 0.0 )
    {
LABEL_5:
      X = 0.0;
      handle_error((unsigned int)"log", 26, 0, 1, 8, 33, v2, 0LL, 1);
      return X;
    }
    if ( (unsigned __int64)(*(_QWORD *)&X - 0x3FEE0FAA00000000LL) > 0x2F88200000000LL )
    {
      if ( *(_QWORD *)&X >= 0x10000000000000uLL )
      {
        v5 = 0;
      }
      else
      {
        v5 = 60;
        v1 = COERCE_DOUBLE(*(_QWORD *)&X | 0x3D0000000000000LL) - 2.565335500811485e-290;
      }
      v9 = *(_QWORD *)&v1 & 0xFFFFFFFFFFFFFLL | 0x3FE0000000000000LL;
      v6 = ((*(_QWORD *)&v1 >> 45) & 1) + ((*(_QWORD *)&v1 >> 46) & 0x3F | 0x40);
      v7 = ((*(_QWORD *)&v1 >> 52) & 0x7FF) - v5 - 1023;
      v8 = (*(double *)&v9 - (double)(int)v6 * 0.0078125)
         / ((*(double *)&v9 - (double)(int)v6 * 0.0078125) * 0.5 + (double)(int)v6 * 0.0078125);
      return ((v8 * v8 * 0.002232198107585598 + 0.01249999999781387) * (v8 * v8) + 0.08333333333333336) * (v8 * v8) * v8
           + v8
           + qword_1801848D0[v6]
           + (double)v7 * 0.00000005769999047543285
           + (double)v7 * 0.6931471228599548
           + qword_1801846C0[v6];
    }
    else
    {
      v3 = (X - 1.0) / (X - 1.0 + 2.0);
      v4 = v3 + v3;
      return (((v4 * v4 * 0.0004348877777076146 + 0.002232139987919448) * (v4 * v4) + 0.01250000000377175) * (v4 * v4)
            + 0.08333333333333179)
           * (v4
            * v4
            * v4)
           - v3 * (X - 1.0)
           + X
           - 1.0;
    }
  }
  else
  {
    X = 0.0;
    handle_error((unsigned int)"log", 26, 0, 2, 4, 34, v2, 0LL, 1);
  }
  return X;
}
