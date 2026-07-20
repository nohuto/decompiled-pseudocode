/*
 * XREFs of RtlStringCchLengthW @ 0x14001D37C
 * Callers:
 *     BasepGetDirectoryRedirectionStatus @ 0x14001CD48 (BasepGetDirectoryRedirectionStatus.c)
 *     NtPnpInitializeInputPropertyData @ 0x14001E31C (NtPnpInitializeInputPropertyData.c)
 *     NtPnpOpenDeviceInterfaceKey @ 0x14001E4A8 (NtPnpOpenDeviceInterfaceKey.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x14001D414 (RtlStringLengthWorkerW.c)
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
