/*
 * XREFs of RtlStringCchLengthW @ 0x14001DA94
 * Callers:
 *     BasepGetDirectoryRedirectionStatus @ 0x14001D460 (BasepGetDirectoryRedirectionStatus.c)
 *     NtPnpInitializeInputPropertyData @ 0x14001EA00 (NtPnpInitializeInputPropertyData.c)
 *     NtPnpInitializeInputRegistryData @ 0x14001EAA8 (NtPnpInitializeInputRegistryData.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x14001DB28 (RtlStringLengthWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  NTSTATUS result; // eax

  if ( psz && cchMax <= 0x7FFFFFFF )
  {
    result = RtlStringLengthWorkerW(psz, cchMax, pcchLength);
    if ( result >= 0 )
      return result;
  }
  else
  {
    result = -1073741811;
  }
  if ( pcchLength )
    *pcchLength = 0LL;
  return result;
}
