/*
 * XREFs of RtlDecompressBufferEx @ 0x14046A3B0
 * Callers:
 *     SmStoreDecompressBuffer @ 0x1403905E0 (SmStoreDecompressBuffer.c)
 *     SmDecompressBuffer @ 0x14046A1B4 (SmDecompressBuffer.c)
 *     QatSubmitWorkToCpu @ 0x1406E10B0 (QatSubmitWorkToCpu.c)
 *     IaaSubmitWorkToCpu @ 0x1406E1748 (IaaSubmitWorkToCpu.c)
 *     PopDecompressHiberBlocks @ 0x140BFA2A4 (PopDecompressHiberBlocks.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlDecompressBufferEx(unsigned __int8 a1, __int64 a2, unsigned int a3)
{
  if ( a1 < 2u )
    return 3221225485LL;
  if ( a1 > 8u )
    return 3221226079LL;
  return guard_dispatch_icall_no_overrides(a2, a3);
}
