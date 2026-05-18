/*
 * XREFs of sub_18001818C @ 0x18001818C
 * Callers:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_1800BB650 @ 0x1800BB650 (sub_1800BB650.c)
 *     sub_1800BB9A0 @ 0x1800BB9A0 (sub_1800BB9A0.c)
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 *     sub_1800C1B5C @ 0x1800C1B5C (sub_1800C1B5C.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 *     sub_1800C6000 @ 0x1800C6000 (sub_1800C6000.c)
 *     sub_1800C7CA0 @ 0x1800C7CA0 (sub_1800C7CA0.c)
 *     sub_1800CAFCC @ 0x1800CAFCC (sub_1800CAFCC.c)
 *     sub_1800CB160 @ 0x1800CB160 (sub_1800CB160.c)
 *     sub_1800CB8A8 @ 0x1800CB8A8 (sub_1800CB8A8.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 */

_QWORD *__fastcall sub_18001818C(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  sub_1800160E4(a1, (__int64)a2, *a2);
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
    sub_180010EC8(v4);
  return a1;
}
