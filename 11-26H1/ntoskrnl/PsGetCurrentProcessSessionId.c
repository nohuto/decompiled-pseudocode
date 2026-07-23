/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x1404261F0
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     PsIsSessionInCurrentServerSilo @ 0x140424C54 (PsIsSessionInCurrentServerSilo.c)
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 *     IoGetContainerInformation @ 0x140799D10 (IoGetContainerInformation.c)
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     NtSetInformationObject @ 0x1409BA9F0 (NtSetInformationObject.c)
 *     PfpProcessScenarioPhase @ 0x140B1F0C8 (PfpProcessScenarioPhase.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentProcessSessionId()
{
  _KPROCESS *Process; // rax
  unsigned __int64 CycleTime; // rcx
  unsigned int v3; // eax
  unsigned int v4; // ecx

  Process = KeGetCurrentThread()->ApcState.Process;
  CycleTime = Process[1].CycleTime;
  if ( !CycleTime || (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
    return 0LL;
  v3 = *(_DWORD *)(CycleTime + 8);
  v4 = 0;
  if ( v3 != -1 )
    return v3;
  return v4;
}
