/*
 * XREFs of KeQueryPrimaryGroupThread @ 0x1404BE49C
 * Callers:
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     NtCreateProfile @ 0x1408425B0 (NtCreateProfile.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     NtQuerySystemInformation @ 0x140B144F0 (NtQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryPrimaryGroupThread(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 584);
}
