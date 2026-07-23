/*
 * XREFs of MiZeroThreadContending @ 0x1402F6640
 * Callers:
 *     MiFindReductionContendingThread @ 0x1402F5EDC (MiFindReductionContendingThread.c)
 *     MiMoveZeroThreadsToOtherCores @ 0x1402F6570 (MiMoveZeroThreadsToOtherCores.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiZeroThreadContending(__int64 a1)
{
  int v1; // eax
  _DWORD *v3; // rdx
  int v4; // r9d
  unsigned __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rax
  __int64 v10; // r11
  __int128 v11; // [rsp+0h] [rbp-18h]

  v1 = *(_DWORD *)(a1 + 128);
  if ( (v1 & 1) != 0 && (v1 & 2) == 0 )
  {
    v11 = *(_OWORD *)(a1 + 112);
    if ( (_QWORD)v11 )
    {
      v3 = *(_DWORD **)(a1 + 80);
      v4 = 0;
      _BitScanForward64(&v5, v11);
      v6 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * WORD4(v11)].Flink
           + (int)v5);
      v7 = *(_QWORD *)(KiProcessorBlock[v6] + 200) | v11 & *(_QWORD *)(KiProcessorBlock[v6] + 36512);
      while ( v7 )
      {
        v9 = (_QWORD *)KiProcessorBlock[v6];
        v10 = v9[1];
        if ( v10 != v9[3] )
        {
          if ( v10 != *(_QWORD *)(a1 + 72) )
          {
            result = 1LL;
            ++v3[50];
            return result;
          }
          ++v4;
        }
        v7 &= ~v9[25];
        v6 = (unsigned int)(v6 + 1);
      }
      if ( v4 )
        ++v3[51];
      else
        ++v3[49];
    }
  }
  return 0LL;
}
