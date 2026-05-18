/*
 * XREFs of sub_1800932E0 @ 0x1800932E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180081364 @ 0x180081364 (sub_180081364.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall sub_1800932E0(__int64 a1, __int64 a2, float a3, float a4, float a5, int a6)
{
  _UNKNOWN **result; // rax
  _QWORD *v7; // rbx
  _QWORD *i; // rdi
  int v9; // [rsp+20h] [rbp-48h]
  _QWORD *v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = *(_QWORD **)(a1 + 128);
  for ( i = *(_QWORD **)(a1 + 136); v7 != i; v7 += 2 )
  {
    sub_180012C40(&v10, v7);
    result = (_UNKNOWN **)sub_180081364(v10, a3, a4, a5, v9, a6);
    if ( v11 )
      result = (_UNKNOWN **)sub_180010EC8(v11);
  }
  return result;
}
