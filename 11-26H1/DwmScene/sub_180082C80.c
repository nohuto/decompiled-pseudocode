/*
 * XREFs of sub_180082C80 @ 0x180082C80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_1800291F0 @ 0x1800291F0 (sub_1800291F0.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180082C80(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v8[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  sub_180082B30((__int64 *)(a3 + 496), v8);
  v5 = v8[0];
  v6 = (_QWORD *)sub_180012BF8(a3 + 8, &v9);
  sub_1800291F0(v5, v6);
  if ( v10 )
    sub_180010EC8(v10);
  *a2 = v8[0];
  a2[1] = v8[1];
  return a2;
}
