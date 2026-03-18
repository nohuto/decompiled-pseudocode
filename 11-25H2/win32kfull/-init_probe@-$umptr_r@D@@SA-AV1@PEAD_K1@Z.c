/*
 * XREFs of ?init_probe@?$umptr_r@D@@SA?AV1@PEAD_K1@Z @ 0x140338D2C
 * Callers:
 *     NtGdiDrawEscape @ 0x140339130 (NtGdiDrawEscape.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x14019EDF0 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

_QWORD *__fastcall umptr_r<char>::init_probe(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // r10
  __int64 v5; // r11
  unsigned __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 24) = 0;
  v7 = 0LL;
  if ( (int)ULongLongMult(a3, 1uLL, &v7) >= 0 )
  {
    *v4 = v5;
    v4[1] = a3;
  }
  return v4;
}
