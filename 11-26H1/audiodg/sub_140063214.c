/*
 * XREFs of sub_140063214 @ 0x140063214
 * Callers:
 *     sub_1400634EC @ 0x1400634EC (sub_1400634EC.c)
 *     sub_140063B30 @ 0x140063B30 (sub_140063B30.c)
 *     sub_140063F54 @ 0x140063F54 (sub_140063F54.c)
 * Callees:
 *     sub_140011318 @ 0x140011318 (sub_140011318.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

_QWORD *__fastcall sub_140063214(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rsi
  _QWORD *v5; // rax
  int v6; // r8d
  _QWORD *i; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  _QWORD *result; // rax

  v3 = *a1;
  if ( !a1[4] )
  {
    v5 = sub_140011318(a1 + 3, *((unsigned int *)a1 + 10), 0x18uLL);
    if ( !v5 )
      sub_14004639C(-2147024882);
    v6 = *((_DWORD *)a1 + 10) - 1;
    for ( i = &v5[2 * v6 + 1 + (unsigned int)v6]; v6 >= 0; --v6 )
    {
      *i = a1[4];
      a1[4] = (__int64)i;
      i -= 3;
    }
  }
  v8 = (_QWORD *)a1[4];
  v9 = *v8;
  v8[2] = *a2;
  a1[4] = v9;
  v8[1] = 0LL;
  *v8 = v3;
  ++a1[2];
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = v8;
  else
    a1[1] = (__int64)v8;
  result = v8;
  *a1 = (__int64)v8;
  return result;
}
