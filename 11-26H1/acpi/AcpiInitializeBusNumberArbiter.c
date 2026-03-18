/*
 * XREFs of AcpiInitializeBusNumberArbiter @ 0x1400AE568
 * Callers:
 *     AcpiArblibInitializeArbiter @ 0x1400555EC (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     ArbInitializeArbiterInstance @ 0x1400AA02C (ArbInitializeArbiterInstance.c)
 */

__int64 __fastcall AcpiInitializeBusNumberArbiter(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9

  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(a1 + 256), (__int64)AcpiArblibUnpackRequirement);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v1 + 128), (__int64)AcpiArblibPackResource);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v2 + 136), (__int64)AcpiArblibUnpackResource);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v3 + 144), (__int64)AcpiArblibScoreRequirement);
  return ArbInitializeArbiterInstance(v5, *(_QWORD *)(v4 + 768), 6, v6);
}
