/*
 * XREFs of RtlpGetModifiedProcessCookie @ 0x1800CFEE4
 * Callers:
 *     RtlpReportHeapFailure @ 0x1800CFA0C (RtlpReportHeapFailure.c)
 *     RtlInitializeHeapManager @ 0x1800CFAEC (RtlInitializeHeapManager.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18015F160 (NtQueryInformationProcess.c)
 */

unsigned __int64 RtlpGetModifiedProcessCookie()
{
  unsigned int ProcessInformation; // [rsp+40h] [rbp+8h] BYREF

  ProcessInformation = 0;
  if ( NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL) < 0 )
    return 0LL;
  else
    return (2147483629 * (unsigned __int64)ProcessInformation + 2147483587) % 0x7FFFFFFF;
}
