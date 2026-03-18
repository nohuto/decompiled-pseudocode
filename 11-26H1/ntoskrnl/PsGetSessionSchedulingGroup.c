/*
 * XREFs of PsGetSessionSchedulingGroup @ 0x14077B6DC
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x140614AB8 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
