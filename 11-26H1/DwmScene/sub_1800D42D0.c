/*
 * XREFs of sub_1800D42D0 @ 0x1800D42D0
 * Callers:
 *     sub_1800D3050 @ 0x1800D3050 (sub_1800D3050.c)
 * Callees:
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_1800251F4 @ 0x1800251F4 (sub_1800251F4.c)
 *     sub_1800563BC @ 0x1800563BC (sub_1800563BC.c)
 *     sub_1800D4010 @ 0x1800D4010 (sub_1800D4010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800D42D0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  _QWORD **v6; // rdi
  _QWORD *i; // rbx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+48h] [rbp+10h]

  v12 = a2;
  v4 = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v5 = *(_QWORD *)(a1 + 80);
  v11 = v5;
  if ( v5 )
  {
    if ( v5 > 0x7FFFFFFFFFFFFFFLL )
      sub_180012A30();
    sub_1800D4010(a2, &v11);
  }
  v6 = *(_QWORD ***)(a1 + 72);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    v8 = (__int64)(i + 2);
    v9 = (_QWORD *)a2[1];
    if ( v9 == (_QWORD *)a2[2] )
    {
      sub_1800563BC(a2, (__int64)v9, v8);
    }
    else
    {
      sub_1800251F4(v4, v9, v8);
      a2[1] += 32LL;
    }
  }
  return a2;
}
