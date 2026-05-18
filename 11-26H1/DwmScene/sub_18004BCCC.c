/*
 * XREFs of sub_18004BCCC @ 0x18004BCCC
 * Callers:
 *     sub_18004CBA4 @ 0x18004CBA4 (sub_18004CBA4.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18005C9D8 @ 0x18005C9D8 (sub_18005C9D8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004BCCC(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // r8
  __int64 v7; // r10
  _QWORD *v8; // rax
  _QWORD v10[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v12[6]; // [rsp+48h] [rbp-30h] BYREF

  v5 = sub_180012C40(&v11, a4);
  v10[0] = *v6;
  v10[1] = v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  v8 = sub_1800181BC(v12, v7);
  return sub_18005C9D8(a1, v8, v10, v5);
}
