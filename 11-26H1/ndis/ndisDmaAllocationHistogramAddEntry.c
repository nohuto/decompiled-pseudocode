/*
 * XREFs of ndisDmaAllocationHistogramAddEntry @ 0x140137510
 * Callers:
 *     ??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ @ 0x1401374E0 (--1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ.c)
 * Callees:
 *     ?IncrementBucket@KHistogram@@AEAAX_K@Z @ 0x140001D38 (-IncrementBucket@KHistogram@@AEAAX_K@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ndisAllocateHistogramEntry @ 0x14013B63C (ndisAllocateHistogramEntry.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisDmaAllocationHistogramAddEntry(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbp
  __int64 v7; // r14
  void *v8; // rcx
  __int64 HistogramEntry; // rsi
  unsigned __int8 v10; // al
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r9
  signed __int32 v20[8]; // [rsp+0h] [rbp-48h] BYREF
  KLockHolder v21; // [rsp+20h] [rbp-28h] BYREF

  v21.m_Lock = &stru_14011E828;
  KeEnterCriticalRegion();
  v21.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&stru_14011E828, 0LL);
  v21.m_State = Exclusive;
  if ( !qword_14011EE68 )
  {
    ExReleasePushLockExclusiveEx(&stru_14011E828, 0LL);
    KeLeaveCriticalRegion();
    return;
  }
  v6 = 0LL;
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = qword_14011EE68;
  if ( *(void **)qword_14011EE68 != qword_14011EE68 )
  {
    HistogramEntry = *(_QWORD *)qword_14011EE68 - 16LL;
    if ( !*((_DWORD *)qword_14011EE68 + 5) )
      goto LABEL_12;
    if ( (unsigned __int64)(*(_QWORD *)HistogramEntry + 600000000LL) >= MEMORY[0xFFFFF78000000008] )
    {
      v4 = 0LL;
      while ( 1 )
      {
        v10 = *(_BYTE *)(a2 + v4++);
        if ( v10 != *(_BYTE *)(HistogramEntry + v4 + 7) )
          break;
        if ( v4 == 6 )
        {
          v11 = 0;
          goto LABEL_11;
        }
      }
      v11 = v10 < *(_BYTE *)(HistogramEntry + v4 + 7) ? -1 : 1;
LABEL_11:
      if ( !v11 )
      {
LABEL_12:
        if ( *(_QWORD *)qword_14011EE68 != 16LL )
          goto LABEL_23;
      }
    }
  }
  if ( *((_DWORD *)qword_14011EE68 + 4) > *((_DWORD *)qword_14011EE68 + 6) )
  {
    v13 = *((_QWORD *)qword_14011EE68 + 1);
    if ( *(void **)v13 != qword_14011EE68 )
      goto LABEL_28;
    v14 = *(_QWORD **)(v13 + 8);
    if ( *v14 != v13 )
      goto LABEL_28;
    *((_QWORD *)qword_14011EE68 + 1) = v14;
    HistogramEntry = v13 - 16;
    *v14 = v8;
    memset(
      (void *)(*(_QWORD *)(HistogramEntry + 32) + 20LL),
      0,
      2LL * *(unsigned int *)(*(_QWORD *)(HistogramEntry + 32) + 16LL));
    _InterlockedOr(v20, 0);
    v12 = (__int64 *)qword_14011EE68;
LABEL_21:
    *(_QWORD *)HistogramEntry = v7;
    *(_DWORD *)(HistogramEntry + 8) = *(_DWORD *)a2;
    *(_WORD *)(HistogramEntry + 12) = *(_WORD *)(a2 + 4);
    v15 = (_QWORD *)(HistogramEntry + 16);
    v16 = *v12;
    if ( *(__int64 **)(*v12 + 8) == v12 )
    {
      *v15 = v16;
      *(_QWORD *)(HistogramEntry + 24) = v12;
      *(_QWORD *)(v16 + 8) = v15;
      *v12 = (__int64)v15;
LABEL_23:
      v17 = *(_QWORD *)(HistogramEntry + 32);
      if ( a1 >= *(_QWORD *)v17 )
      {
        v18 = a1 - *(_QWORD *)v17;
        v19 = *(_QWORD *)(v17 + 8);
        if ( v18 < v19 * (*(_DWORD *)(v17 + 16) - (unsigned int)(*(_QWORD *)v17 != 0LL) - 1) )
          v6 = v18 / v19 + (*(_QWORD *)v17 != 0LL);
        else
          v6 = (unsigned int)(*(_DWORD *)(v17 + 16) - 1);
      }
      KHistogram::IncrementBucket((KHistogram *)v17, v6);
      goto LABEL_16;
    }
LABEL_28:
    __fastfail(3u);
  }
  HistogramEntry = ndisAllocateHistogramEntry(qword_14011EE68, v4, v5);
  if ( HistogramEntry )
  {
    v12 = (__int64 *)qword_14011EE68;
    ++*((_DWORD *)qword_14011EE68 + 4);
    goto LABEL_21;
  }
  _InterlockedIncrement64(&qword_14011EF28);
LABEL_16:
  KLockHolder::~KLockHolder(&v21);
}
