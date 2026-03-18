/*
 * XREFs of CmpKeyNodeStackEntryCleanup @ 0x1409824E8
 * Callers:
 *     CmpKeyNodeStackEntryReset @ 0x140982104 (CmpKeyNodeStackEntryReset.c)
 *     CmpCleanupKeyNodeStack @ 0x140982470 (CmpCleanupKeyNodeStack.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryCleanup(__int64 *a1)
{
  unsigned int *v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1[2] )
  {
    v1 = (unsigned int *)(a1 + 3);
    v2 = *a1;
    if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(v2, (__int64)v1);
    else
      return HvpReleaseCellPaged(v2, v1);
  }
  return result;
}
