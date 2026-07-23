/*
 * XREFs of KiAdjustCoreIsolationReasonThread @ 0x1404CCC84
 * Callers:
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1404CCBF0 (KeEnableCoreIsolationMitigationPolicyThread.c)
 * Callees:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     ?KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD@@PEAU_KTHREAD_SCHEDULE_REASON_DATA@@@Z @ 0x14022F870 (-KiCompleteRescheduleContextEntry@@YAXPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@PEAU_KTHREAD.c)
 *     KiCommitRescheduleContext @ 0x1402409D0 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 *     KiSetThreadIsolationWidthUnsafe @ 0x1404CCE08 (KiSetThreadIsolationWidthUnsafe.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405FDD3C (KiAdjustRescheduleContextForIsolationWidthChange.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall KiAdjustCoreIsolationReasonThread(
        struct _KTHREAD *a1,
        char a2,
        volatile signed __int32 **a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  unsigned int v4; // ebx
  char v6; // si
  volatile unsigned __int8 CoreIsolationReasons; // dl
  char v10; // al
  volatile unsigned __int8 v11; // dl
  BOOL v12; // r14d
  unsigned int v13; // eax
  struct _KPRCB *CurrentPrcb; // r15
  struct _KPRCB *v15; // r13
  struct _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  char v17; // bp
  unsigned __int64 v18; // rcx
  unsigned __int64 *v19; // r8
  bool v21; // al
  struct _KPRCB *v22[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+40h] [rbp-38h]
  int v25; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v25 = 0;
  v6 = (char)a3;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v25);
    while ( a1->ThreadLock );
  }
  CoreIsolationReasons = a1->CoreIsolationReasons;
  v10 = 1 << a2;
  LOBYTE(v25) = ((unsigned __int8)(1 << a2) & CoreIsolationReasons) != 0;
  if ( (_BYTE)v25 == v6
    || (!v6 ? (v11 = ~v10 & CoreIsolationReasons) : (v11 = v10 | CoreIsolationReasons),
        a1->CoreIsolationReasons = v11,
        v12 = v11 != 0,
        v12 == ((*((_DWORD *)&a1->0 + 1) >> 1) & 1)) )
  {
    a1->ThreadLock = 0LL;
    return v25;
  }
  *(_OWORD *)v22 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v13 = KiAcquireThreadStateLockForWrite((__int64)a1, (__int64)v22, a3);
  CurrentPrcb = KeGetCurrentPrcb();
  v15 = v22[0];
  if ( v13 >= 2 && (v13 == 2 || v13 == 3) )
  {
    v21 = v13 == 3 || v22[0]->NextThread == 0LL;
    v17 = 0;
    StaticRescheduleContext = 0LL;
    if ( v21 )
    {
      StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
      memset_0(StaticRescheduleContext, 0, sizeof(struct _KI_RESCHEDULE_CONTEXT));
      KiStartRescheduleContext((__int64)StaticRescheduleContext, &v22[1], (__int64)a1);
      KiSetThreadIsolationWidthUnsafe(a1, v12);
      if ( (unsigned __int8)KiAdjustRescheduleContextForIsolationWidthChange(StaticRescheduleContext, v15, a1) )
        KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, a4);
      v17 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, CurrentPrcb, 0, a4);
      goto LABEL_15;
    }
  }
  else
  {
    StaticRescheduleContext = 0LL;
    v17 = 0;
  }
  KiSetThreadIsolationWidthUnsafe(a1, v12);
LABEL_15:
  KiReleaseThreadStateLock(v18, (__int64)v22, v19);
  a1->ThreadLock = 0LL;
  if ( v17 )
  {
    if ( StaticRescheduleContext->ProcessorCount )
    {
      do
      {
        KiCompleteRescheduleContextEntry(
          (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * v4 + 8 * v4),
          CurrentPrcb,
          0LL,
          0LL);
        ++v4;
      }
      while ( v4 < StaticRescheduleContext->ProcessorCount );
    }
    KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
  }
  return v25;
}
