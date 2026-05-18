/*
 * XREFs of sub_1800536E8 @ 0x1800536E8
 * Callers:
 *     sub_1800534C8 @ 0x1800534C8 (sub_1800534C8.c)
 *     sub_180053D94 @ 0x180053D94 (sub_180053D94.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_1800162FC @ 0x1800162FC (sub_1800162FC.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800536E8(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+48h] [rbp+10h]

  v12 = a2;
  v4 = *a2;
  v11 = *(_DWORD *)(*a2 + 88);
  v5 = sub_180051E20((__int64 *)(a1 + 112), (__int64)&v9, &v11);
  sub_180011F5C((_QWORD *)(*(_QWORD *)v5 + 40LL), a2);
  v6 = (__int64 *)sub_180012BF8(a1 + 96, &v9);
  result = (__int64)sub_1800162FC((_QWORD *)(v4 + 96), v6);
  if ( v10 )
    result = sub_180010EC8(v10);
  v8 = a2[1];
  if ( v8 )
    return sub_180010EC8(v8);
  return result;
}
