/*
 * XREFs of NvmeNamespaceTelemetryDelete @ 0x140115150
 * Callers:
 *     NvmeControllerCreateNvmeNamespace @ 0x140100594 (NvmeControllerCreateNvmeNamespace.c)
 *     NvmeControllerDeleteNvmeNamespace @ 0x140100A2C (NvmeControllerDeleteNvmeNamespace.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNamespaceTelemetryDelete(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 608);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4D4E6152u);
    *(_QWORD *)(a1 + 608) = 0LL;
  }
}
