/*
 * XREFs of AcpiInitializePortArbiter @ 0x1400B591C
 * Callers:
 *     AcpiArblibInitializeArbiter @ 0x1400555EC (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     ArbInitializeArbiterInstance @ 0x1400AA02C (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall AcpiInitializePortArbiter(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // r9

  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(a1 + 256), (__int64)AcpiArblibUnpackRequirement);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v1 + 128), (__int64)AcpiArblibPackResource);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v2 + 136), (__int64)AcpiArblibUnpackResource);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v3 + 144), (__int64)AcpiArblibScoreRequirement);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v4 + 248), (__int64)&AcpiPortarbFindSuitableRange);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v5 + 256), (__int64)AcpiPortarbAddAllocation);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v6 + 264), (__int64)AcpiPortarbBacktrackAllocation);
  return ArbInitializeArbiterInstance(v8, *(_QWORD *)(v7 + 768), 1, v9);
}
