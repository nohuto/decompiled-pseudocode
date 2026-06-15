/*
 * XREFs of sub_1400103B0 @ 0x1400103B0
 * Callers:
 *     sub_140036240 @ 0x140036240 (sub_140036240.c)
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 * Callees:
 *     sub_140011318 @ 0x140011318 (sub_140011318.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 *__fastcall sub_1400103B0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // r8d
  _QWORD *i; // rdx
  __int64 *result; // rax
  __int64 v12; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v7 = sub_140011318(a1 + 24, *(unsigned int *)(a1 + 40), 24LL);
    if ( !v7 )
      sub_14004639C(2147942414LL, v8);
    v9 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = (_QWORD *)(v7 + 8 * (2LL * (unsigned int)v9 + 1 + (unsigned int)v9)); v9 >= 0; --v9 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
  result = *(__int64 **)(a1 + 32);
  v12 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v12;
  result[1] = 0LL;
  *result = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
