/*
 * XREFs of KeIsUserCetAllowed @ 0x1404D6B7C
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

bool KeIsUserCetAllowed()
{
  return KiUserCetAllowed != 0;
}
