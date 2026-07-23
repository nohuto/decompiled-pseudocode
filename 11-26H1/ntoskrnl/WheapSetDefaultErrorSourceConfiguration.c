/*
 * XREFs of WheapSetDefaultErrorSourceConfiguration @ 0x140CEE77C
 * Callers:
 *     WheaInitializeServices @ 0x140CEE330 (WheaInitializeServices.c)
 * Callees:
 *     <none>
 */

unsigned __int64 WheapSetDefaultErrorSourceConfiguration()
{
  unsigned __int64 *p_QuantumTarget; // rdx
  unsigned __int64 result; // rax
  __int64 v2; // rcx

  p_QuantumTarget = &WheapInUsePageOfflineNotifyLock.QuantumTarget;
  result = 0LL;
  v2 = 19LL;
  do
  {
    (&WheapInUsePageOfflineNotifyLock.Header.WaitListHead.Flink)[result / 8] = 0LL;
    p_QuantumTarget += 8;
    *(_QWORD *)((char *)&WheapSourceConfigOverride + result) = 0LL;
    result += 64LL;
    *(p_QuantumTarget - 9) = (unsigned __int64)HalSystemVectorDispatchEntry;
    qword_140EEF118[result / 8] = (__int64)xHalPciEarlyRestore;
    *(_QWORD *)((char *)&unk_140EEF120 + result) = WheapDefaultErrSrcCreateRecord;
    *(_QWORD *)((char *)&unk_140EEF128 + result) = HalSystemVectorDispatchEntry;
    *(_QWORD *)&WheapInUsePageOfflineNotifyInit[result] = xHalTimerWatchdogStop;
    *(_QWORD *)((char *)&WheapInUsePageOfflineNotifyLock.Header.Lock + result) = 0LL;
    *(_QWORD *)&WheaDrsInitialized[result] = HalSystemVectorDispatchEntry;
    *(_QWORD *)((char *)&Feature_490991929__private_reporting + result) = xHalPciEarlyRestore;
    *(_QWORD *)&WheapDeferredEventTotalBytes[result / 4] = WheapDefaultErrSrcCreateRecord;
    *(_QWORD *)((char *)&Feature_3187405113__private_reporting + result) = HalSystemVectorDispatchEntry;
    *(_QWORD *)&WheapPrmInitialized[result] = xHalTimerWatchdogStop;
    *(_QWORD *)&algn_140EEF641[result + 7] = 0LL;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)&WheapConfigTableLock.Header.Lock = 0LL;
  return result;
}
