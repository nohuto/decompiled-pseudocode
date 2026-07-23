/*
 * XREFs of RtlpHpLfhContextInitialize @ 0x1800DC150
 * Callers:
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhContextInitialize(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        __int16 a6)
{
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  signed __int64 v17; // rcx
  unsigned __int64 v18; // rtt
  unsigned __int8 v19; // cl

  memset_thunk_772440563353939046((void *)a1, 0, 0x6C0uLL);
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 73) = a4;
  v10 = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a5;
  v11 = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 24) = v10;
  *(_QWORD *)&v10 = *(_QWORD *)(a5 + 48);
  *(_WORD *)(a1 + 74) = a6 - a1;
  *(_OWORD *)(a1 + 40) = v11;
  v12 = 0LL;
  *(_QWORD *)(a1 + 56) = v10;
  do
    *(_QWORD *)(a1 + 8 * v12++ + 8) ^= RtlpHpHeapGlobals ^ a1;
  while ( v12 < 4 );
  v13 = *(_QWORD *)(a1 + 40);
  if ( v13 )
    *(_QWORD *)(a1 + 40) = a1 ^ RtlpHpHeapGlobals ^ v13;
  v14 = *(_QWORD *)(a1 + 48);
  if ( v14 )
    *(_QWORD *)(a1 + 48) = a1 ^ RtlpHpHeapGlobals ^ v14;
  v15 = *(_QWORD *)(a1 + 56);
  if ( v15 )
    *(_QWORD *)(a1 + 56) = a1 ^ RtlpHpHeapGlobals ^ v15;
  v16 = qword_1801C5F00;
  do
  {
    v17 = v16 ^ (v16 >> 12) ^ ((v16 ^ (v16 >> 12)) << 25) ^ ((v16 ^ (v16 >> 12) ^ ((v16 ^ (v16 >> 12)) << 25)) >> 27);
    v18 = v16;
    v16 = _InterlockedCompareExchange64(&qword_1801C5F00, v17, v16);
  }
  while ( v18 != v16 );
  *(_QWORD *)(a1 + 88) = 0x2545F4914F6CDD1DLL * v17;
  v19 = 64;
  if ( a3 <= 0x40 )
    v19 = a3;
  *(_BYTE *)(a1 + 72) = v19;
  if ( v19 > 1u )
    *(_QWORD *)(a1 + 64) = (char *)&unk_18017BF30
                         + ((unsigned __int64)((64 - v19 + 61) * (62 - (64 - (unsigned int)v19))) >> 1);
  memset64((void *)(a1 + 448), 1uLL, 0x80uLL);
  *(_WORD *)(a1 + 76) = 0;
  *(_BYTE *)(a1 + 82) = 2;
  return RtlpInitializeLfhRandomDataArray(0LL);
}
