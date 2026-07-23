/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x140534FC4
 * Callers:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x140459FE8 (RtlStringCbPrintfExW.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset_0(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
