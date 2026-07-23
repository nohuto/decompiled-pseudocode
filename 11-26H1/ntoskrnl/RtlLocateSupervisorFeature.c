/*
 * XREFs of RtlLocateSupervisorFeature @ 0x1403D7660
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateExtendedOrSupervisorFeature @ 0x1403D7C80 (RtlpLocateExtendedOrSupervisorFeature.c)
 */

PVOID __cdecl RtlLocateSupervisorFeature(PXSAVE_AREA_HEADER XStateHeader, ULONG FeatureId, PULONG Length)
{
  return (PVOID)RtlpLocateExtendedOrSupervisorFeature(XStateHeader, FeatureId);
}
