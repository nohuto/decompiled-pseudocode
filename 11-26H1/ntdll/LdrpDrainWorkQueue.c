/*
 * XREFs of LdrpDrainWorkQueue @ 0x180087180
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x18004DED0 (RtlQueryInformationActivationContext.c)
 *     LdrpFindLoadedDll @ 0x180051680 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x1800520B0 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180052D40 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x1800553B0 (LdrUnloadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x180085C00 (LdrGetProcedureAddressForCaller.c)
 *     RtlExitUserProcess @ 0x1800869E0 (RtlExitUserProcess.c)
 *     LdrShutdownThread @ 0x180086CA0 (LdrShutdownThread.c)
 *     LdrInitShimEngineDynamic @ 0x1800C5320 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrEnumerateLoadedModules @ 0x1800E1C10 (LdrEnumerateLoadedModules.c)
 *     LdrpInitializeImportRedirection @ 0x18011D004 (LdrpInitializeImportRedirection.c)
 *     RtlCloneUserProcess @ 0x18015C640 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x18015CB00 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     LdrpUpdateStatistics @ 0x1800870D4 (LdrpUpdateStatistics.c)
 *     LdrpProcessWork @ 0x180087350 (LdrpProcessWork.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 */

struct _TEB *__fastcall LdrpDrainWorkQueue(int a1)
{
  HANDLE v1; // r14
  char v2; // si
  char v4; // di
  __int64 *v5; // rbx
  __int64 v6; // rax
  struct _TEB *result; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v1 = (HANDLE)LdrpWorkCompleteEvent;
  v2 = 0;
  if ( !a1 )
    v1 = LdrpLoadCompleteEvent;
  while ( 1 )
  {
    while ( 1 )
    {
      RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
      v4 = LdrpDetourExist;
      if ( LdrpDetourExist && a1 != 1 )
      {
        if ( LdrpWorkInProgress == a1 )
        {
          LdrpWorkInProgress = 1;
          v2 = 1;
        }
        v5 = &LdrpWorkQueue;
        goto LABEL_16;
      }
      v5 = (__int64 *)LdrpWorkQueue;
      if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue
        || (v6 = *(_QWORD *)LdrpWorkQueue, *(_QWORD *)(*(_QWORD *)LdrpWorkQueue + 8LL) != LdrpWorkQueue) )
      {
        __fastfail(3u);
      }
      LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
      *(_QWORD *)(v6 + 8) = &LdrpWorkQueue;
      if ( &LdrpWorkQueue == v5 )
        break;
      if ( !v4 )
        ++LdrpWorkInProgress;
      LdrpUpdateStatistics();
LABEL_16:
      RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
      if ( v2 )
        goto LABEL_9;
      if ( &LdrpWorkQueue == v5 )
        NtWaitForSingleObject(v1, 0, 0LL);
      else
        LdrpProcessWork((_BYTE)v5 - 64);
    }
    if ( LdrpWorkInProgress != a1 )
      goto LABEL_16;
    LdrpWorkInProgress = 1;
    RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
LABEL_9:
    if ( !a1 || (__int64 *)LdrpRetryQueue == &LdrpRetryQueue )
      break;
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v8 = LdrpRetryQueue;
    *(_QWORD *)(LdrpRetryQueue + 8) = &LdrpWorkQueue;
    LdrpWorkQueue = v8;
    v9 = qword_1801CB648;
    *(_QWORD *)qword_1801CB648 = &LdrpWorkQueue;
    qword_1801CB698 = v9;
    qword_1801CB648 = (__int64)&LdrpRetryQueue;
    LdrpRetryQueue = (__int64)&LdrpRetryQueue;
    LdrpRetryingModuleIndex = 0LL;
    RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    v2 = 0;
  }
  result = NtCurrentTeb();
  result->SameTebFlags |= 0x1000u;
  return result;
}
