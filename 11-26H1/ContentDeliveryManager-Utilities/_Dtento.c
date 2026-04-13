/*
 * XREFs of _Dtento @ 0x18000DBF4
 * Callers:
 *     _Stodx @ 0x1800059B0 (_Stodx.c)
 * Callees:
 *     _LXp_getw @ 0x18000D6D8 (_LXp_getw.c)
 *     _Xp_movx @ 0x18000D768 (_Xp_movx.c)
 *     _Xp_mulx @ 0x18000D99C (_Xp_mulx.c)
 *     _Xp_setw @ 0x18000DAD4 (_Xp_setw.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

double __fastcall Dtento(double *a1, int a2, _DWORD *a3)
{
  int v4; // ebx
  double result; // xmm0_8
  double v7[3]; // [rsp+30h] [rbp-98h] BYREF
  double v8[3]; // [rsp+48h] [rbp-80h] BYREF
  char Src[48]; // [rsp+60h] [rbp-68h] BYREF

  v4 = a2;
  if ( !a2 || *a1 == 0.0 )
    return LXp_getw(a1, 3);
  if ( a2 <= 0 )
  {
    v4 = -a2;
    Xp_movx(v7, 3, &unk_1800E3848);
  }
  else
  {
    Xp_setw((__int64)v7, 3, 10.0);
  }
  while ( 1 )
  {
    if ( (v4 & 1) != 0 )
      Xp_mulx(a1, 3, v7, 3, Src);
    v4 >>= 1;
    if ( !v4 )
      break;
    Xp_movx(v8, 3, v7);
    Xp_mulx(v7, 3, v8, 3, Src);
  }
  result = LXp_getw(a1, 3);
  if ( result == 0.0 || result == Inf._Double || result == COERCE_DOUBLE(*(_QWORD *)&Inf._Double ^ _xmm) )
  {
    *_errno() = 34;
    if ( a3 )
      *a3 |= 1u;
  }
  return result;
}
