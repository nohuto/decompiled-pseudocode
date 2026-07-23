/*
 * XREFs of RtlWow64GetCpuAreaEnabledFeatures @ 0x1800CA750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWow64GetCpuAreaEnabledFeatures(_DWORD *a1)
{
  __int64 v1; // rdx

  if ( (*a1 & 0x10000) == 0 )
    return 0LL;
  v1 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x40000000000001FCLL;
  if ( v1 )
    *a1 |= 0x10040u;
  return v1;
}
