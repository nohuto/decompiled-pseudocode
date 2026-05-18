/*
 * XREFs of sub_18000FC90 @ 0x18000FC90
 * Callers:
 *     sub_18000EF94 @ 0x18000EF94 (sub_18000EF94.c)
 * Callees:
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 *     sub_180010A58 @ 0x180010A58 (sub_180010A58.c)
 */

_WORD *sub_18000FC90(_WORD *a1, _WORD *a2, _QWORD a3, __int64 a4, ...)
{
  _WORD *v5; // rbx
  int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rax

  v5 = a1;
  if ( (int)sub_180010A58(a1, a2 - a1) < 0 )
  {
    if ( v8 )
      *v5 = 0;
  }
  else
  {
    sub_1800109F8((_DWORD)v5, v8, v6, v6, v7);
  }
  if ( a2 != v5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v5[v9] );
    v5 += v9;
  }
  return v5;
}
