/*
 * XREFs of KeQueryPrimaryGroupThread @ 0x1404B7CEC
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     NtCreateProfile @ 0x14084B650 (NtCreateProfile.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     NtQuerySystemInformation @ 0x140B168E0 (NtQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryPrimaryGroupThread(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 584);
}
