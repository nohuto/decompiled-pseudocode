/*
 * XREFs of sub_140907700 @ 0x140907700
 * Callers:
 *     sub_140907938 @ 0x140907938 (sub_140907938.c)
 *     sub_140907BA0 @ 0x140907BA0 (sub_140907BA0.c)
 *     sub_140908B00 @ 0x140908B00 (sub_140908B00.c)
 *     sub_140A014D8 @ 0x140A014D8 (sub_140A014D8.c)
 * Callees:
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     sub_140907850 @ 0x140907850 (sub_140907850.c)
 */

__int64 __fastcall sub_140907700(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  int *v4; // rsi
  int v7; // eax
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdi

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
      v9 = *(_QWORD *)(a2 + 24) + 32LL * (unsigned int)(v7 - 1);
      v10 = *(_QWORD *)v9;
      if ( *(_QWORD *)v9 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 80), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        if ( *(_QWORD *)(v10 + 40) )
        {
          sub_140907850(a1);
          *(_QWORD *)(v10 + 40) = 0LL;
          *(_QWORD *)(v10 + 24) = 0LL;
          *(_QWORD *)(v10 + 32) = 0LL;
          *(_DWORD *)(v10 + 72) = 0;
        }
        SddlpFree(v10);
      }
      *(_OWORD *)v9 = 0LL;
      *(_OWORD *)(v9 + 16) = 0LL;
      v7 = --*v4;
      --v8;
    }
    while ( v8 );
  }
  return v3;
}
