/*
 * XREFs of PpmPerfQueryPackageId @ 0x140606BE0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageId(unsigned int a1)
{
  return *(unsigned int *)(KeGetPrcb(a1) + 36456);
}
