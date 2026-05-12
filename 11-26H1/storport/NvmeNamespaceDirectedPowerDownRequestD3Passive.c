/*
 * XREFs of NvmeNamespaceDirectedPowerDownRequestD3Passive @ 0x140127BE0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceDirectedPowerDownRequestD3 @ 0x140127A0C (NvmeNamespaceDirectedPowerDownRequestD3.c)
 */

void __fastcall NvmeNamespaceDirectedPowerDownRequestD3Passive(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _InterlockedExchange((volatile __int32 *)(Context[16] + 160LL), 0);
  NvmeNamespaceDirectedPowerDownRequestD3(Context);
}
