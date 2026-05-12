/*
 * XREFs of NvmeAdapterDirectedPowerDownRequestD3Passive @ 0x1401235B0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterDirectedPowerDownRequestD3 @ 0x1401233A0 (NvmeAdapterDirectedPowerDownRequestD3.c)
 */

void __fastcall NvmeAdapterDirectedPowerDownRequestD3Passive(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _InterlockedExchange((volatile __int32 *)(Context[20] + 232LL), 0);
  NvmeAdapterDirectedPowerDownRequestD3((__int64)Context);
}
