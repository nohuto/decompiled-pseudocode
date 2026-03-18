/*
 * XREFs of InitializeTelemetryAssertsKMByName @ 0x14014AC30
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x14014AC88 (InitializeTelemetryAssertsKMWorkerInternal.c)
 */

__int64 InitializeTelemetryAssertsKMByName()
{
  struct _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING v2; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return 0LL;
  RtlInitAnsiString(&DestinationString, "win32kbase.sys");
  v2 = DestinationString;
  return InitializeTelemetryAssertsKMWorkerInternal(&v2);
}
