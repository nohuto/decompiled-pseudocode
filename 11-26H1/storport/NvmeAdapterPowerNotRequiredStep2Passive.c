/*
 * XREFs of NvmeAdapterPowerNotRequiredStep2Passive @ 0x1401249A0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterPowerNotRequiredStep2 @ 0x1401247B4 (NvmeAdapterPowerNotRequiredStep2.c)
 */

void __fastcall NvmeAdapterPowerNotRequiredStep2Passive(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _InterlockedExchange((volatile __int32 *)(Context[20] + 232LL), 0);
  NvmeAdapterPowerNotRequiredStep2(Context);
}
