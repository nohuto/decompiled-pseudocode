/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x140437260
 * Callers:
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     PsIsSessionInCurrentServerSilo @ 0x140435678 (PsIsSessionInCurrentServerSilo.c)
 *     PopPowerRequestCreateCommon @ 0x140436FDC (PopPowerRequestCreateCommon.c)
 *     IoGetContainerInformation @ 0x1407971E0 (IoGetContainerInformation.c)
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     NtSetInformationObject @ 0x140970880 (NtSetInformationObject.c)
 *     PfpProcessScenarioPhase @ 0x140B1CEB8 (PfpProcessScenarioPhase.c)
 *     EtwpWriteUserEvent @ 0x140B7D098 (EtwpWriteUserEvent.c)
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
