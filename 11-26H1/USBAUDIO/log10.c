/*
 * XREFs of log10 @ 0x14001AA60
 * Callers:
 *     USBCntrlGetSetDbLevel @ 0x14003E340 (USBCntrlGetSetDbLevel.c)
 * Callees:
 *     _handle_error @ 0x14001BAE0 (_handle_error.c)
 */

double __cdecl log10(double X)
{
  double v1; // r8
  __int64 v2; // xmm5_8
  double v3; // xmm4_8
  double v4; // xmm2_8
  double v5; // xmm1_8
  double v6; // xmm3_8
  int v7; // r9d
  __int64 v8; // rdx
  double v9; // xmm2_8
  double v10; // xmm0_8

  v1 = X;
  v2 = *(_QWORD *)&X;
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
  {
    if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      X = 0.0;
      handle_error((unsigned int)"log10", 27, LODWORD(v1), 1, 0, 33, v2, 0LL, 1);
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
      handle_error((unsigned int)"log10", 27, 0, 1, 8, 33, v2, 0LL, 1);
      return X;
    }
    if ( (unsigned __int64)(*(_QWORD *)&X - 0x3FEE0FAA00000000LL) > 0x2F88200000000LL )
    {
      if ( *(_QWORD *)&X >= 0x10000000000000uLL )
      {
        v7 = 0;
      }
      else
      {
        v7 = 60;
        v1 = COERCE_DOUBLE(*(_QWORD *)&X | 0x3D0000000000000LL) - 2.565335500811485e-290;
      }
      v8 = ((*(_QWORD *)&v1 >> 45) & 1) + ((*(_QWORD *)&v1 >> 46) & 0x3F | 0x40);
      v9 = (COERCE_DOUBLE(*(_QWORD *)&v1 & 0xFFFFFFFFFFFFFLL | 0x3FE0000000000000LL) - (double)(int)v8 * 0.0078125)
         / ((COERCE_DOUBLE(*(_QWORD *)&v1 & 0xFFFFFFFFFFFFFLL | 0x3FE0000000000000LL) - (double)(int)v8 * 0.0078125)
          * 0.5
          + (double)(int)v8 * 0.0078125);
      v10 = (double)(int)(((*(_QWORD *)&v1 >> 52) & 0x7FF) - v7 - 1023);
      v3 = v10 * 0.6931471228599548 + *(double *)&aOutputbufferCa[8 * v8];
      v6 = ((v9 * v9 * 0.002232198107585598 + 0.01249999999781387) * (v9 * v9) + 0.08333333333333336) * (v9 * v9) * v9
         + v9
         + qword_1400211D0[v8]
         + v10 * 0.00000005769999047543285;
    }
    else
    {
      *(_QWORD *)&v3 = COERCE_UNSIGNED_INT64(X - 1.0) & 0xFFFFFFFF00000000uLL;
      v4 = (X - 1.0) / (X - 1.0 + 2.0);
      v5 = v4 + v4;
      v6 = (((v5 * v5 * 0.0004348877777076146 + 0.002232139987919448) * (v5 * v5) + 0.01250000000377175) * (v5 * v5)
          + 0.08333333333333179)
         * (v5
          * v5
          * v5)
         - v4 * (X - 1.0)
         + X
         - 1.0
         - v3;
    }
    return v6 * 0.0000007349550096401511
         + v3 * 0.0000007349550096401511
         + v6 * 0.4342937469482422
         + v3 * 0.4342937469482422;
  }
  else
  {
    X = 0.0;
    handle_error((unsigned int)"log10", 27, 0, 2, 4, 34, v2, 0LL, 1);
  }
  return X;
}
