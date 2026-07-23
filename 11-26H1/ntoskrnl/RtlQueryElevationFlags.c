/*
 * XREFs of RtlQueryElevationFlags @ 0x140AADFA0
 * Callers:
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     SeTokenCanImpersonate @ 0x140904C94 (SeTokenCanImpersonate.c)
 *     SeGetTokenDeviceMap @ 0x140A21DB8 (SeGetTokenDeviceMap.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryElevationFlags(PRTL_ELEVATION_FLAGS Flags)
{
  ULONG v1; // edx
  NTSTATUS result; // eax

  v1 = 0;
  Flags->Flags = 0;
  if ( (MEMORY[0xFFFFF780000002F0] & 2) != 0 )
  {
    v1 = 1;
    Flags->Flags = 1;
  }
  if ( (MEMORY[0xFFFFF780000002F0] & 4) != 0 )
  {
    v1 |= 2u;
    Flags->Flags = v1;
  }
  if ( (MEMORY[0xFFFFF780000002F0] & 8) != 0 )
  {
    v1 |= 4u;
    Flags->Flags = v1;
  }
  result = 0;
  Flags->Flags = v1 | ((MEMORY[0xFFFFF780000002F0] & 0x1000) != 0 ? 16 : 8);
  return result;
}
