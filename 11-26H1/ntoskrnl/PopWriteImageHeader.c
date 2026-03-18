/*
 * XREFs of PopWriteImageHeader @ 0x140BFCEA4
 * Callers:
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     DbgPrint @ 0x140396F60 (DbgPrint.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     tcpxsum @ 0x140730930 (tcpxsum.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopWriteHiberPages @ 0x140BFCC1C (PopWriteHiberPages.c)
 */

__int64 __fastcall PopWriteImageHeader(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v6; // rdx
  unsigned __int64 v8; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v10; // r10d
  __int64 i; // rbp
  unsigned int *p_ReservedPreviousReadyTimeValue; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r11
  char *v16; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  _OWORD *v18; // rcx
  struct _LIST_ENTRY **p_Blink; // rax
  __int128 v20; // xmm1
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 result; // rax

  BugCheckParameter4 = a3;
  v6 = *(unsigned int *)(a2 + 80);
  if ( (_DWORD)v6 != a3 )
  {
    DbgPrint("MemImage->WakeCheck %lx doesn't make PoWakeCheck %lx\n", v6, a3);
    KeBugCheckEx(0xA0u, 0x109uLL, 0xAuLL, *(unsigned int *)(a2 + 80), BugCheckParameter4);
  }
  *(_QWORD *)&stru_140F10070.AffinityPrimaryGroup = *(_QWORD *)(a2 + 1176);
  LODWORD(stru_140F10070.NpxState) = *(_DWORD *)(a1 + 288);
  v8 = __rdtsc();
  stru_140F10070.WaitBlock[0].Object = (PVOID)((((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) - a4);
  HIDWORD(stru_140F10070.PropagateBoostsEntry.Next) = ((unsigned int)dword_140F0FD80 >> 4) - 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = 0;
  stru_140F10070.WaitBlock[1].SparePtr = (PVOID)PerformanceCounter.QuadPart;
  for ( i = 5LL;
        v10 < *(_DWORD *)(a1 + 288);
        stru_140F10070.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)((char *)stru_140F10070.WaitBlock[1].WaitListEntry.Blink
                                                                               + *(_QWORD *)(*(_QWORD *)(a1 + 296)
                                                                                           + v13
                                                                                           + 80)) )
  {
    p_ReservedPreviousReadyTimeValue = &stru_140F10070.ReservedPreviousReadyTimeValue;
    v13 = 168LL * v10;
    v14 = 5LL;
    v15 = v13 - (_QWORD)&stru_140F10070.ReservedPreviousReadyTimeValue;
    do
    {
      v16 = (char *)p_ReservedPreviousReadyTimeValue + v15;
      *(_QWORD *)p_ReservedPreviousReadyTimeValue += *(_QWORD *)((char *)p_ReservedPreviousReadyTimeValue
                                                               + v15
                                                               + *(_QWORD *)(a1 + 296)
                                                               + 88);
      p_ReservedPreviousReadyTimeValue += 2;
      *(_QWORD *)&v16[*(_QWORD *)(a1 + 296) + 88] = 0LL;
      --v14;
    }
    while ( v14 );
    ++v10;
    stru_140F10070.ThreadListEntry.Flink = (struct _LIST_ENTRY *)((char *)stru_140F10070.ThreadListEntry.Flink
                                                                + *(_QWORD *)(*(_QWORD *)(a1 + 296) + v13 + 56));
    stru_140F10070.WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)stru_140F10070.WaitBlock[1].WaitListEntry.Flink
                                                                           + *(_QWORD *)(*(_QWORD *)(a1 + 296) + v13 + 40));
  }
  stru_140F10070.MutantListHead.Flink = (struct _LIST_ENTRY *)stru_140F10070.SchedulerSharedSystemSlot;
  *(_QWORD *)&stru_140F10070.AbWaitEntryCount = LODWORD(stru_140F10070.PropagateBoostsEntry.Next);
  stru_140F10070.SchedulerSharedSystemSlot = (char *)stru_140F10070.SchedulerSharedSystemSlot
                                           + (unsigned __int64)stru_140F10070.ThreadListEntry.Blink;
  Blink = stru_140F10070.SuspendEvent.Header.WaitListHead.Blink;
  LODWORD(stru_140F10070.PropagateBoostsEntry.Next) += LODWORD(stru_140F10070.MutantListHead.Blink);
  *(_QWORD *)(a2 + 88) = stru_140F10070.SuspendEvent.Header.WaitListHead.Blink;
  if ( byte_140F0FDA1 )
    *(_QWORD *)(a2 + 88) = (char *)stru_140F10070.ThreadListEntry.Flink + (unsigned __int64)Blink;
  v18 = (_OWORD *)(a2 + 136);
  p_Blink = &stru_140F10070.WaitBlock[0].WaitListEntry.Blink;
  do
  {
    *v18 = *(_OWORD *)p_Blink;
    v18[1] = *((_OWORD *)p_Blink + 1);
    v18[2] = *((_OWORD *)p_Blink + 2);
    v18[3] = *((_OWORD *)p_Blink + 3);
    v18[4] = *((_OWORD *)p_Blink + 4);
    v18[5] = *((_OWORD *)p_Blink + 5);
    v18[6] = *((_OWORD *)p_Blink + 6);
    v18 += 8;
    v20 = *((_OWORD *)p_Blink + 7);
    p_Blink += 16;
    *(v18 - 1) = v20;
    --i;
  }
  while ( i );
  *v18 = *(_OWORD *)p_Blink;
  v18[1] = *((_OWORD *)p_Blink + 1);
  v18[2] = *((_OWORD *)p_Blink + 2);
  v18[3] = *((_OWORD *)p_Blink + 3);
  v18[4] = *((_OWORD *)p_Blink + 4);
  v18[5] = *((_OWORD *)p_Blink + 5);
  *((_QWORD *)v18 + 12) = p_Blink[12];
  *(_DWORD *)a2 = 1380075848;
  *(_DWORD *)(a2 + 8) = tcpxsum(0, (const char *)a2, 0x4D8u);
  PopWriteHiberPages(a1, a2, 1uLL, 0LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 72LL);
  if ( result )
    return guard_dispatch_icall_no_overrides(v22, v21);
  return result;
}
