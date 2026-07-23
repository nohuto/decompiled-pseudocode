/*
 * XREFs of BgpFwQueryBootGraphicsInformation @ 0x1404FB4C4
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x14071A770 (BgQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140357BA8 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140357C64 (BgpFwAllocateMemory.c)
 *     BgpFwAcquireLock @ 0x1404E11C4 (BgpFwAcquireLock.c)
 *     BgpFwReleaseLock @ 0x1404E157C (BgpFwReleaseLock.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall BgpFwQueryBootGraphicsInformation(int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  int v5; // ecx
  const void *v6; // r14
  size_t v7; // rbp
  void *Memory; // rax
  int *Pool2; // rax
  int *v10; // r15

  v2 = 0;
  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == 2 )
    {
      *(_DWORD *)a2 = 8;
      *(_DWORD *)a2 = *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[168] + 8;
    }
    else if ( a1 == 3 )
    {
      *(_OWORD *)a2 = *(_OWORD *)&gLoadedDiffHivesLock.SavedApcStateFill[24];
      *(_OWORD *)(a2 + 16) = *(_OWORD *)&gLoadedDiffHivesLock.SavedApcStateFill[40];
      *(_OWORD *)(a2 + 32) = *(_OWORD *)&gLoadedDiffHivesLock.SchedulerApcFill5[8];
      *(_OWORD *)(a2 + 48) = *(_OWORD *)&gLoadedDiffHivesLock.SchedulerApcFill5[24];
      *(_OWORD *)(a2 + 64) = *(_OWORD *)&gLoadedDiffHivesLock.SchedulerApcFill5[40];
      *(_OWORD *)(a2 + 80) = *(_OWORD *)&gLoadedDiffHivesLock.SchedulerApcFill5[56];
      *(_OWORD *)(a2 + 96) = *(_OWORD *)&gLoadedDiffHivesLock.SchedulerApcFill5[72];
      *(_OWORD *)(a2 + 112) = *(_OWORD *)&gLoadedDiffHivesLock.SuspendEvent.Header.Lock;
    }
    else if ( *(_OWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[152] == 0LL )
    {
      *(_QWORD *)a2 = 0LL;
    }
    else
    {
      v6 = *(const void **)&gLoadedDiffHivesLock.WaitBlockFill11[160];
      v7 = *(unsigned int *)&gLoadedDiffHivesLock.WaitBlockFill11[168];
      if ( !*(_QWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[160] )
      {
        Memory = (void *)BgpFwAllocateMemory(*(unsigned int *)&gLoadedDiffHivesLock.WaitBlockFill11[168]);
        v3 = (__int64)Memory;
        if ( !Memory )
          return (unsigned int)-1073741801;
        v6 = Memory;
        memmove(Memory, gLoadedDiffHivesLock.WaitBlock[3].WaitListEntry.Blink, v7);
      }
      if ( (int)v7 + 8 < (unsigned int)v7 )
      {
        v2 = -1073741675;
      }
      else
      {
        BgpFwReleaseLock();
        Pool2 = (int *)ExAllocatePool2(0x100uLL);
        v10 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] >> 23) & 1;
          Pool2[1] = 8;
          memmove(Pool2 + 2, v6, v7);
          BgpFwAcquireLock();
          *(_QWORD *)a2 = v10;
        }
        else
        {
          BgpFwAcquireLock();
          v2 = -1073741801;
        }
      }
      if ( v3 )
        BgpFwFreeMemory(v3);
    }
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[48];
    *(_OWORD *)(a2 + 16) = *(_OWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[64];
    *(_DWORD *)(a2 + 20) = 0;
    if ( (gLoadedDiffHivesLock.WaitBlockFill6[80] & 2) != 0 )
      *(_DWORD *)(a2 + 20) = 1;
    if ( ((BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink) - 1) & 0xFD) == 0 )
    {
      v5 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v5;
    }
    *(_DWORD *)(a2 + 28) = BYTE2(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink);
  }
  return v2;
}
