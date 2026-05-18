/*
 * XREFs of sub_18006382C @ 0x18006382C
 * Callers:
 *     sub_180067B18 @ 0x180067B18 (sub_180067B18.c)
 *     sub_180067CF0 @ 0x180067CF0 (sub_180067CF0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_18003B5C4 @ 0x18003B5C4 (sub_18003B5C4.c)
 *     sub_1800403B8 @ 0x1800403B8 (sub_1800403B8.c)
 *     sub_18004068C @ 0x18004068C (sub_18004068C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18006382C(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v7; // [rsp+28h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-40h]
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-30h]
  _QWORD v11[5]; // [rsp+48h] [rbp-28h] BYREF

  v4 = *a3;
  if ( !*a3 )
  {
LABEL_12:
    *a2 = 0LL;
    a2[1] = 0LL;
    return a2;
  }
  v5 = sub_180013440(v11, (__int64)&unk_1801C90F8);
  sub_1800403B8(v4, &v9, (__int64)v5);
  if ( !v9 )
  {
LABEL_10:
    if ( v10 )
      sub_180010EC8(v10);
    goto LABEL_12;
  }
  sub_18004068C(v9, &v7);
  if ( !v7 )
  {
    if ( v8 )
      sub_180010EC8(v8);
    goto LABEL_10;
  }
  sub_18003B5C4(v7, v11);
  *a2 = v11[0];
  a2[1] = v11[1];
  if ( v8 )
    sub_180010EC8(v8);
  if ( v10 )
    sub_180010EC8(v10);
  return a2;
}
