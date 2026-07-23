/*
 * XREFs of RtlCopyExtendedContext @ 0x180146290
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyExtendedContext @ 0x180146300 (RtlpCopyExtendedContext.c)
 */

NTSTATUS __cdecl RtlCopyExtendedContext(PCONTEXT_EX Destination, ULONG ContextFlags, PCONTEXT_EX Source)
{
  return RtlpCopyExtendedContext(
           (_DWORD)Destination,
           (_DWORD)Destination,
           (_DWORD)Source,
           ContextFlags,
           (__int64)Source);
}
