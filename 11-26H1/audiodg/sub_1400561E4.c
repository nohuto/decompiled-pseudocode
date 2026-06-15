/*
 * XREFs of sub_1400561E4 @ 0x1400561E4
 * Callers:
 *     sub_140056C60 @ 0x140056C60 (sub_140056C60.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400561E4(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v1 = *(_QWORD *)(*(_QWORD *)a1 + 392LL);
  sub_140019444(&v3);
  sub_1400B6010(v1);
  return sub_140003238(&v3);
}
