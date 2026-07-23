/*
 * XREFs of MiMoveZeroThreadsToOtherCores @ 0x1402F6570
 * Callers:
 *     MiReduceZeroingThreads @ 0x1405211AC (MiReduceZeroingThreads.c)
 * Callees:
 *     MiZeroThreadContending @ 0x1402F6640 (MiZeroThreadContending.c)
 *     MiEngineAffinity @ 0x1402F6724 (MiEngineAffinity.c)
 *     MiGetIdleProcessorCount @ 0x1402F675C (MiGetIdleProcessorCount.c)
 */

__int64 __fastcall MiMoveZeroThreadsToOtherCores(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // ebp
  unsigned int v6; // r12d
  _QWORD **v7; // rdi
  int IdleProcessorCount; // eax
  _QWORD *v9; // rbx
  int v10; // r15d

  v4 = 0;
  v5 = 0;
  v6 = *(_DWORD *)(MiEngineAffinity(a1, a2, a3) + 8);
  if ( v6 )
  {
    v7 = (_QWORD **)(*(_QWORD *)(a1 + 88) + 16LL);
    do
    {
      IdleProcessorCount = MiGetIdleProcessorCount(a1, v5);
      v9 = *v7;
      v10 = IdleProcessorCount;
      while ( v9 != v7 )
      {
        if ( (unsigned int)MiZeroThreadContending(v9 - 22) )
        {
          ++*(_DWORD *)(a1 + 200);
          if ( v10 )
          {
            --v10;
            v4 = 1;
            ++*(_DWORD *)(a1 + 208);
            *(v9 - 8) = 0LL;
          }
        }
        v9 = (_QWORD *)*v9;
      }
      v7 += 6;
      ++v5;
    }
    while ( v5 < v6 );
  }
  return v4;
}
