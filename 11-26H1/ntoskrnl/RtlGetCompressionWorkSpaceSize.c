/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1403F4090
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403F3DE0 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x14063C5B0 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSI.c)
 *     AccelpSiovIaaGetCompressionWorkspaceSize @ 0x1406DFF10 (AccelpSiovIaaGetCompressionWorkspaceSize.c)
 *     AccelpQatGetCompressionWorkspaceSize @ 0x1406E0E9C (AccelpQatGetCompressionWorkspaceSize.c)
 *     EtwpInitializeCompressedWriter @ 0x14082E2E0 (EtwpInitializeCompressedWriter.c)
 *     PopHiberInitializeResources @ 0x140B2A4B4 (PopHiberInitializeResources.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlGetCompressionWorkSpaceSize(
        USHORT CompressionFormatAndEngine,
        PULONG CompressBufferWorkSpaceSize,
        PULONG CompressFragmentWorkSpaceSize)
{
  __int64 v3; // rcx

  if ( !(_BYTE)CompressionFormatAndEngine || (unsigned __int8)CompressionFormatAndEngine == 1 )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 8u )
    return -1073741217;
  LOWORD(v3) = CompressionFormatAndEngine & 0xFF00;
  return guard_dispatch_icall_no_overrides(v3, CompressBufferWorkSpaceSize);
}
