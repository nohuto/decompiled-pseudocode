/*
 * XREFs of NtRIMReadInput @ 0x1400967D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMReadInput @ 0x1400979E0 (RIMReadInput.c)
 */

__int64 __fastcall NtRIMReadInput(void *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  return RIMReadInput(a1, 1, a5, a6, a7);
}
