/*
 * XREFs of RtlpHpVsChunkSplit @ 0x14024D340
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x14024B710 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsSlotAllocate @ 0x14024BEE0 (RtlpHpVsSlotAllocate.c)
 * Callees:
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14027C8A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14027DED0 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpVsChunkFree @ 0x140355330 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsSubsegmentFree @ 0x140355D68 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14037AAF0 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14047F8C8 (RtlpHpVsSubsegmentCommitPages.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int64 v8; // rbx
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned __int64 v13; // rax
  int v14; // ecx
  unsigned int v15; // ebx
  unsigned int v16; // ebp
  unsigned int v17; // r9d
  int v18; // eax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r12
  int v21; // ecx
  unsigned int v22; // r12d
  unsigned int v23; // eax
  __int64 v24; // r9
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v28; // [rsp+70h] [rbp+18h]

  v8 = a4 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)a4;
  RtlpHpVsFreeChunkRemove();
  v11 = a5;
  v8 >>= 16;
  v12 = (unsigned __int16)v8 - a5;
  if ( (unsigned __int16)v8 != a5 && (a1[4] & 1) != 0 )
  {
    v13 = (((a4 + 16LL * a5 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a4 + 16LL * a5)) >> 4;
    v14 = 16 * v13;
    if ( (unsigned int)(16 * v13) >= 0x20 )
    {
      if ( (v14 & 0xFFFFFFC0) == 0 && v14 != 32 )
      {
        v11 = a5 + 1;
        --v12;
      }
    }
    else
    {
      v11 = v13 + a5;
      v12 -= v13;
    }
  }
  v15 = v12 + v11;
  if ( 16 * v12 >= 0x20 )
    v15 = v11;
  v16 = 0;
  if ( 16 * v12 >= 0x20 )
    v16 = v12;
  *(_BYTE *)(a4 + 6) = BYTE2(PspTlsContext.Timer.Period) ^ BYTE6(a4) ^ 1;
  v17 = (unsigned int)(a4 - a3) >> 12;
  *(_DWORD *)(a4 + 8) = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ a4 ^ v17);
  v18 = 16 * v15 + 32;
  if ( !v16 )
    v18 = 16 * v15;
  v19 = (-1LL << v17) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                 - (unsigned __int8)((unsigned __int64)(unsigned int)(a4 - a3 - 1 + v18) >> 12)));
  v20 = v19 & (*(_QWORD *)(a3 + 16) ^ v19);
  if ( v20 )
  {
    *(_DWORD *)(a4 + 8) |= 0x200u;
    if ( (a1[5] & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(a1[3], a6);
    v21 = RtlpHpVsSubsegmentCommitPages((_DWORD)a1, a3, v20, __popcnt(v20), 1);
    v22 = 0;
    v23 = v15 + v16;
    if ( v21 >= 0 )
    {
      v22 = v15;
      v23 = v16;
    }
    v16 = v23;
    if ( (a1[5] & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive(a2 + 8, a1[3], a6);
    *(_DWORD *)(a4 + 8) &= ~0x200u;
    v15 = v22;
  }
  *(_WORD *)(a4 + 2) = WORD1(a4) ^ *(_WORD *)&PspTlsContext.Timer.TimerType ^ v15;
  if ( v16 )
  {
    v24 = a4 + 16LL * v15;
    v28 = 0LL;
    if ( v15 )
      WORD2(v28) = v15;
    else
      WORD2(v28) = LOWORD(PspTlsContext.Timer.Period) ^ HIDWORD(*(_QWORD *)v24) ^ WORD2(v24);
    WORD1(v28) = v16;
    BYTE6(v28) = 1;
    *(_QWORD *)v24 = v28 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ v24;
    v25 = v24 + 16LL * v16;
    *(_DWORD *)(v24 + 8) = (unsigned __int8)(LOBYTE(PspTlsContext.Timer.Processor) ^ v24 ^ ((unsigned int)(v24 - a3) >> 12));
    if ( v25 < a3 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a3 + 32) + 3) )
      *(_WORD *)(v25 + 4) = WORD2(v25) ^ LOWORD(PspTlsContext.Timer.Period) ^ v16;
    v26 = RtlpHpVsChunkFree((_DWORD)a1, a2, a3, v24, 0, a6);
    if ( v26 )
    {
      if ( (a1[5] & 1) == 0 )
        RtlpHpReleaseQueuedLockExclusive(a1[3], a6);
      RtlpHpVsSubsegmentFree(a1, v26);
      if ( (a1[5] & 1) == 0 )
        RtlpHpAcquireQueuedLockExclusive(a2 + 8, a1[3], a6);
    }
  }
  return v15;
}
