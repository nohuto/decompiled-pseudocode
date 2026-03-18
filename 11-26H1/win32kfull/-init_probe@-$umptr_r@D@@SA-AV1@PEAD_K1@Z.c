/*
 * XREFs of ?init_probe@?$umptr_r@D@@SA?AV1@PEAD_K1@Z @ 0x14032A050
 * Callers:
 *     NtGdiDrawEscape @ 0x14032A4C0 (NtGdiDrawEscape.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1401D0450 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall umptr_r<char>::init_probe(__int64 a1, volatile void *a2, unsigned __int64 a3)
{
  ULONG v6; // r11d
  SIZE_T Length; // [rsp+48h] [rbp+20h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 24) = 0;
  Length = 0LL;
  if ( (int)ULongLongMult(a3, 1uLL, &Length) >= 0 )
  {
    ProbeForRead(a2, (unsigned int)Length, v6);
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a3;
  }
  return a1;
}
