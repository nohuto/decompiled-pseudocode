/*
 * XREFs of StorpInitializeNvmeControllerTelemetry @ 0x1400B7660
 * Callers:
 *     NvmeAdapterCreateNvmeController @ 0x1401A0988 (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     <none>
 */

void __fastcall StorpInitializeNvmeControllerTelemetry(__int64 a1)
{
  *(_DWORD *)(a1 + 936) &= 0xFFFFFFF8;
  *(_BYTE *)(a1 + 947) = 0;
}
