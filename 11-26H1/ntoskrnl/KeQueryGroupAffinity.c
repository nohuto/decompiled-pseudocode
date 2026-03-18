/*
 * XREFs of KeQueryGroupAffinity @ 0x14049AF50
 * Callers:
 *     PpmEnableWmiInterface @ 0x1407D9F28 (PpmEnableWmiInterface.c)
 *     EtwpProcessorRundown @ 0x14082FBE8 (EtwpProcessorRundown.c)
 *     NtCreateProfile @ 0x1408425B0 (NtCreateProfile.c)
 *     PopProcessorInformation @ 0x140A843AC (PopProcessorInformation.c)
 *     MiCaptureImageHeaderFieldsForPeb @ 0x140ACAAB8 (MiCaptureImageHeaderFieldsForPeb.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140B21C4C (PpmEventTraceProcessorPerformanceDomainRundown.c)
 * Callees:
 *     <none>
 */

KAFFINITY __stdcall KeQueryGroupAffinity(USHORT GroupNumber)
{
  if ( GroupNumber >= *(_WORD *)&stru_140FC01F0.WaitRegister.Flags )
    return 0LL;
  else
    return *(KAFFINITY *)((char *)&stru_140FC01F0.116 + 8 * GroupNumber + 4);
}
