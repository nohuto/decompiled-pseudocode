/*
 * XREFs of sub_180012D9C @ 0x180012D9C
 * Callers:
 *     sub_180012C78 @ 0x180012C78 (sub_180012C78.c)
 *     sub_180014130 @ 0x180014130 (sub_180014130.c)
 *     sub_18005F034 @ 0x18005F034 (sub_18005F034.c)
 *     sub_1800872F0 @ 0x1800872F0 (sub_1800872F0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800133CC @ 0x1800133CC (sub_1800133CC.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

_QWORD *__fastcall sub_180012D9C(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  _QWORD *v6; // r14
  bool v7; // r15
  __int64 v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  _QWORD v12[3]; // [rsp+38h] [rbp-30h] BYREF

  sub_18003D718();
  v4 = *(_QWORD **)(a1 + 376);
  v5 = *(_QWORD **)(a1 + 384);
  while ( v4 != v5 )
  {
    v6 = sub_180012C40(v12, v4);
    sub_1800133CC(&v10, v6);
    v7 = v10 != 0;
    if ( v11 )
      sub_180010EC8(v11);
    v8 = v6[1];
    if ( v8 )
      sub_180010EC8(v8);
    if ( v7 )
      break;
    v4 += 2;
  }
  if ( v4 == *(_QWORD **)(a1 + 384) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_1800133CC(a2, v4);
  }
  return a2;
}
