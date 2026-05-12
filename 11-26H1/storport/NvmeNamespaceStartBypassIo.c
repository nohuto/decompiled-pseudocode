/*
 * XREFs of NvmeNamespaceStartBypassIo @ 0x140113AE0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceIoIrp @ 0x14001F8E0 (NvmeNamespaceIoIrp.c)
 *     GetNvmeNamespace @ 0x14005CC1C (GetNvmeNamespace.c)
 */

__int64 __fastcall NvmeNamespaceStartBypassIo(__int64 a1)
{
  _DWORD *NvmeNamespace; // rax
  IRP *v2; // rdx

  NvmeNamespace = GetNvmeNamespace(a1);
  return NvmeNamespaceIoIrp((__int64)NvmeNamespace, v2);
}
