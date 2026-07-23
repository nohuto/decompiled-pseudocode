/*
 * XREFs of RtlDescribeChunk @ 0x140807250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall RtlDescribeChunk(
        USHORT CompressionFormat,
        PUCHAR *CompressedBuffer,
        PUCHAR EndOfCompressedBufferPlus1,
        PUCHAR *ChunkBuffer,
        PULONG ChunkSize)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat <= 8u )
    return guard_dispatch_icall_no_overrides((__int64)CompressedBuffer, (__int64)EndOfCompressedBufferPlus1);
  return -1073741217;
}
