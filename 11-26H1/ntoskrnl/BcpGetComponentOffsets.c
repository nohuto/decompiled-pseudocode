/*
 * XREFs of BcpGetComponentOffsets @ 0x140717990
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x1407180B4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BcpDisplayProgress @ 0x140717534 (BcpDisplayProgress.c)
 *     BcpSetCursorPosition @ 0x140717E1C (BcpSetCursorPosition.c)
 */

__int64 __fastcall BcpGetComponentOffsets(unsigned int *a1, _DWORD *a2, int *a3, int a4, int a5, char a6)
{
  int v7; // edi
  _DWORD *v9; // r8
  __int64 v10; // r11
  int v12; // r9d
  int v13; // r10d
  __int64 v14; // rbx
  unsigned int v15; // ecx
  unsigned int Queue; // r12d
  unsigned int v17; // esi
  unsigned int v18; // ebp
  int v19; // edx
  unsigned int v20; // ecx
  __int64 v22; // [rsp+20h] [rbp-38h]

  *a1 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[16];
  v7 = 0;
  a1[1] = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[20];
  v9 = dword_140E0F020;
  v10 = a4;
  v12 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24];
  v13 = 0;
  a1[2] = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24];
  v14 = 21 * v10;
  *a1 = dword_140E0F020[21 * v10 + 4] + dword_140E0F020[21 * v10 + 8];
  v15 = v12 + dword_140E0F020[21 * v10 + 11];
  a1[1] = v15;
  Queue = dword_140E0F020[21 * v10 + 11] + v15;
  a1[2] = Queue;
  v22 = *(_QWORD *)a1;
  if ( a6 )
  {
    *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] |= 0x1000000u;
    v17 = 0;
    v18 = HIDWORD(v22);
    while ( v17 <= 0x64 )
    {
      v13 = BcpDisplayProgress(v17, v10, (__int64)v9);
      if ( v13 < 0 )
        return (unsigned int)v13;
      if ( (struct _LIST_ENTRY *)__PAIR64__(v18, v22) < gLoadedDiffHivesLock.WaitListEntry.Blink )
      {
        Queue = (unsigned int)gLoadedDiffHivesLock.Queue;
        LODWORD(v22) = *((_DWORD *)&gLoadedDiffHivesLock.SwapListEntry + 2);
        v18 = *((_DWORD *)&gLoadedDiffHivesLock.SwapListEntry + 3);
      }
      BcpSetCursorPosition(*a1, a1[1], a1 + 2);
      LODWORD(v10) = a4;
      ++v17;
    }
    *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] &= ~0x1000000u;
  }
  v19 = dword_140E0F020[v14 + 8] + dword_140E0F020[v14 + 4];
  *a3 = v19;
  a3[1] = Queue + dword_140E0F020[v14 + 13];
  if ( a5 )
    v7 = a5 + dword_140E0F020[v14 + 14];
  *a2 = v19 + v7;
  v20 = Queue + dword_140E0F020[v14 + 15];
  a2[1] = v20;
  a2[2] = dword_140E0F020[v14 + 11] + v20;
  return (unsigned int)v13;
}
