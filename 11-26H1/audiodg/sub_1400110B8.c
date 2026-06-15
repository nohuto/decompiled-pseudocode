/*
 * XREFs of sub_1400110B8 @ 0x1400110B8
 * Callers:
 *     sub_140010BA4 @ 0x140010BA4 (sub_140010BA4.c)
 *     sub_140011068 @ 0x140011068 (sub_140011068.c)
 *     sub_140011A18 @ 0x140011A18 (sub_140011A18.c)
 * Callees:
 *     sub_140011318 @ 0x140011318 (sub_140011318.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

_QWORD *__fastcall sub_1400110B8(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rsi
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD *result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r8d
  _QWORD *i; // rdx

  v3 = *a1;
  if ( !a1[4] )
  {
    v8 = sub_140011318(a1 + 3, *((unsigned int *)a1 + 10), 24LL);
    if ( !v8 )
      sub_14004639C(2147942414LL, v9);
    v10 = *((_DWORD *)a1 + 10) - 1;
    for ( i = (_QWORD *)(v8 + 8 * (2LL * (unsigned int)v10 + 1 + (unsigned int)v10)); v10 >= 0; --v10 )
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
