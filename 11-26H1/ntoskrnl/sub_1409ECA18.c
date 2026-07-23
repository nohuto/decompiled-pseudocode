/*
 * XREFs of sub_1409ECA18 @ 0x1409ECA18
 * Callers:
 *     sub_1409EC6FC @ 0x1409EC6FC (sub_1409EC6FC.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     sub_1409ECABC @ 0x1409ECABC (sub_1409ECABC.c)
 */

__int64 __fastcall sub_1409ECA18(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  unsigned int v7; // edi
  unsigned __int64 v8; // r15

  v3 = 0;
  v6 = 0LL;
  if ( (_DWORD)a2 )
  {
    v7 = (unsigned int)(a2 + 63) >> 6;
    if ( v7 + 1 > 0x400 )
      return (unsigned int)-1073741675;
    v8 = (ExGenRandom(1, a2) & 0x7FFFFFFFuLL) % (1024 - v7);
    v6 = sub_1409ECABC(a1, v8, 1024 - (v7 + 1), v7);
    if ( !v6 )
      v6 = sub_1409ECABC(a1, 0LL, (unsigned int)v8, v7);
  }
  if ( a3 )
    *a3 = v6;
  return v3;
}
