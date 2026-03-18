/*
 * XREFs of PsGetEffectiveServerSilo @ 0x140216800
 * Callers:
 *     EtwTracePageFault @ 0x140215FC0 (EtwTracePageFault.c)
 *     EtwpTraceMessageVa @ 0x1402176B0 (EtwpTraceMessageVa.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1403CFF00 (RtlpUpcaseUnicodeStringPrivate.c)
 *     PsGetJobServerSilo @ 0x1404F8CE0 (PsGetJobServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x140614A70 (PspIsSiloInServerSilo.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407C2A4C (ObpCreateDosDevicesDirectory.c)
 *     PspImplicitAssignProcessToJob @ 0x140984FA8 (PspImplicitAssignProcessToJob.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     PspGetCpuAndMemoryPartitionImplicit @ 0x140AAE944 (PspGetCpuAndMemoryPartitionImplicit.c)
 *     PspEstimateNewProcessServerSilo @ 0x140AE25C4 (PspEstimateNewProcessServerSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140AF0A90 (PspValidateJobAssignmentSiloPolicy.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216838 (PsIsServerSilo.c)
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
