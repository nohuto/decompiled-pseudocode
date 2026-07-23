/*
 * XREFs of MiReduceZeroingThreads @ 0x1405211AC
 * Callers:
 *     MiScheduleZeroPageThreads @ 0x1402A7444 (MiScheduleZeroPageThreads.c)
 *     MiBackgroundZeroComplete @ 0x14049EACC (MiBackgroundZeroComplete.c)
 * Callees:
 *     MiDecrementZeroEngineThread @ 0x1402F5CAC (MiDecrementZeroEngineThread.c)
 *     MiFindReductionContendingThread @ 0x1402F5EDC (MiFindReductionContendingThread.c)
 *     MiMoveZeroThreadsToOtherCores @ 0x1402F6570 (MiMoveZeroThreadsToOtherCores.c)
 *     MiEngineAffinity @ 0x1402F6724 (MiEngineAffinity.c)
 *     MiActivateBetterZeroEngine @ 0x1404E1264 (MiActivateBetterZeroEngine.c)
 *     MiGetNextEngineType @ 0x14052234C (MiGetNextEngineType.c)
 *     MiStartBackgroundZeroTimer @ 0x1407137F4 (MiStartBackgroundZeroTimer.c)
 */

__int64 __fastcall MiReduceZeroingThreads(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool v3; // zf
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 v9; // rdi
  int v10; // r15d
  __int64 v11; // r8
  unsigned int v12; // r12d
  unsigned int v13; // r10d
  int v14; // r9d
  unsigned int v15; // edi
  __int64 v16; // rbp
  int v17; // eax
  _QWORD *ReductionContendingThread; // r8
  unsigned int v19; // eax
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  int v23; // ebp
  BOOL v24; // r15d
  __int64 v25; // rdi
  int NextEngineType; // esi
  __int64 v27; // [rsp+50h] [rbp+8h]

  v3 = *(_DWORD *)(a1 + 12) == 0;
  *a3 = *(_DWORD *)a1;
  v6 = a1;
  if ( v3 )
  {
    ++*(_DWORD *)(a1 + 212);
    return 9LL;
  }
  v8 = *(_QWORD *)(a1 + 136);
  v9 = *(_QWORD *)(v8 + 48);
  v27 = v9;
  v10 = 0;
  v12 = *((_DWORD *)MiEngineAffinity(a1) + 2);
  v13 = 1;
  if ( v14 )
  {
    if ( a2 )
    {
      if ( (unsigned int)MiActivateBetterZeroEngine(a2) )
        return 5LL;
      v13 = 1;
    }
    v15 = 0;
    if ( v12 )
    {
      v16 = 0LL;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v6 + 88) + v16 + 32) )
        {
          if ( *(_DWORD *)(v6 + 12) <= *(_DWORD *)(v6 + 8) )
          {
            v17 = MiMoveZeroThreadsToOtherCores(v6, v15, v11);
            v13 = 1;
            if ( v17 )
              v10 = 1;
          }
        }
        ++v15;
        v16 += 48LL;
      }
      while ( v15 < v12 );
      if ( v10 )
        return 8LL;
    }
    v9 = v27;
  }
  if ( !a2 )
    return 9LL;
  ReductionContendingThread = 0LL;
  if ( *(_DWORD *)(v6 + 12) <= *(_DWORD *)(v6 + 8) )
  {
    v19 = 0;
    v20 = (_DWORD *)(v8 + 244);
    v21 = 3LL;
    do
    {
      v19 += *v20;
      v20 += 126;
      --v21;
    }
    while ( v21 );
    if ( v19 <= 1 )
      return 9LL;
    v22 = *(_DWORD *)(v9 + 17372);
    v23 = 6;
    v24 = v22 != 1;
    v25 = 0LL;
    NextEngineType = (v22 == 1) + 1;
    while ( 1 )
    {
      if ( ((v13 << NextEngineType) & v23) != 0 )
      {
        v23 &= ~(v13 << NextEngineType);
        v6 = v8 + 504LL * NextEngineType + 232;
        if ( *(_DWORD *)(v6 + 12) )
        {
          if ( !v25 )
            v25 = v8 + 504LL * NextEngineType + 232;
          ReductionContendingThread = MiFindReductionContendingThread(v8 + 504LL * NextEngineType + 232, v13);
          if ( ReductionContendingThread )
            break;
        }
      }
      NextEngineType = MiGetNextEngineType((unsigned int)NextEngineType, v24);
      if ( !v23 )
      {
        v6 = v25;
        if ( !ReductionContendingThread && !v25 )
          v6 = v8 + 232;
        break;
      }
    }
  }
  *a3 = *(_DWORD *)v6;
  if ( ReductionContendingThread )
  {
    ++*(_DWORD *)(v6 + 296);
  }
  else
  {
    ReductionContendingThread = MiFindReductionContendingThread(v6, 1LL);
    if ( ReductionContendingThread )
    {
      ++*(_DWORD *)(v6 + 300);
    }
    else
    {
      ReductionContendingThread = MiFindReductionContendingThread(v6, 0LL);
      if ( !ReductionContendingThread )
        return 9LL;
      ++*(_DWORD *)(v6 + 304);
    }
  }
  if ( (unsigned int)MiDecrementZeroEngineThread((__int64)ReductionContendingThread) )
    MiStartBackgroundZeroTimer(v8);
  return 6LL;
}
