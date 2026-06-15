/*
 * XREFs of sub_14006BFEC @ 0x14006BFEC
 * Callers:
 *     sub_14006BD30 @ 0x14006BD30 (sub_14006BD30.c)
 * Callees:
 *     sub_140011318 @ 0x140011318 (sub_140011318.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 *__fastcall sub_14006BFEC(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v6; // rax
  int v7; // r8d
  _QWORD *i; // rdx
  __int64 *result; // rax
  __int64 v10; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v6 = sub_140011318((_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 40), 0x18uLL);
    if ( !v6 )
      sub_14004639C(-2147024882);
    v7 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = &v6[2 * v7 + 1 + (unsigned int)v7]; v7 >= 0; --v7 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
  result = *(__int64 **)(a1 + 32);
  v10 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v10;
  result[1] = a3;
  *result = 0LL;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
