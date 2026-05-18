/*
 * XREFs of sub_18009A468 @ 0x18009A468
 * Callers:
 *     sub_18009888C @ 0x18009888C (sub_18009888C.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180026804 @ 0x180026804 (sub_180026804.c)
 *     sub_180099318 @ 0x180099318 (sub_180099318.c)
 *     sub_180099374 @ 0x180099374 (sub_180099374.c)
 *     sub_1800994C4 @ 0x1800994C4 (sub_1800994C4.c)
 *     sub_180099564 @ 0x180099564 (sub_180099564.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18009A468(__int64 a1)
{
  __int64 *v2; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // r8
  char result; // al
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // r8
  _QWORD v13[2]; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v15[22]; // [rsp+48h] [rbp-59h] BYREF

  v2 = (__int64 *)sub_180026804(*(_QWORD *)(a1 + 912), (__int64)v15, 1u);
  sub_180099374(a1 + 528, v2);
  sub_180099318(v15);
  if ( sub_1800994C4(a1 + 528) )
  {
    sub_180012C40(v13, (_QWORD *)(a1 + 896));
    v4 = sub_180012C40(v14, v3);
    sub_180099564(a1 + 528, v4, v5);
  }
  if ( sub_1800994C4(a1 + 704) )
  {
    sub_180012C40(v14, (_QWORD *)(a1 + 896));
    v7 = sub_180012C40(v13, v6);
    sub_180099564(a1 + 704, v7, v8);
  }
  result = sub_1800994C4(a1);
  if ( result )
  {
    sub_180012C40(v14, (_QWORD *)(a1 + 896));
    v11 = sub_180012C40(v13, v10);
    result = sub_180099564(a1, v11, v12);
  }
  *(_DWORD *)(a1 + 920) = 2;
  return result;
}
