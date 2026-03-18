/*
 * XREFs of UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140320330
 * Callers:
 *     MiPerformVadSplitting @ 0x1402A3F44 (MiPerformVadSplitting.c)
 *     MiRemoveVad @ 0x1402A7E14 (MiRemoveVad.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiDeleteEmptyPageTables @ 0x1403D7BA0 (MiDeleteEmptyPageTables.c)
 *     MmOutSwapVirtualAddresses @ 0x1403D8A60 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiCommitPageTableRangesForVad @ 0x140489444 (MiCommitPageTableRangesForVad.c)
 *     MiSplitReducedCommitClonePage @ 0x1404F6C24 (MiSplitReducedCommitClonePage.c)
 *     MmAssignProcessToJob @ 0x1408D9124 (MmAssignProcessToJob.c)
 *     MiFreeToSubAllocatedRegion @ 0x1408F63EC (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1408F9D30 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1408FA704 (MiAllocateFromSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x140900770 (MiInsertVadCharges.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall UNLOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 v6; // r9
  unsigned int i; // eax
  char *v8; // r10
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v13; // ett

  v3 = a2 + 608;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 608), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 608);
  CurrentThread = KeGetCurrentThread();
  _disable();
  KernelAbEntries = CurrentThread->KernelAbEntries;
  v6 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
  {
    v8 = (char *)KernelAbEntries + 88 * i;
    a2 = *((_QWORD *)v8 + 2);
    if ( (a2 & 0x7FFFFFFFFFFFFFFCLL) == v6 && v8[26] && (a2 & 1) == 0 )
    {
      v8[26] = 0;
      result = KiAbEntryFreeAndEnableInterrupts((__int64)(v8 + 16), (ULONG_PTR)CurrentThread, v3, 1, 0LL);
      goto LABEL_9;
    }
  }
  result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, 0LL, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      a2 = (unsigned int)result;
      LODWORD(a2) = result & 0xFFDFFFFF;
      v13 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v13 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
LABEL_9:
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(CurrentPrcb, a2, SchedulerAssist, v6);
  }
  return result;
}
