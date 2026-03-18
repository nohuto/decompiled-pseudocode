/*
 * XREFs of WheapSetDefaultErrorSourceConfiguration @ 0x140C33768
 * Callers:
 *     WheaInitializeServices @ 0x140C33394 (WheaInitializeServices.c)
 * Callees:
 *     <none>
 */

__int64 WheapSetDefaultErrorSourceConfiguration()
{
  __int64 result; // rax
  __int64 v1; // rcx

  result = 0LL;
  v1 = 19LL;
  do
  {
    *(_QWORD *)((char *)&WheapSourceConfiguration + result) = 0LL;
    *(_QWORD *)((char *)&WheapSourceConfigOverride + result) = 0LL;
    *(_QWORD *)((char *)&unk_140EEEAC0 + result) = PdcCreateWatchdogAroundClientCall;
    *(_QWORD *)((char *)&unk_140EEEAC8 + result) = xHalPciEarlyRestore;
    *(_QWORD *)((char *)&unk_140EEEAD0 + result) = WheapDefaultErrSrcCreateRecord;
    *(_QWORD *)((char *)&unk_140EEEAD8 + result) = PdcCreateWatchdogAroundClientCall;
    *(_QWORD *)((char *)&unk_140EEEAE0 + result) = xHalTimerWatchdogStop;
    *(_QWORD *)((char *)&unk_140EEEAE8 + result) = 0LL;
    *(_QWORD *)((char *)&unk_140EEEFB0 + result) = PdcCreateWatchdogAroundClientCall;
    *(_QWORD *)((char *)&unk_140EEEFB8 + result) = xHalPciEarlyRestore;
    *(_QWORD *)((char *)&unk_140EEEFC0 + result) = WheapDefaultErrSrcCreateRecord;
    *(_QWORD *)((char *)&unk_140EEEFC8 + result) = PdcCreateWatchdogAroundClientCall;
    *(_QWORD *)((char *)&unk_140EEEFD0 + result) = xHalTimerWatchdogStop;
    *(_QWORD *)((char *)&unk_140EEEFD8 + result) = 0LL;
    result += 64LL;
    --v1;
  }
  while ( v1 );
  WheapConfigTableLock = 0LL;
  return result;
}
