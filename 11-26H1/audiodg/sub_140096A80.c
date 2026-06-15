/*
 * XREFs of sub_140096A80 @ 0x140096A80
 * Callers:
 *     sub_140096B90 @ 0x140096B90 (sub_140096B90.c)
 *     sub_140096C08 @ 0x140096C08 (sub_140096C08.c)
 *     sub_140097120 @ 0x140097120 (sub_140097120.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 */

void __fastcall sub_140096A80(_QWORD *a1)
{
  __int64 *v2; // rdi
  void *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8

  *a1 = off_1400C0210;
  v2 = a1 + 55;
  a1[1] = off_1400BF628;
  a1[53] = off_1400C01D8;
  a1[54] = off_1400BA988;
  sub_140019444(a1 + 55);
  v3 = (void *)a1[57];
  if ( v3 && v3 != (void *)-1LL )
  {
    CloseHandle(v3);
    a1[57] = 0LL;
  }
  sub_140003238(v2);
  sub_140096938((__int64)a1, v4, v5);
}
