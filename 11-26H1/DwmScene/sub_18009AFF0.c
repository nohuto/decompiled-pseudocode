/*
 * XREFs of sub_18009AFF0 @ 0x18009AFF0
 * Callers:
 *     sub_180098A64 @ 0x180098A64 (sub_180098A64.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180026804 @ 0x180026804 (sub_180026804.c)
 *     sub_180099318 @ 0x180099318 (sub_180099318.c)
 *     sub_180099374 @ 0x180099374 (sub_180099374.c)
 *     sub_1800994C4 @ 0x1800994C4 (sub_1800994C4.c)
 *     sub_180099564 @ 0x180099564 (sub_180099564.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18009AFF0(__int64 a1)
{
  __int64 *v2; // rax
  char result; // al
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // r8
  __int64 v7; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v9[23]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = (__int64 *)sub_180026804(*(_QWORD *)(a1 + 912), (__int64)v9, 1u);
  sub_180099374(a1 + 352, v2);
  sub_180099318(v9);
  result = sub_1800994C4(a1 + 352);
  if ( result )
  {
    sub_180012C40(&v7, (_QWORD *)(a1 + 896));
    v5 = sub_180012C40(&v8, v4);
    return sub_180099564(a1 + 352, v5, v6);
  }
  return result;
}
