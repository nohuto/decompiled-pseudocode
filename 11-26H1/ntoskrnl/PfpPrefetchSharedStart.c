/*
 * XREFs of PfpPrefetchSharedStart @ 0x1409880CC
 * Callers:
 *     PfpQueryFileExtentsRequest @ 0x1407C88FC (PfpQueryFileExtentsRequest.c)
 *     PfpPrefetchRequestPerform @ 0x14098034C (PfpPrefetchRequestPerform.c)
 *     PfSnAsyncPrefetchWorker @ 0x1409887A0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 */

__int64 __fastcall PfpPrefetchSharedStart(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  unsigned int v6; // edi
  struct _LIST_ENTRY *Flink; // rax
  struct _KLOCK_ENTRIES *v8; // r9
  struct _LIST_ENTRY *v9; // rax
  void *v10; // rdx
  struct _KLOCK_ENTRIES *v11; // r9
  struct _LIST_ENTRY *v12; // rax
  void *v13; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  HIDWORD(a1[4].Flink) |= 8u;
  a1[1].Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  HIDWORD(a1[4].Flink) ^= ((unsigned __int8)HIDWORD(a1[4].Flink) ^ (unsigned __int8)(2
                                                                                   * _interlockedbittestandset(
                                                                                       (volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry
                                                                                     + 2,
                                                                                       0x19u))) & 2;
  v6 = 0;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_140E66D40.Padding[3]) )
    return (unsigned int)-1073741127;
  HIDWORD(a1[4].Flink) |= 1u;
  PfLockExclusiveAcquire((unsigned __int64 *)&stru_140E67200, v3, v4, v5);
  if ( ((__int64)stru_140E67200.SListFaultAddress & 1) == 0 )
  {
    Flink = stru_140E67200.Header.WaitListHead.Flink;
    if ( stru_140E67200.Header.WaitListHead.Flink->Blink != &stru_140E67200.Header.WaitListHead )
      __fastfail(3u);
    a1->Flink = stru_140E67200.Header.WaitListHead.Flink;
    a1->Blink = &stru_140E67200.Header.WaitListHead;
    Flink->Blink = a1;
    stru_140E67200.Header.WaitListHead.Flink = a1;
  }
  PfLockExclusiveRelease(&stru_140E67200);
  if ( a1->Flink )
  {
    v9 = (struct _LIST_ENTRY *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, v8);
    a1[8].Flink = v9;
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire((AutoBoost *)v9, v10);
      else
        BYTE2(v9->Blink) = 1;
    }
    v12 = (struct _LIST_ENTRY *)KeAbPreAcquire((__int64)&stru_140E66D40.WaitBlock[1], 0LL, 0LL, v11);
    a1[8].Blink = v12;
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire((AutoBoost *)v12, v13);
      else
        BYTE2(v12->Blink) = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return v6;
}
