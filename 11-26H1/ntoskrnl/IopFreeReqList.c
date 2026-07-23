/*
 * XREFs of IopFreeReqList @ 0x1407A57BC
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1405DD704 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopAllocateBootResourcesInternal @ 0x1407A8B3C (IopAllocateBootResourcesInternal.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1407B6398 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopResourceRequirementsListToReqList @ 0x140B09240 (IopResourceRequirementsListToReqList.c)
 * Callees:
 *     IopFreeReqAlternative @ 0x1407787F4 (IopFreeReqAlternative.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeReqList(_QWORD *P)
{
  __int64 i; // rsi

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 8); i = (unsigned int)(i + 1) )
    {
      IopFreeReqAlternative(P[i + 5]);
      P[i + 5] = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
