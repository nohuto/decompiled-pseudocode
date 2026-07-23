/*
 * XREFs of PsGetEffectiveServerSilo @ 0x140216B30
 * Callers:
 *     EtwTracePageFault @ 0x1402162F0 (EtwTracePageFault.c)
 *     EtwpTraceMessageVa @ 0x1402179E0 (EtwpTraceMessageVa.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1402FAF10 (RtlpUpcaseUnicodeStringPrivate.c)
 *     PsGetJobServerSilo @ 0x1404F22F0 (PsGetJobServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x1406178B0 (PspIsSiloInServerSilo.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407C5AAC (ObpCreateDosDevicesDirectory.c)
 *     PspImplicitAssignProcessToJob @ 0x140946FB8 (PspImplicitAssignProcessToJob.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     PspGetCpuAndMemoryPartitionImplicit @ 0x140AAC5A4 (PspGetCpuAndMemoryPartitionImplicit.c)
 *     PspEstimateNewProcessServerSilo @ 0x140AE0144 (PspEstimateNewProcessServerSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140AF36D0 (PspValidateJobAssignmentSiloPolicy.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 */

__int64 __fastcall PsGetEffectiveServerSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  if ( !(unsigned __int8)PsIsServerSilo(a1) )
  {
    while ( !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(v2 + 1304)) )
      ;
  }
  return v2;
}
