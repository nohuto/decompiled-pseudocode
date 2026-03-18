/*
 * XREFs of ExInitializeResourceLite @ 0x140260870
 * Callers:
 *     FsRtlInitializeDedupChange @ 0x14078FB30 (FsRtlInitializeDedupChange.c)
 *     FsRtlInitializeTieringHeat @ 0x1407904F8 (FsRtlInitializeTieringHeat.c)
 *     IopInitializeBootLogging @ 0x140794CC0 (IopInitializeBootLogging.c)
 *     PiPnpRtlInit @ 0x1407A7364 (PiPnpRtlInit.c)
 *     PiDmObjectManagerInit @ 0x1407A7754 (PiDmObjectManagerInit.c)
 *     PiDqObjectManagerInit @ 0x1407A89F0 (PiDqObjectManagerInit.c)
 *     PiDrvDbCreateNode @ 0x1407B502C (PiDrvDbCreateNode.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1407C7408 (PfSnPrefetchCacheCtxInitialize.c)
 *     TtmInit @ 0x1407E63A8 (TtmInit.c)
 *     TtmiInitTerminals @ 0x1407EBD48 (TtmiInitTerminals.c)
 *     TtmiCreateEventQueue @ 0x1407ECD18 (TtmiCreateEventQueue.c)
 *     AdtpObjsInitialize @ 0x140890854 (AdtpObjsInitialize.c)
 *     DrvDbOpenContext @ 0x14089F29C (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14089F658 (DrvDbCreateDatabaseNode.c)
 *     PnpInitializeNotifyEntry @ 0x1409092E4 (PnpInitializeNotifyEntry.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 *     MUIInitializeResourceLock @ 0x140AE5278 (MUIInitializeResourceLock.c)
 *     _PnpCtxOpenMachine @ 0x140AE79B0 (_PnpCtxOpenMachine.c)
 * Callees:
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  ULONG_PTR v2; // rdi
  KSPIN_LOCK *p_Policy; // rsi
  __int64 v5; // rbp
  int RecordedStackTraceIndex; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int64)Resource < 0xFFFF800000000000uLL || MmDeterminePoolType(Resource) == 256 )
    ExpTraceLogBadResourceAddress(Resource, retaddr);
  Resource->SystemResourcesList = 0LL;
  v2 = 0LL;
  *(_OWORD *)&Resource->OwnerTable = 0LL;
  *(_OWORD *)&Resource->SharedWaiters = 0LL;
  Resource->OwnerEntry = 0LL;
  *(_OWORD *)&Resource->ActiveEntries = 0LL;
  *(_OWORD *)&Resource->Reserved2 = 0LL;
  Resource->SystemResourcesList.Blink = &Resource->SystemResourcesList;
  Resource->SystemResourcesList.Flink = &Resource->SystemResourcesList;
  Resource->SharedWaiters = 0LL;
  Resource->ExclusiveWaiters = 0LL;
  Resource->SpinLock = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup )
    {
      v5 = RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy);
      if ( v5 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy);
        LOWORD(v2) = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(p_Policy, v5);
      }
    }
    v2 = (unsigned __int16)v2;
  }
  Resource->CreatorBackTraceIndex = v2;
  HIDWORD(Resource->Reserved2) = -1;
  ExpAddResourceToSystemResourceList(Resource);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544LL, Resource, 0LL, 0LL);
  return 0;
}
