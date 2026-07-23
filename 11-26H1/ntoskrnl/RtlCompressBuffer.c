/*
 * XREFs of RtlCompressBuffer @ 0x140463C00
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140210F70 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmStoreCompressBuffer @ 0x14024CEF0 (SmStoreCompressBuffer.c)
 *     EtwpCompressBuffer @ 0x1406CB9B4 (EtwpCompressBuffer.c)
 *     QatSubmitWorkToCpu @ 0x1406E5330 (QatSubmitWorkToCpu.c)
 *     IaaSubmitWorkToCpu @ 0x1406E59C8 (IaaSubmitWorkToCpu.c)
 *     RtlCompressChunks @ 0x140806DD0 (RtlCompressChunks.c)
 *     EtwpWriteBufferCompressed @ 0x140835324 (EtwpWriteBufferCompressed.c)
 *     PopAddPagesToCompressedPageSet @ 0x140BFF9B4 (PopAddPagesToCompressedPageSet.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
