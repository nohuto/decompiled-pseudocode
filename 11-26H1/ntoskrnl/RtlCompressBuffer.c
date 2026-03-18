/*
 * XREFs of RtlCompressBuffer @ 0x14046A480
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140210E90 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmStoreCompressBuffer @ 0x14024B590 (SmStoreCompressBuffer.c)
 *     EtwpCompressBuffer @ 0x1406C79D4 (EtwpCompressBuffer.c)
 *     QatSubmitWorkToCpu @ 0x1406E10B0 (QatSubmitWorkToCpu.c)
 *     IaaSubmitWorkToCpu @ 0x1406E1748 (IaaSubmitWorkToCpu.c)
 *     RtlCompressChunks @ 0x140801330 (RtlCompressChunks.c)
 *     EtwpWriteBufferCompressed @ 0x14082F0E4 (EtwpWriteBufferCompressed.c)
 *     PopAddPagesToCompressedPageSet @ 0x140BF99B4 (PopAddPagesToCompressedPageSet.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall RtlCompressBuffer(
        USHORT CompressionFormatAndEngine,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG UncompressedChunkSize,
        PULONG FinalCompressedSize,
        PVOID WorkSpace)
{
  if ( !(_BYTE)CompressionFormatAndEngine || (unsigned __int8)CompressionFormatAndEngine == 1 )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 8u )
    return -1073741217;
  return guard_dispatch_icall_no_overrides(CompressionFormatAndEngine & 0xFF00, UncompressedBuffer);
}
