/*
 * XREFs of PnpInitPhase0 @ 0x140CC3724
 * Callers:
 *     PpInitSystem @ 0x140CC39F0 (PpInitSystem.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char PnpInitPhase0()
{
  ULONG_PTR v0; // rax
  KSPIN_LOCK *p_Policy; // rdi
  unsigned __int16 *v2; // rax
  __int64 *v3; // rsi
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v5; // bx
  char result; // al
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int64)&PnpRegistryDeviceResource < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&PnpRegistryDeviceResource) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&PnpRegistryDeviceResource, retaddr);
  }
  memset_0(&PnpRegistryDeviceResource.OwnerTable, 0, 0x50uLL);
  v0 = 0LL;
  PnpRegistryDeviceResource.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&PnpRegistryDeviceResource;
  PnpRegistryDeviceResource.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&PnpRegistryDeviceResource;
  PnpRegistryDeviceResource.SharedWaiters = 0LL;
  PnpRegistryDeviceResource.ExclusiveWaiters = 0LL;
  PnpRegistryDeviceResource.SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup
      && (v2 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1),
          (v3 = (__int64 *)v2) != 0LL) )
    {
      RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, v2);
      v5 = RecordedStackTraceIndex;
      if ( !RecordedStackTraceIndex )
        RtlStdReleaseStackTrace((__int64)p_Policy, v3);
    }
    else
    {
      v5 = 0;
    }
    v0 = v5;
  }
  PnpRegistryDeviceResource.CreatorBackTraceIndex = v0;
  HIDWORD(PnpRegistryDeviceResource.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&PnpRegistryDeviceResource);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&PnpRegistryDeviceResource, 0, 0);
  PnpDeviceReferenceTableLock.Count = 1;
  PnpDeviceReferenceTableLock.Owner = 0LL;
  PnpDeviceReferenceTableLock.Contention = 0;
  LOWORD(PnpDeviceReferenceTableLock.Event.Header.Lock) = 1;
  PnpDeviceReferenceTableLock.Event.Header.Size = 6;
  PnpDeviceReferenceTableLock.Event.Header.SignalState = 0;
  PnpDeviceReferenceTableLock.Event.Header.WaitListHead.Blink = &PnpDeviceReferenceTableLock.Event.Header.WaitListHead;
  PnpDeviceReferenceTableLock.Event.Header.WaitListHead.Flink = &PnpDeviceReferenceTableLock.Event.Header.WaitListHead;
  memset_0(&PnpDeviceReferenceTable, 0, sizeof(PnpDeviceReferenceTable));
  PnpDeviceReferenceTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PnpDeviceReferenceTable;
  PnpDeviceReferenceTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PnpCompareInstancePath;
  PnpDeviceReferenceTable.TableContext = 0LL;
  PnpDeviceReferenceTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PnpAllocateGenericTableEntry;
  PnpDeviceActivationTableSpinLock = 0LL;
  PnpDeviceReferenceTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))CMFFreeFn;
  memset_0(&PnpDeviceActivationTable, 0, sizeof(PnpDeviceActivationTable));
  result = 1;
  PnpDeviceActivationTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PnpCompareActivationThread;
  PnpDeviceActivationTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PnpAllocateGenericTableEntryNonPaged;
  PnpDeviceActivationTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PnpDeviceActivationTable;
  PnpDeviceActivationTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))PnpFreeGenericTableEntryNonPaged;
  PnpDeviceActivationTable.TableContext = 0LL;
  return result;
}
