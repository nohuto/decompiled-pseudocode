/*
 * XREFs of sub_14000EAC8 @ 0x14000EAC8
 * Callers:
 *     sub_140008840 @ 0x140008840 (sub_140008840.c)
 *     sub_14000A6C4 @ 0x14000A6C4 (sub_14000A6C4.c)
 *     sub_140082034 @ 0x140082034 (sub_140082034.c)
 * Callees:
 *     sub_14000E9A8 @ 0x14000E9A8 (sub_14000E9A8.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

_QWORD *__fastcall sub_14000EAC8(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rsi
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD *result; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  int v10; // r8d
  _QWORD *i; // rdx

  v3 = *a1;
  if ( !a1[4] )
  {
    v8 = sub_14000E9A8(a1 + 3, *((unsigned int *)a1 + 10));
    if ( !v8 )
      sub_14004639C(2147942414LL, v9);
    v10 = *((_DWORD *)a1 + 10) - 1;
    for ( i = &v8[2 * v10 + 1 + (unsigned int)v10]; v10 >= 0; --v10 )
    {
      *i = a1[4];
      a1[4] = (__int64)i;
      i -= 3;
    }
  }
  v5 = (_QWORD *)a1[4];
  v6 = *v5;
  v5[2] = *a2;
  a1[4] = v6;
  v5[1] = 0LL;
  *v5 = v3;
  ++a1[2];
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = v5;
  else
    a1[1] = (__int64)v5;
  result = v5;
  *a1 = (__int64)v5;
  return result;
}
