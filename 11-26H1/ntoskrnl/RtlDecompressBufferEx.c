/*
 * XREFs of RtlDecompressBufferEx @ 0x140463B30
 * Callers:
 *     SmStoreDecompressBuffer @ 0x140392390 (SmStoreDecompressBuffer.c)
 *     SmDecompressBuffer @ 0x140463934 (SmDecompressBuffer.c)
 *     QatSubmitWorkToCpu @ 0x1406E5330 (QatSubmitWorkToCpu.c)
 *     IaaSubmitWorkToCpu @ 0x1406E59C8 (IaaSubmitWorkToCpu.c)
 *     PopDecompressHiberBlocks @ 0x140C002A4 (PopDecompressHiberBlocks.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __cdecl RtlDecompressBufferEx(
        USHORT CompressionFormat,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PULONG FinalUncompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat > 8u )
    return -1073741217;
  return guard_dispatch_icall_no_overrides(UncompressedBuffer, UncompressedBufferSize);
}
