/*
 * XREFs of IopFreeReqList @ 0x1407A2C7C
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1405DAF04 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopAllocateBootResourcesInternal @ 0x1407A5F8C (IopAllocateBootResourcesInternal.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1407B3338 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopResourceRequirementsListToReqList @ 0x140B07110 (IopResourceRequirementsListToReqList.c)
 * Callees:
 *     IopFreeReqAlternative @ 0x1407757F4 (IopFreeReqAlternative.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
