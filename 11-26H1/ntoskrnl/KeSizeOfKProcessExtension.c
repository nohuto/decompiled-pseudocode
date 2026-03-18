/*
 * XREFs of KeSizeOfKProcessExtension @ 0x1404D80E0
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 * Callees:
 *     KiAbComputeAutoBoostProcessStateSize @ 0x1404D8114 (KiAbComputeAutoBoostProcessStateSize.c)
 */

__int64 __fastcall KeSizeOfKProcessExtension(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx

  v1 = 24LL * (unsigned __int16)KiMaximumGroups + 616;
  if ( (a1 & 4) != 0 )
  {
    v2 = KiAbComputeAutoBoostProcessStateSize(a1, v1);
    return v2 + v3;
  }
  return v1;
}
