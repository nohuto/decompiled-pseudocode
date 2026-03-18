/*
 * XREFs of RtlLocateSupervisorFeature @ 0x1403D4690
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLocateExtendedOrSupervisorFeature @ 0x1403D4CB0 (RtlpLocateExtendedOrSupervisorFeature.c)
 */

__int64 __fastcall RtlLocateSupervisorFeature(__int64 a1, __int64 a2)
{
  return RtlpLocateExtendedOrSupervisorFeature(a1, a2);
}
