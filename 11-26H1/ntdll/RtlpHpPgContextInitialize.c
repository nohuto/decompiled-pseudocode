/*
 * XREFs of RtlpHpPgContextInitialize @ 0x180111F54
 * Callers:
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpPgContextInitialize(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _BYTE *a7)
{
  __int128 v7; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  unsigned __int64 v11; // rax
  signed __int64 v12; // rcx
  unsigned __int64 v13; // rtt
  __int64 i; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 result; // rax

  v7 = *a3;
  v9 = a3[1];
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 8) = v7;
  *(_QWORD *)a1 = a2;
  v10 = a3[2];
  *(_QWORD *)(a1 + 72) = a5 - 0x2000;
  *(_OWORD *)(a1 + 24) = v9;
  *(_QWORD *)(a1 + 64) = a4;
  *(_QWORD *)&v9 = *((_QWORD *)a3 + 6);
  *(_OWORD *)(a1 + 40) = v10;
  *(_QWORD *)(a1 + 56) = v9;
  *(_BYTE *)(a1 + 85) = *a7;
  *(_DWORD *)(a1 + 80) = (unsigned int)(a6 - 2) <= 3;
  v11 = qword_1801C5F00;
  do
  {
    v12 = v11 ^ (v11 >> 12) ^ ((v11 ^ (v11 >> 12)) << 25) ^ ((v11 ^ (v11 >> 12) ^ ((v11 ^ (v11 >> 12)) << 25)) >> 27);
    v13 = v11;
    v11 = _InterlockedCompareExchange64(&qword_1801C5F00, v12, v11);
  }
  while ( v13 != v11 );
  *(_BYTE *)(a1 + 84) = 29 * v12;
  for ( i = 0LL; i < 4; ++i )
    *(_QWORD *)(a1 + 8 * i + 8) ^= a1 ^ RtlpHpHeapGlobals;
  v15 = *(_QWORD *)(a1 + 40);
  if ( v15 )
    *(_QWORD *)(a1 + 40) = a1 ^ RtlpHpHeapGlobals ^ v15;
  v16 = *(_QWORD *)(a1 + 48);
  if ( v16 )
    *(_QWORD *)(a1 + 48) = a1 ^ RtlpHpHeapGlobals ^ v16;
  result = *(_QWORD *)(a1 + 56);
  if ( result )
  {
    result ^= a1 ^ RtlpHpHeapGlobals;
    *(_QWORD *)(a1 + 56) = result;
  }
  return result;
}
