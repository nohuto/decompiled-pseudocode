/*
 * XREFs of sub_140136B1C @ 0x140136B1C
 * Callers:
 *     sub_140134EF8 @ 0x140134EF8 (sub_140134EF8.c)
 * Callees:
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 */

__int64 __fastcall sub_140136B1C(int **a1, int a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v5; // r14d
  int v6; // edi
  __int64 v7; // rbx

  v3 = a3;
  v5 = (int)a1;
  v6 = 1;
  if ( a3 )
  {
    v7 = a3;
  }
  else
  {
    LOBYTE(a3) = 1;
    v7 = 0LL;
  }
  sub_1400859FC(*a1, "EraseBand", a3, 3, v7, 0LL);
  if ( v3 )
    v6 = v7 + 196608;
  return sub_140137E38(v5, a2, v6, 2051, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
}
