/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x140532B24
 * Callers:
 *     RtlStringCchPrintfExW @ 0x14044E030 (RtlStringCchPrintfExW.c)
 *     RtlStringCbPrintfExW @ 0x140460AA8 (RtlStringCbPrintfExW.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullW(NTSTRSAFE_PWSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 2 )
    memset_0(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
