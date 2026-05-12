/*
 * XREFs of NvmeNamespaceQueueRequest @ 0x14010C2DC
 * Callers:
 *     NvmeNamespaceCompleteNvmRequest @ 0x140102130 (NvmeNamespaceCompleteNvmRequest.c)
 *     NvmeNamespaceExecuteScsiSrb @ 0x140104C20 (NvmeNamespaceExecuteScsiSrb.c)
 *     NvmeNamespaceProcessRequest @ 0x140109418 (NvmeNamespaceProcessRequest.c)
 * Callees:
 *     NvmeNamespaceQueueIo @ 0x1400210B0 (NvmeNamespaceQueueIo.c)
 */

char __fastcall NvmeNamespaceQueueRequest(__int64 a1, __int64 a2, unsigned int a3)
{
  *(_BYTE *)(a2 + 141) = -87;
  return NvmeNamespaceQueueIo(a1, a2, a3);
}
