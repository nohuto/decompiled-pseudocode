/*
 * XREFs of RtlpHpVsContextInitialize @ 0x18008DBB0
 * Callers:
 *     RtlpHpHeapCreate @ 0x18008DE64 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpVsCalculateAffinitySlotCount @ 0x18008DAF8 (RtlpHpVsCalculateAffinitySlotCount.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpHpVsContextInitialize(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        char a4,
        unsigned int a5,
        int a6,
        _BYTE *a7,
        __int64 a8)
{
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 i; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // al
  __int16 v20; // r8
  char result; // al

  memset_thunk_772440563353939046((void *)a1, 0, 0x68uLL);
  v12 = *a3;
  *(_BYTE *)(a1 + 3) = a4;
  v13 = a3[1];
  *(_OWORD *)(a1 + 16) = v12;
  *(_QWORD *)(a1 + 8) = a2 ^ a1;
  v14 = a3[2];
  *(_OWORD *)(a1 + 32) = v13;
  *(_QWORD *)&v13 = *((_QWORD *)a3 + 6);
  *(_OWORD *)(a1 + 48) = v14;
  *(_QWORD *)(a1 + 64) = v13;
  *(_BYTE *)(a1 + 4) = *a7;
  if ( a8 )
    *(_WORD *)(a1 + 6) = a8 - a1;
  for ( i = 0LL; i < 4; ++i )
    *(_QWORD *)(a1 + 8 * i + 16) ^= RtlpHpHeapGlobals ^ a1;
  v16 = *(_QWORD *)(a1 + 48);
  if ( v16 )
    *(_QWORD *)(a1 + 48) = a1 ^ RtlpHpHeapGlobals ^ v16;
  v17 = *(_QWORD *)(a1 + 56);
  if ( v17 )
    *(_QWORD *)(a1 + 56) = a1 ^ RtlpHpHeapGlobals ^ v17;
  v18 = *(_QWORD *)(a1 + 64);
  if ( v18 )
    *(_QWORD *)(a1 + 64) = a1 ^ RtlpHpHeapGlobals ^ v18;
  v19 = RtlpHpVsCalculateAffinitySlotCount(a5);
  if ( *(_WORD *)(a1 + 6) == v20 || (RtlpHpLfhPerfFlags & 8) == 0 )
    v19 = 1;
  result = v19 - 1;
  *(_BYTE *)(a1 + 2) = result;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 75) |= 1u;
  *(_BYTE *)(a1 + 74) = 16;
  return result;
}
