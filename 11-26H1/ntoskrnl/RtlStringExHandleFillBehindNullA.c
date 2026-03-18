/*
 * XREFs of RtlStringExHandleFillBehindNullA @ 0x140576830
 * Callers:
 *     RtlStringCbPrintfExA @ 0x14057669C (RtlStringCbPrintfExA.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

NTSTATUS __stdcall RtlStringExHandleFillBehindNullA(NTSTRSAFE_PSTR pszDestEnd, size_t cbRemaining, ULONG dwFlags)
{
  if ( cbRemaining > 1 )
    memset_0(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 1);
  return 0;
}
