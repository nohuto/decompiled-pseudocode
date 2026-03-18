/*
 * XREFs of PsGetPagePriorityThread @ 0x1403825F0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BDCC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcScheduleReadAheadNuma @ 0x14021D0F8 (CcScheduleReadAheadNuma.c)
 *     PfFileInfoNotify @ 0x1402B8A80 (PfFileInfoNotify.c)
 *     PfLogFileDataAccess @ 0x1403817A0 (PfLogFileDataAccess.c)
 *     SmKmStoreHelperCommandProcess @ 0x140382C98 (SmKmStoreHelperCommandProcess.c)
 *     CcPerformReadAhead @ 0x140386E18 (CcPerformReadAhead.c)
 *     CcAsyncCopyRead @ 0x1403877D0 (CcAsyncCopyRead.c)
 *     CcCompleteAsyncRead @ 0x14039E848 (CcCompleteAsyncRead.c)
 *     CcInitializeCacheMapInternal @ 0x1403E1230 (CcInitializeCacheMapInternal.c)
 *     ExpWorkerThread @ 0x1403F5680 (ExpWorkerThread.c)
 *     EtwpTraceThreadRundown @ 0x140412620 (EtwpTraceThreadRundown.c)
 *     PfSnCheckActionsNeeded @ 0x14096FED8 (PfSnCheckActionsNeeded.c)
 *     EtwTraceThread @ 0x140A045B0 (EtwTraceThread.c)
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 *     PfSnAsyncContextInitialize @ 0x140AE075C (PfSnAsyncContextInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPagePriorityThread(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  unsigned int v3; // ecx

  result = (*(_DWORD *)(a1 + 1440) >> 12) & 7;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 672LL);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 1092);
    if ( (unsigned int)result >= v3 )
      return v3;
  }
  return result;
}
