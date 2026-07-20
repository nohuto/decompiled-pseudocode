/*
 * XREFs of RtlStringCchCopyW @ 0x14001D33C
 * Callers:
 *     BasepGetDirectoryRedirectionStatus @ 0x14001CD48 (BasepGetDirectoryRedirectionStatus.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x14001D3B8 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS result; // eax

  if ( cchDest - 1 <= 0x7FFFFFFE )
    return RtlStringCopyWorkerW(pszDest, cchDest, (size_t *)pszSrc, pszSrc, 0x7FFFFFFEuLL);
  result = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
