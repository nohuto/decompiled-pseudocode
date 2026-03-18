/*
 * XREFs of RtlDecompressBuffer @ 0x140494B10
 * Callers:
 *     RtlDecompressChunks @ 0x1408014A0 (RtlDecompressChunks.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall RtlDecompressBuffer(
        USHORT CompressionFormat,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PULONG FinalUncompressedSize)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat > 8u )
    return -1073741217;
  return guard_dispatch_icall_no_overrides(UncompressedBuffer, UncompressedBufferSize);
}
