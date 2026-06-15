/*
 * XREFs of sub_140044FC4 @ 0x140044FC4
 * Callers:
 *     sub_140044F9C @ 0x140044F9C (sub_140044F9C.c)
 *     sub_140096BE0 @ 0x140096BE0 (sub_140096BE0.c)
 *     sub_1400970E0 @ 0x1400970E0 (sub_1400970E0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 */

__int64 __fastcall sub_140044FC4(_QWORD *a1)
{
  __int64 *v2; // rdi
  void *v3; // rcx

  *a1 = &off_1400BAB90;
  v2 = a1 + 55;
  a1[1] = &off_1400BABE8;
  a1[53] = &off_1400BAB58;
  a1[54] = off_1400BA988;
  sub_140019444(a1 + 55);
  v3 = (void *)a1[57];
  if ( v3 && v3 != (void *)-1LL )
  {
    CloseHandle(v3);
    a1[57] = 0LL;
  }
  sub_140003238(v2);
  return sub_14004505C(a1);
}
