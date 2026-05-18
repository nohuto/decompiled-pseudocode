/*
 * XREFs of sub_180016BD8 @ 0x180016BD8
 * Callers:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_180053D94 @ 0x180053D94 (sub_180053D94.c)
 *     sub_1800C1B5C @ 0x1800C1B5C (sub_1800C1B5C.c)
 *     sub_1800C2320 @ 0x1800C2320 (sub_1800C2320.c)
 *     sub_1800CAFCC @ 0x1800CAFCC (sub_1800CAFCC.c)
 *     sub_1800CB8A8 @ 0x1800CB8A8 (sub_1800CB8A8.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180016C54 @ 0x180016C54 (sub_180016C54.c)
 *     sub_1800291F0 @ 0x1800291F0 (sub_1800291F0.c)
 */

__int64 *__fastcall sub_180016BD8(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180016C54(a1 + 496);
  v4 = *a2;
  v5 = sub_180012BF8(a1 + 8, &v7);
  sub_1800291F0(v4, v5);
  if ( v8 )
    sub_180010EC8(v8);
  return a2;
}
