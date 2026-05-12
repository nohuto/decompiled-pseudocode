/*
 * XREFs of StorpUninitializePerUnitPerfTelemetry @ 0x1400C4448
 * Callers:
 *     RaidUnitFreeResources @ 0x140011CBC (RaidUnitFreeResources.c)
 *     StorpInitializeUnitTelemetry @ 0x140057FB8 (StorpInitializeUnitTelemetry.c)
 *     StorpInitializePerUnitPerfTelemetry @ 0x14018FFC0 (StorpInitializePerUnitPerfTelemetry.c)
 * Callees:
 *     StorpUninitializePerUnitIoSizeDistribution @ 0x1400C43D8 (StorpUninitializePerUnitIoSizeDistribution.c)
 */

void __fastcall StorpUninitializePerUnitPerfTelemetry(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[297];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    a1[297] = 0LL;
  }
  v3 = (void *)a1[300];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    a1[300] = 0LL;
  }
  v4 = (void *)a1[302];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    a1[302] = 0LL;
  }
  StorpUninitializePerUnitIoSizeDistribution((__int64)a1);
}
