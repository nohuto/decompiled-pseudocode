/*
 * XREFs of sub_1409EA080 @ 0x1409EA080
 * Callers:
 *     sub_1409E8440 @ 0x1409E8440 (sub_1409E8440.c)
 *     sub_1409E8670 @ 0x1409E8670 (sub_1409E8670.c)
 *     sub_1409E9D3C @ 0x1409E9D3C (sub_1409E9D3C.c)
 *     sub_1409E9DA0 @ 0x1409E9DA0 (sub_1409E9DA0.c)
 * Callees:
 *     sub_1409EAA0C @ 0x1409EAA0C (sub_1409EAA0C.c)
 */

__int64 __fastcall sub_1409EA080(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  int *v4; // rbx
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdx

  v3 = 0;
  v4 = (int *)(a2 + 16);
  if ( a3 <= -1 )
    a3 = *v4;
  v7 = *v4;
  if ( a3 > (unsigned int)*v4 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a3 > 0 )
  {
    v8 = (unsigned int)a3;
    do
    {
      v9 = *(_QWORD *)(a2 + 24);
      v10 = 32LL * (unsigned int)(v7 - 1);
      v11 = *(_QWORD *)(v10 + v9);
      if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 80), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        sub_1409EAA0C(a1);
      *(_OWORD *)(v10 + v9) = 0LL;
      *(_OWORD *)(v10 + v9 + 16) = 0LL;
      v7 = --*v4;
      --v8;
    }
    while ( v8 );
  }
  return v3;
}
