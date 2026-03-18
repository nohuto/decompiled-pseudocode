/*
 * XREFs of sub_1409E22F8 @ 0x1409E22F8
 * Callers:
 *     sub_1409E1544 @ 0x1409E1544 (sub_1409E1544.c)
 * Callees:
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     sub_1409E239C @ 0x1409E239C (sub_1409E239C.c)
 */

__int64 __fastcall sub_1409E22F8(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned int v7; // edi
  unsigned __int64 v8; // r15

  v3 = 0LL;
  v4 = 0;
  if ( a2 )
  {
    v7 = (unsigned int)(a2 + 63) >> 6;
    if ( v7 + 1 > 0x400 )
      return (unsigned int)-1073741675;
    v8 = (ExGenRandom(1) & 0x7FFFFFFFuLL) % (1024 - v7);
    v3 = sub_1409E239C(a1, v8, 1024 - (v7 + 1), v7);
    if ( !v3 )
      v3 = sub_1409E239C(a1, 0LL, (unsigned int)v8, v7);
  }
  if ( a3 )
    *a3 = v3;
  return v4;
}
