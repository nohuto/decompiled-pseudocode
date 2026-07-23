/*
 * XREFs of MiPageNotZero @ 0x14050EAD8
 * Callers:
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1407353B0 (KeZeroPages.c)
 */

__int64 __fastcall MiPageNotZero(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  int v4; // r10d
  unsigned int v5; // esi
  ULONG_PTR v6; // r9
  int v7; // r14d
  ULONG_PTR i; // rdx
  ULONG_PTR v9; // rax
  ULONG v10; // r15d
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v12; // rbx

  _InterlockedAdd((volatile signed __int32 *)&stru_140E2ED08.SchedulerApc.Type, 1u);
  v4 = 0;
  v5 = 0;
  v6 = 4096LL;
  v7 = 0;
  for ( i = BugCheckParameter1; i < BugCheckParameter1 + 4096; i += 4LL )
  {
    if ( *(_DWORD *)i )
    {
      v9 = i - BugCheckParameter1;
      if ( v6 != 4096 )
        v9 = v6;
      ++v4;
      v6 = v9;
      if ( v4 != 1 )
        goto LABEL_11;
      v5 = i & 0xFFF;
      v7 = *(_DWORD *)i;
      if ( ((*(_DWORD *)i - 1) & *(_DWORD *)i) != 0 )
        goto LABEL_11;
    }
  }
  if ( v4 == 1 )
  {
    v10 = 299;
    v6 = 0LL;
    _InterlockedAdd((volatile signed __int32 *)&stru_140E2ED08.SuspendCount, 1u);
    BugCheckParameter4 = 0LL;
    goto LABEL_12;
  }
LABEL_11:
  v10 = 295;
  BugCheckParameter4 = 4096LL;
LABEL_12:
  if ( (MmPageValidationAction & 1) != 0 )
    KeBugCheckEx(v10, BugCheckParameter1, BugCheckParameter2, v6, BugCheckParameter4);
  v12 = *(_QWORD *)(stru_140E2ED08.ThreadLock
                  + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  KeSetEvent(*(PRKEVENT *)(v12 + 392), 0, 0);
  if ( (ULONG *)v12 != &MiSystemPartition )
    KeSetEvent(*(PRKEVENT *)&stru_140E37F48.SystemCallNumber, 0, 0);
  if ( (MiFlags & 0x30) == 0x20
    && !_InterlockedCompareExchange((volatile signed __int32 *)&stru_140E2ED08.WaitBlockFill11[132], 1, 0) )
  {
    *(_DWORD *)&stru_140E2ED08.WaitBlockFill11[136] = v7;
    stru_140E2ED08.WaitBlock[3].Thread = (struct _KTHREAD *)MiBadMemoryLogger;
    stru_140E2ED08.Spare18 = (unsigned __int64)&stru_140E2ED08.WaitBlock[2].Object;
    *(_DWORD *)&stru_140E2ED08.WaitBlockFill11[128] = v10;
    *(_OWORD *)&stru_140E2ED08.WaitBlockFill11[144] = v5 + (BugCheckParameter2 << 12);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140E2ED08.WaitBlockFill11[152], DelayedWorkQueue);
  }
  return KeZeroPages(BugCheckParameter1, 4096LL);
}
