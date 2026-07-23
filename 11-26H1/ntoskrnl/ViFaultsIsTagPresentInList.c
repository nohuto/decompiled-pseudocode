/*
 * XREFs of ViFaultsIsTagPresentInList @ 0x140C3AFB8
 * Callers:
 *     VfFaultsInjectPoolAllocationFailure @ 0x140C3A6F4 (VfFaultsInjectPoolAllocationFailure.c)
 *     ViFaultsAddTagNoDuplicates @ 0x140C3ADAC (ViFaultsAddTagNoDuplicates.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x14042D60C (ExCheckSingleFilter.c)
 */

__int64 __fastcall ViFaultsIsTagPresentInList(int a1)
{
  PVOID *v1; // r8
  int v2; // r10d
  unsigned int v3; // r9d
  PVOID *v4; // r8

  v1 = (PVOID *)ViFaultTagsList;
  v2 = a1;
  v3 = 0;
  while ( v1 != &ViFaultTagsList )
  {
    if ( (unsigned int)ExCheckSingleFilter(v2, *((_DWORD *)v1 + 4)) )
      return 1;
    v1 = (PVOID *)*v4;
  }
  return v3;
}
