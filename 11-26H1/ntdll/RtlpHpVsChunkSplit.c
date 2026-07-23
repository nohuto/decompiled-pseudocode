/*
 * XREFs of RtlpHpVsChunkSplit @ 0x18005EA34
 * Callers:
 *     RtlpHpVsSlotAllocate @ 0x18005E538 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpVsContextGrowInPlace @ 0x180082330 (RtlpHpVsContextGrowInPlace.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsChunkFree @ 0x18008B490 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsSubsegmentFree @ 0x1800E0704 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1800EB658 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800EC12C (RtlpHpVsFreeChunkRemove.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(
        __int64 a1,
        _RTL_SRWLOCK *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v10; // edx
  unsigned int v11; // r8d
  unsigned __int64 v12; // rax
  int v13; // ecx
  unsigned int v14; // esi
  unsigned int v15; // r15d
  unsigned int v16; // r9d
  int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v27; // [rsp+70h] [rbp+18h]
  unsigned __int64 v28; // [rsp+70h] [rbp+18h]
  __int64 v29; // [rsp+70h] [rbp+18h]
  unsigned int v30; // [rsp+80h] [rbp+28h]

  v27 = a4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a4;
  RtlpHpVsFreeChunkRemove();
  v10 = a5;
  v11 = WORD1(v27) - a5;
  if ( WORD1(v27) != a5 && (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
    v12 = (((a4 + 16LL * a5 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a4 + 16LL * a5)) >> 4;
    v13 = 16 * v12;
    if ( (unsigned int)(16 * v12) >= 0x20 )
    {
      if ( (v13 & 0xFFFFFFC0) == 0 && v13 != 32 )
      {
        v10 = a5 + 1;
        --v11;
      }
    }
    else
    {
      v10 = v12 + a5;
      v11 -= v12;
    }
  }
  v14 = v11 + v10;
  if ( 16 * v11 >= 0x20 )
    v14 = v10;
  v15 = 0;
  if ( 16 * v11 >= 0x20 )
    v15 = v11;
  *(_BYTE *)(a4 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(a4) ^ 1;
  v16 = (unsigned int)(a4 - a3) >> 12;
  *(_DWORD *)(a4 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ a4 ^ v16);
  v17 = 16 * v14 + 32;
  if ( !v15 )
    v17 = 16 * v14;
  v18 = (-1LL << v16) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                 - (unsigned __int8)((unsigned __int64)(unsigned int)(a4 - a3 - 1 + v17) >> 12)));
  v19 = v18 & (*(_QWORD *)(a3 + 16) ^ v18);
  v28 = v19;
  if ( v19 )
  {
    *(_DWORD *)(a4 + 8) |= 0x200u;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 8));
      v19 = v28;
      *(_QWORD *)(a6 + 8) = 0LL;
    }
    v20 = RtlpHpVsSubsegmentCommitPages(a1, a3, v19, __popcnt(v19), 1);
    v21 = 0;
    if ( v20 >= 0 )
      v21 = v14;
    v30 = v21;
    v22 = v15 + v14;
    if ( v20 >= 0 )
      v22 = v15;
    v15 = v22;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      *(_QWORD *)(a6 + 8) = a2 + 1;
      RtlAcquireSRWLockExclusive(a2 + 1);
    }
    *(_DWORD *)(a4 + 8) &= ~0x200u;
    v14 = v30;
  }
  *(_WORD *)(a4 + 2) = WORD1(a4) ^ WORD1(RtlpHpHeapGlobals) ^ v14;
  if ( v15 )
  {
    v23 = a4 + 16LL * v14;
    v29 = 0LL;
    if ( v14 )
      WORD2(v29) = v14;
    else
      WORD2(v29) = WORD2(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v23) ^ WORD2(v23);
    WORD1(v29) = v15;
    BYTE6(v29) = 1;
    *(_QWORD *)v23 = v29 ^ RtlpHpHeapGlobals ^ v23;
    v24 = v23 + 16LL * v15;
    *(_DWORD *)(v23 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v23 ^ ((unsigned int)(v23 - a3) >> 12));
    if ( v24 < a3 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a3 + 32) + 3) )
      *(_WORD *)(v24 + 4) = WORD2(v24) ^ WORD2(RtlpHpHeapGlobals) ^ v15;
    v25 = RtlpHpVsChunkFree(a1, (_DWORD)a2, a3, v23, 0, a6);
    if ( v25 )
    {
      if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 8));
        *(_QWORD *)(a6 + 8) = 0LL;
      }
      RtlpHpVsSubsegmentFree(a1, v25);
      if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      {
        *(_QWORD *)(a6 + 8) = a2 + 1;
        RtlAcquireSRWLockExclusive(a2 + 1);
      }
    }
  }
  return v14;
}
