/*
 * XREFs of PsGetSessionSchedulingGroup @ 0x14077E31C
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1406178F8 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
