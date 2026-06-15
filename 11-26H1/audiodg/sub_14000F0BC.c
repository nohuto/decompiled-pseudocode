/*
 * XREFs of sub_14000F0BC @ 0x14000F0BC
 * Callers:
 *     sub_140081FC8 @ 0x140081FC8 (sub_140081FC8.c)
 * Callees:
 *     sub_14000E9A8 @ 0x14000E9A8 (sub_14000E9A8.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 *__fastcall sub_14000F0BC(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *result; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  _QWORD *i; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v10 = sub_14000E9A8((_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 40));
    if ( !v10 )
      sub_14004639C(2147942414LL, v11);
    v12 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = &v10[2 * v12 + 1 + (unsigned int)v12]; v12 >= 0; --v12 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
  result = *(__int64 **)(a1 + 32);
  v9 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v9;
  result[1] = a3;
  *result = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
