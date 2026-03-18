/*
 * XREFs of ArbFreeOrderingList @ 0x1400A998C
 * Callers:
 *     ArbDeleteArbiterInstance @ 0x1400BF0A4 (ArbDeleteArbiterInstance.c)
 *     ArbBuildAssignmentOrdering @ 0x1400D17D0 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     <none>
 */

void __fastcall ArbFreeOrderingList(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
}
