/*
 * XREFs of sub_140011180 @ 0x140011180
 * Callers:
 *     sub_140010BA4 @ 0x140010BA4 (sub_140010BA4.c)
 *     sub_140011EE8 @ 0x140011EE8 (sub_140011EE8.c)
 *     sub_14002D758 @ 0x14002D758 (sub_14002D758.c)
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 *     sub_140043088 @ 0x140043088 (sub_140043088.c)
 *     sub_140069748 @ 0x140069748 (sub_140069748.c)
 *     sub_140069B3C @ 0x140069B3C (sub_140069B3C.c)
 * Callees:
 *     sub_140011318 @ 0x140011318 (sub_140011318.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

_QWORD *__fastcall sub_140011180(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  _QWORD *i; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v9 = sub_140011318(a1 + 24, *(unsigned int *)(a1 + 40), 24LL);
    if ( !v9 )
      sub_14004639C(2147942414LL, v10);
    v11 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = (_QWORD *)(v9 + 8 * (2LL * (unsigned int)v11 + 1 + (unsigned int)v11)); v11 >= 0; --v11 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
  v5 = *(_QWORD **)(a1 + 32);
  v6 = *v5;
  v5[2] = *a2;
  *(_QWORD *)(a1 + 32) = v6;
  v5[1] = v3;
  *v5 = 0LL;
  ++*(_QWORD *)(a1 + 16);
  v7 = *(_QWORD **)(a1 + 8);
  if ( v7 )
    *v7 = v5;
  else
    *(_QWORD *)a1 = v5;
  result = v5;
  *(_QWORD *)(a1 + 8) = v5;
  return result;
}
