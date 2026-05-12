/*
 * XREFs of NvmeNamespacePowerNotRequiredStep2Passive @ 0x1401286F0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespacePowerNotRequiredStep2 @ 0x1401284CC (NvmeNamespacePowerNotRequiredStep2.c)
 */

void __fastcall NvmeNamespacePowerNotRequiredStep2Passive(PDEVICE_OBJECT DeviceObject, char *Context)
{
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)Context + 16) + 160LL), 0);
  NvmeNamespacePowerNotRequiredStep2(Context);
}
