/*
 * XREFs of RtlpHpVsContextInitialize @ 0x1800E6DA4
 * Callers:
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpVsCalculateAffinitySlotCount @ 0x1800E71B0 (RtlpHpVsCalculateAffinitySlotCount.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
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
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 i; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // al
  __int16 v21; // r8
  char result; // al

  memset_thunk_772440563353939046((void *)a1, 0, 0x68uLL);
  v13 = *a3;
  *(_BYTE *)(a1 + 3) = a4;
  v14 = a3[1];
  *(_OWORD *)(a1 + 16) = v13;
  *(_QWORD *)(a1 + 8) = a2 ^ a1;
  v15 = a3[2];
  *(_OWORD *)(a1 + 32) = v14;
  *(_QWORD *)&v14 = *((_QWORD *)a3 + 6);
  *(_OWORD *)(a1 + 48) = v15;
  *(_QWORD *)(a1 + 64) = v14;
  *(_BYTE *)(a1 + 4) = *a7;
  if ( a8 )
    *(_WORD *)(a1 + 6) = a8 - a1;
  for ( i = 0LL; i < 4; ++i )
    *(_QWORD *)(a1 + 8 * i + 16) ^= RtlpHpHeapGlobals ^ a1;
  v17 = *(_QWORD *)(a1 + 48);
  if ( v17 )
    *(_QWORD *)(a1 + 48) = a1 ^ RtlpHpHeapGlobals ^ v17;
  v18 = *(_QWORD *)(a1 + 56);
  if ( v18 )
    *(_QWORD *)(a1 + 56) = a1 ^ RtlpHpHeapGlobals ^ v18;
  v19 = *(_QWORD *)(a1 + 64);
  if ( v19 )
    *(_QWORD *)(a1 + 64) = a1 ^ RtlpHpHeapGlobals ^ v19;
  v20 = RtlpHpVsCalculateAffinitySlotCount(a5, v12, 0LL);
  if ( *(_WORD *)(a1 + 6) == v21 || (RtlpHpLfhPerfFlags & 8) == 0 )
    v20 = 1;
  result = v20 - 1;
  *(_BYTE *)(a1 + 2) = result;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 75) |= 1u;
  *(_BYTE *)(a1 + 74) = 16;
  return result;
}
