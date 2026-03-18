/*
 * XREFs of WheapSetDefaultErrorSourceConfiguration @ 0x140CE83DC
 * Callers:
 *     WheaInitializeServices @ 0x140CE7F90 (WheaInitializeServices.c)
 * Callees:
 *     <none>
 */

unsigned __int64 WheapSetDefaultErrorSourceConfiguration()
{
  volatile unsigned __int64 *p_CycleTime; // rdx
  unsigned __int64 result; // rax
  __int64 v2; // rcx

  p_CycleTime = &WheapInUsePageOfflineNotifyLock.CycleTime;
  result = 0LL;
  v2 = 19LL;
  do
  {
    *(void *volatile *)((char *)&WheapInUsePageOfflineNotifyLock.StackLimit + result * 4) = 0LL;
    p_CycleTime += 8;
    *(_QWORD *)((char *)&WheapSourceConfigOverride + result * 4) = 0LL;
    result += 16LL;
    *((_QWORD *)p_CycleTime - 9) = HalSystemVectorDispatchEntry;
    (&WheapInUsePageOfflineNotifyLock.Header.WaitListHead.Flink)[result / 2] = (struct _LIST_ENTRY *)xHalPciEarlyRestore;
    (&WheapInUsePageOfflineNotifyLock.Header.WaitListHead.Blink)[result / 2] = (struct _LIST_ENTRY *)WheapDefaultErrSrcCreateRecord;
    *(void **)((char *)&WheapInUsePageOfflineNotifyLock.SListFaultAddress + result * 4) = HalSystemVectorDispatchEntry;
    *(unsigned __int64 *)((char *)&WheapInUsePageOfflineNotifyLock.QuantumTarget + result * 4) = (unsigned __int64)xHalTimerWatchdogStop;
    *(void **)((char *)&WheapInUsePageOfflineNotifyLock.InitialStack + result * 4) = 0LL;
    WheaPassiveDrsList[result / 2] = (__int64)HalSystemVectorDispatchEntry;
    WheaDrsList[result / 2] = (__int64)xHalPciEarlyRestore;
    *(_QWORD *)&WheaDrsItemsToProcess[result] = WheapDefaultErrSrcCreateRecord;
    *(_QWORD *)&WheaPassiveDrsItemsToProcess[result] = HalSystemVectorDispatchEntry;
    *(_QWORD *)&WheapDeferredEventTotalBytes[result] = xHalTimerWatchdogStop;
    *(_QWORD *)&algn_140EEF316[result * 4 + 2] = 0LL;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)&WheapConfigTableLock.Header.Lock = 0LL;
  return result * 4;
}
