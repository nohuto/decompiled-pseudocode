/*
 * XREFs of PpmTranslatePlatformIdleAccounting @ 0x1404237D8
 * Callers:
 *     PpmEventTracePlatformIdleAccounting @ 0x140B440D8 (PpmEventTracePlatformIdleAccounting.c)
 * Callees:
 *     PpmConvertTimeTo @ 0x1404239FC (PpmConvertTimeTo.c)
 */

__int64 __fastcall PpmTranslatePlatformIdleAccounting(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // edx
  _DWORD *v10; // r15
  __int64 v11; // r12
  __int64 v12; // r13

  v3 = 0LL;
  v4 = *(unsigned int *)(a1 + 4);
  *(_DWORD *)a2 = v4;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)a1;
  result = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a2 + 16) = result;
  if ( (_DWORD)v4 )
  {
    v6 = a2 + 40;
    v7 = v4;
    v8 = a1 + 44;
    do
    {
      v9 = *(_DWORD *)(v8 - 4) + *(_DWORD *)v8 + *(_DWORD *)(v8 + 4);
      *(_DWORD *)(v6 - 8) = v9;
      v3 += v9;
      *(_DWORD *)(v6 - 4) = *(_DWORD *)v8;
      *(_DWORD *)v6 = *(_DWORD *)(v8 - 4);
      *(_DWORD *)(v6 + 12) = *(_DWORD *)(v8 + 40);
      *(_QWORD *)(v6 + 16) = PpmConvertTimeTo(*(_QWORD *)(v8 + 28), 1000000LL);
      *(_DWORD *)(v6 + 8) = PpmConvertTimeTo(*(_QWORD *)(v8 + 20), 1000000LL);
      *(_DWORD *)(v6 + 4) = PpmConvertTimeTo(*(_QWORD *)(v8 + 12), 1000000LL);
      v10 = (_DWORD *)(v6 + 40);
      v11 = v8 + 204;
      v12 = 26LL;
      do
      {
        *((_QWORD *)v10 - 1) = PpmConvertTimeTo(*(_QWORD *)(v11 - 8), 1000000LL);
        *v10 = PpmConvertTimeTo(*(_QWORD *)v11, 1000000LL);
        v10[1] = PpmConvertTimeTo(*(_QWORD *)(v11 + 8), 1000000LL);
        v10 += 6;
        result = *(unsigned int *)(v11 + 16);
        v11 += 32LL;
        *(v10 - 4) = result;
        --v12;
      }
      while ( v12 );
      v6 += 664LL;
      v8 += 1032LL;
      --v7;
    }
    while ( v7 );
  }
  *(_QWORD *)(a2 + 8) = v3;
  return result;
}
