/*
 * XREFs of RtlStringExHandleFillBehindNullA @ 0x140578CE0
 * Callers:
 *     RtlStringCbPrintfExA @ 0x140578B4C (RtlStringCbPrintfExA.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullA(NTSTRSAFE_PSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 1 )
    memset_0(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 1);
  return 0;
}
