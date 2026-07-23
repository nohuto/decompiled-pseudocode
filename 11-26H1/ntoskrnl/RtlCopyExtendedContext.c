/*
 * XREFs of RtlCopyExtendedContext @ 0x14061DB30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyExtendedContext @ 0x14040BA10 (RtlpCopyExtendedContext.c)
 */

NTSTATUS __cdecl RtlCopyExtendedContext(PCONTEXT_EX Destination, ULONG ContextFlags, PCONTEXT_EX Source)
{
  return RtlpCopyExtendedContext(0, (__int64)Destination, 0LL, ContextFlags, (__int64)Source, 0LL);
}
