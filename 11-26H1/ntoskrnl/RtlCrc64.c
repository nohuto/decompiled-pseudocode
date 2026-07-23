/*
 * XREFs of RtlCrc64 @ 0x140481410
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x140481430 (RtlpComputeCrcInternal.c)
 */

ULONGLONG __cdecl RtlCrc64(const void *Buffer, size_t Size, ULONGLONG InitialCrc)
{
  return RtlpComputeCrcInternal(Buffer, Size, InitialCrc, &Crc64Ctrl);
}
