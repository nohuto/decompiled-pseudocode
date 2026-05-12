/*
 * XREFs of StorpUninitializePerUnitIoSizeDistribution @ 0x1400C43D8
 * Callers:
 *     StorpUninitializePerUnitPerfTelemetry @ 0x1400C4448 (StorpUninitializePerUnitPerfTelemetry.c)
 *     StorpInitializePerUnitIoSizeDistribution @ 0x14018FEF4 (StorpInitializePerUnitIoSizeDistribution.c)
 * Callees:
 *     <none>
 */

void __fastcall StorpUninitializePerUnitIoSizeDistribution(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_BYTE *)(a1 + 507) &= ~0x10u;
  v2 = *(void **)(a1 + 2384);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    *(_QWORD *)(a1 + 2384) = 0LL;
  }
  v3 = *(void **)(a1 + 2408);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    *(_QWORD *)(a1 + 2408) = 0LL;
  }
}
