/*
 * XREFs of BgpFwDisplayBugCheckProgressUpdate @ 0x14071CBD8
 * Callers:
 *     KiBugCheckProgress @ 0x1405E9FA0 (KiBugCheckProgress.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14071CBD8 (BgpFwDisplayBugCheckProgressUpdate.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     BcpConvertProgressToString @ 0x14071B320 (BcpConvertProgressToString.c)
 *     BcpDisplayProgress @ 0x14071C224 (BcpDisplayProgress.c)
 *     BcpDisplayProgressModernized @ 0x14071C43C (BcpDisplayProgressModernized.c)
 *     BcpGetDisplayType @ 0x14071C800 (BcpGetDisplayType.c)
 *     BcpSetCursorPosition @ 0x14071CB0C (BcpSetCursorPosition.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14071CBD8 (BgpFwDisplayBugCheckProgressUpdate.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckProgressUpdate(unsigned int a1, _QWORD *a2, char a3)
{
  unsigned int v3; // ebp
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  signed __int64 v9; // rcx
  signed __int64 v10; // rax
  LARGE_INTEGER v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r8
  int v14; // r11d
  unsigned __int64 v15; // rax
  LARGE_INTEGER v16; // r8
  void *p_StackBase; // rax
  $241382875694CED3D471BC5892DE3337 *v18; // rax
  _LIST_ENTRY *p_FirstArgument; // rax
  _DWORD v21[14]; // [rsp+20h] [rbp-38h] BYREF
  LARGE_INTEGER v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v22.QuadPart = 0LL;
  if ( (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[80] & 0x400000) != 0
    || (gLoadedDiffHivesLock.WaitBlockFill6[80] & 0x10) == 0 )
  {
    return 0LL;
  }
  v7 = KeQueryPerformanceCounter(&v22);
  v8 = v22;
  v9 = v7.QuadPart - (unsigned __int64)gLoadedDiffHivesLock.ApcState.ApcListHead[0].Blink;
  v10 = v7.QuadPart - (unsigned __int64)gLoadedDiffHivesLock.ApcState.ApcListHead[0].Flink;
  v11.QuadPart = 2 * v22.QuadPart;
  if ( a3 && v10 < v11.QuadPart )
    v12 = 100 * v10 / v11.QuadPart;
  else
    LODWORD(v12) = 100;
  if ( a1 <= (unsigned int)v12 )
    LODWORD(v12) = a1;
  if ( v9 < v11.QuadPart || (unsigned int)v12 < *(_DWORD *)&gLoadedDiffHivesLock.ApcStateFill[16] )
  {
    LODWORD(v12) = *(_DWORD *)&gLoadedDiffHivesLock.ApcStateFill[16];
  }
  else
  {
    v21[0] = gLoadedDiffHivesLock.Timer.TimerListEntry.Blink;
    v21[1] = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Flink);
    v21[2] = HIDWORD(gLoadedDiffHivesLock.Timer.TimerListEntry.Blink);
    BcpGetDisplayType(v21);
    BcpSetCursorPosition(
      *((int *)&gLoadedDiffHivesLock.SwapListEntry + 2),
      *((int *)&gLoadedDiffHivesLock.SwapListEntry + 3),
      &gLoadedDiffHivesLock.Queue);
    if ( LOBYTE(gLoadedDiffHivesLock.SchedulerSharedSystemSlot) )
      BcpDisplayProgressModernized(v12, v14);
    else
      BcpDisplayProgress(v12, v14, v13);
    gLoadedDiffHivesLock.ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)KeQueryPerformanceCounter(0LL).QuadPart;
    *(_DWORD *)&gLoadedDiffHivesLock.ApcStateFill[16] = v12;
  }
  if ( a1 != 100 || (_DWORD)v12 == 100 )
  {
    p_StackBase = &stru_140E3EAA8.StackBase;
    if ( !a3 )
      p_StackBase = (void *)&stru_140E3EAA8.CycleTime;
    *a2 = p_StackBase;
    BcpConvertProgressToString(v12, (__int64)(a2 + 3));
    v18 = ($241382875694CED3D471BC5892DE3337 *)((char *)&stru_140E3EAA8.116 + 4);
    if ( a1 != 1 )
      v18 = &stru_140E3EAA8.152;
    a2[1] = v18;
    p_FirstArgument = (_LIST_ENTRY *)&stru_140E3EAA8.FirstArgument;
    if ( a1 != 1 )
      p_FirstArgument = &stru_140E3EAA8.ApcState.ApcListHead[1];
    a2[2] = p_FirstArgument;
  }
  else
  {
    v15 = *(_QWORD *)&KeQueryPerformanceCounter(0LL)
        - (unsigned __int64)gLoadedDiffHivesLock.ApcState.ApcListHead[0].Blink;
    if ( (__int64)v15 < v11.QuadPart )
      KeStallExecutionProcessor((__int64)(1000000 * (v11.QuadPart - v15)) / v8.QuadPart);
    LOBYTE(v16.LowPart) = a3;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgpFwDisplayBugCheckProgressUpdate)(
                           100LL,
                           a2,
                           (LARGE_INTEGER)v16.QuadPart);
  }
  return v3;
}
