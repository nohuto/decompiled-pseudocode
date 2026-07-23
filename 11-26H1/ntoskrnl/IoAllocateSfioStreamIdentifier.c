/*
 * XREFs of IoAllocateSfioStreamIdentifier @ 0x1405CD660
 * Callers:
 *     <none>
 * Callees:
 *     IopGetSetStreamIdentifier @ 0x14044D388 (IopGetSetStreamIdentifier.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall IoAllocateSfioStreamIdentifier(
        PFILE_OBJECT FileObject,
        ULONG Length,
        PVOID Signature,
        PVOID *StreamIdentifier)
{
  if ( !FileObject )
    return -1073741585;
  if ( Length - 1 > 0xFFFFFFDE )
    return -1073741584;
  if ( Signature )
    return IopGetSetStreamIdentifier((__int64)FileObject, *(__int64 *)&Length, (__int64)Signature, StreamIdentifier, 1);
  return -1073741583;
}
