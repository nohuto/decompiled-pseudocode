/*
 * XREFs of StorpUninitializeNvmeNamespaceTelemetry @ 0x1400C4278
 * Callers:
 *     NvmeNamespaceDeleteDeviceIrp @ 0x140102E64 (NvmeNamespaceDeleteDeviceIrp.c)
 *     NvmeNamespaceDisableDeviceIrp @ 0x140103A74 (NvmeNamespaceDisableDeviceIrp.c)
 *     NvmeNamespaceSurpriseRemovalIrp @ 0x1401AF2A0 (NvmeNamespaceSurpriseRemovalIrp.c)
 * Callees:
 *     StorpUninitializeNvmePerNamespacePerfTelemetry @ 0x1400C4328 (StorpUninitializeNvmePerNamespacePerfTelemetry.c)
 */

__int64 __fastcall StorpUninitializeNvmeNamespaceTelemetry(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  *(_DWORD *)(*(_QWORD *)(a1 + 608) + 4LL) &= ~2u;
  v1 = *(_QWORD *)(a1 + 608);
  result = *(unsigned int *)(v1 + 4);
  if ( (result & 1) != 0 )
  {
    *(_DWORD *)(v1 + 4) = result & 0xFFFFFFFE;
    return StorpUninitializeNvmePerNamespacePerfTelemetry(a1);
  }
  return result;
}
