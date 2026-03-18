/*
 * XREFs of PiSwInit @ 0x140CC68FC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IoCreateDriver @ 0x140B57970 (IoCreateDriver.c)
 */

__int64 PiSwInit()
{
  unsigned __int16 v0; // bx
  KSPIN_LOCK *p_Policy; // rdi
  unsigned __int16 *v2; // rax
  __int64 *v3; // rbp
  int RecordedStackTraceIndex; // esi
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  v0 = 0;
  DWORD1(v6) = 0;
  memset_0(&PiSwDeviceInstanceTable, 0, sizeof(PiSwDeviceInstanceTable));
  PiSwDeviceInstanceTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PiSwDeviceInstanceTable;
  PiSwDeviceInstanceTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PiSwDeviceCompareObjects;
  PiSwDeviceInstanceTable.TableContext = 0LL;
  PiSwDeviceInstanceTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PiSwAllocateGenericTableEntry;
  PiSwDeviceInstanceTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))PiSwFreeGenericTableEntry;
  memset_0(&PiSwBusRelationsTable, 0, sizeof(PiSwBusRelationsTable));
  PiSwBusRelationsTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PiSwBusRelationsTable;
  PiSwBusRelationsTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PiSwBusRelationsCompareInstancePath;
  PiSwBusRelationsTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PiSwAllocateGenericTableEntry;
  qword_140F82858 = (__int64)&PiSwGlobalPdoAssociationList;
  PiSwGlobalPdoAssociationList = (__int64)&PiSwGlobalPdoAssociationList;
  PiSwBusRelationsTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))PiSwFreeGenericTableEntry;
  PiSwBusRelationsTable.TableContext = 0LL;
  if ( (unsigned __int64)&PiSwLockObj < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&PiSwLockObj) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&PiSwLockObj, retaddr);
  }
  memset_0(&PiSwLockObj.OwnerTable, 0, 0x50uLL);
  PiSwLockObj.SystemResourcesList.Blink = (struct _LIST_ENTRY *)&PiSwLockObj;
  PiSwLockObj.SystemResourcesList.Flink = (struct _LIST_ENTRY *)&PiSwLockObj;
  PiSwLockObj.SharedWaiters = 0LL;
  PiSwLockObj.ExclusiveWaiters = 0LL;
  PiSwLockObj.SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup )
    {
      v2 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1);
      v3 = (__int64 *)v2;
      if ( v2 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, v2);
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace((__int64)p_Policy, v3);
      }
      else
      {
        LOWORD(RecordedStackTraceIndex) = 0;
      }
      v0 = RecordedStackTraceIndex;
    }
    PiSwLockObj.CreatorBackTraceIndex = v0;
  }
  else
  {
    PiSwLockObj.CreatorBackTraceIndex = 0LL;
  }
  HIDWORD(PiSwLockObj.Reserved2) = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&PiSwLockObj);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&PiSwLockObj, 0, 0);
  LODWORD(v6) = 3014700;
  *((_QWORD *)&v6 + 1) = L"\\Driver\\SoftwareDevice";
  return IoCreateDriver(&v6, (unsigned __int64)PiSwPdoDriverEntry);
}
