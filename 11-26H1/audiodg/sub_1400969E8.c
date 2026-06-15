/*
 * XREFs of sub_1400969E8 @ 0x1400969E8
 * Callers:
 *     sub_140096B68 @ 0x140096B68 (sub_140096B68.c)
 *     sub_140096BB8 @ 0x140096BB8 (sub_140096BB8.c)
 *     sub_1400970A0 @ 0x1400970A0 (sub_1400970A0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 */

void __fastcall sub_1400969E8(_QWORD *a1)
{
  __int64 *v2; // rdi
  void *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8

  *a1 = off_1400C0268;
  v2 = a1 + 55;
  a1[1] = &off_1400BABE8;
  a1[53] = off_1400C01A0;
  a1[54] = off_1400BA988;
  sub_140019444(a1 + 55);
  v3 = (void *)a1[57];
  if ( v3 && v3 != (void *)-1LL )
  {
    CloseHandle(v3);
    a1[57] = 0LL;
  }
  sub_140003238(v2);
  sub_140096888((__int64)a1, v4, v5);
}
