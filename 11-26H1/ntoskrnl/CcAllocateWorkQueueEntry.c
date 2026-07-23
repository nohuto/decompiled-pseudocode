/*
 * XREFs of CcAllocateWorkQueueEntry @ 0x140389900
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140389220 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcAsyncCopyRead @ 0x140389580 (CcAsyncCopyRead.c)
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcNotifyOfMappedWrite @ 0x14038B5FC (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScan @ 0x1404F4BD4 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x1405B3580 (CcQueueLazyWriteScanThread.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1405B3E18 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcAllocateWorkQueueEntry(__int64 a1, __int64 a2, __int64 a3, PSLIST_ENTRY *a4)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v10; // r10
  _GENERAL_LOOKASIDE *L; // rdi

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalAllocates;
  v10 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v10
    || (++P->AllocateMisses,
        L = CurrentPrcb->PPLookasideList[6].L,
        ++L->TotalAllocates,
        (v10 = RtlpInterlockedPopEntrySList(&L->ListHead)) != 0LL)
    || (++L->AllocateMisses,
        (v10 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size, L->Tag)) != 0LL) )
  {
    LODWORD(v10->Next) = CurrentPrcb->Number;
  }
  *a4 = v10;
  if ( !v10 )
    return 3221225626LL;
  *((_QWORD *)&v10[8].Next + 1) = a1;
  v10[9].Next = (_SLIST_ENTRY *)a2;
  *((_QWORD *)&v10[9].Next + 1) = a3;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296)) <= 1 )
    __fastfail(0xEu);
  if ( a2 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 8)) <= 1 )
      __fastfail(0xEu);
  }
  return 0LL;
}
