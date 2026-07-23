/*
 * XREFs of ExInitializeResourceLite @ 0x14021A0F0
 * Callers:
 *     FsRtlInitializeDedupChange @ 0x140792660 (FsRtlInitializeDedupChange.c)
 *     FsRtlInitializeTieringHeat @ 0x140793028 (FsRtlInitializeTieringHeat.c)
 *     IopInitializeBootLogging @ 0x1407977F0 (IopInitializeBootLogging.c)
 *     PiPnpRtlInit @ 0x1407A9F14 (PiPnpRtlInit.c)
 *     PiDmObjectManagerInit @ 0x1407AA304 (PiDmObjectManagerInit.c)
 *     PiDqObjectManagerInit @ 0x1407AB5A0 (PiDqObjectManagerInit.c)
 *     PiDrvDbCreateNode @ 0x1407B808C (PiDrvDbCreateNode.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1407CA468 (PfSnPrefetchCacheCtxInitialize.c)
 *     TtmInit @ 0x1407EBF08 (TtmInit.c)
 *     TtmiInitTerminals @ 0x1407F18AC (TtmiInitTerminals.c)
 *     TtmiCreateEventQueue @ 0x1407F2878 (TtmiCreateEventQueue.c)
 *     AdtpObjsInitialize @ 0x140896C50 (AdtpObjsInitialize.c)
 *     DrvDbOpenContext @ 0x1408A569C (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1408A5A58 (DrvDbCreateDatabaseNode.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     PnpInitializeNotifyEntry @ 0x1409AAEA4 (PnpInitializeNotifyEntry.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 *     MUIInitializeResourceLock @ 0x140AE3038 (MUIInitializeResourceLock.c)
 *     _PnpCtxOpenMachine @ 0x140AE5860 (_PnpCtxOpenMachine.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 */

NTSTATUS __stdcall ExInitializeResourceLite(PERESOURCE Resource)
{
  ULONG_PTR v2; // rdi
  KSPIN_LOCK *v4; // rsi
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
    v4 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags )
    {
      v5 = RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags);
      if ( v5 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v4);
        LOWORD(v2) = RecordedStackTraceIndex;
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v4, v5);
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
