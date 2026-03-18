/*
 * XREFs of PopWriteBsdPoInfo @ 0x140435F08
 * Callers:
 *     PopBsdFlush @ 0x140B00AD4 (PopBsdFlush.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceBsdWriteTime @ 0x14043608C (PopDiagTraceBsdWriteTime.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlSetSystemBootStatus @ 0x140B0B080 (RtlSetSystemBootStatus.c)
 *     PopQpcTimeInMs @ 0x140C06CF0 (PopQpcTimeInMs.c)
 */

__int64 __fastcall PopWriteBsdPoInfo(unsigned int a1)
{
  unsigned int v2; // ebx
  struct _LIST_ENTRY **p_Blink; // rbp
  unsigned __int8 *p_WaitListHead; // rsi
  unsigned int v5; // r14d
  int v6; // ebx
  unsigned int v7; // eax
  LARGE_INTEGER v9; // [rsp+20h] [rbp-78h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-70h] BYREF
  _BYTE Src[64]; // [rsp+30h] [rbp-68h] BYREF

  v2 = 64;
  memset_0(Src, 0, sizeof(Src));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( a1 == 7 )
  {
    p_Blink = &stru_140E66FF0.SavedApcState.ApcListHead[1].Blink;
    p_WaitListHead = (unsigned __int8 *)&stru_140E66FF0.SuspendEvent.Header.WaitListHead;
    goto LABEL_5;
  }
  if ( a1 == 16 )
  {
    p_Blink = (struct _LIST_ENTRY **)&stru_140E66FF0.PriorityFloorCounts[24];
    p_WaitListHead = &stru_140E66FF0.SchedulerApcFill4[64];
LABEL_5:
    v2 = 32;
    goto LABEL_6;
  }
  if ( a1 != 14 )
  {
    v6 = -1073741811;
    goto LABEL_10;
  }
  p_Blink = &stru_140E66FF0.MutantListHead.Blink;
  p_WaitListHead = (unsigned __int8 *)&stru_140E66FF0.Process;
LABEL_6:
  v5 = v2;
  if ( RtlCompareMemory(p_Blink, p_WaitListHead, v2) == v2 )
  {
    v6 = -1073741791;
  }
  else
  {
    memmove(Src, p_Blink, v2);
    PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
    v6 = RtlSetSystemBootStatus(a1, Src, v2, 0LL);
    PopAcquireRwLockExclusive(&stru_140F12D20.AbWaitObject);
    if ( v6 < 0 )
    {
      if ( a1 == 14 && *(_WORD *)&stru_140E66FF0.PriorityFloorCounts[6] != 0xFFFF )
        ++*(_WORD *)&stru_140E66FF0.PriorityFloorCounts[6];
    }
    else
    {
      memmove(p_WaitListHead, Src, v5);
    }
  }
LABEL_10:
  v9 = KeQueryPerformanceCounter(0LL);
  v7 = PopQpcTimeInMs(&PerformanceCounter, &v9);
  return PopDiagTraceBsdWriteTime(a1, v7, (unsigned int)v6);
}
