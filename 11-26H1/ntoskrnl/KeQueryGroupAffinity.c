/*
 * XREFs of KeQueryGroupAffinity @ 0x140494AA0
 * Callers:
 *     PpmEnableWmiInterface @ 0x1407DDEC8 (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x140835E28 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x14084B650 (NtCreateProfile.c)
 *     PopProcessorInformation @ 0x140A89700 (PopProcessorInformation.c)
 *     MiCaptureImageHeaderFieldsForPeb @ 0x140ACCBC8 (MiCaptureImageHeaderFieldsForPeb.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140B2404C (PpmEventTraceProcessorPerformanceDomainRundown.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= *(_WORD *)&stru_140FC11F0.WaitRegister.Flags )
    return 0LL;
  else
    return *(KAFFINITY *)((char *)&stru_140FC11F0.116 + 8 * GroupNumber + 4);
}
