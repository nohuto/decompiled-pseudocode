/*
 * XREFs of AslpPathWildcardFreeMatchNode @ 0x1800A0AF4
 * Callers:
 *     AslPathWildcardFindFirst @ 0x18009F358 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x18009F90C (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1800A0760 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x1800A09FC (AslpPathWildcardFreeFindContext.c)
 * Callees:
 *     AslFree @ 0x180098D34 (AslFree.c)
 */

char __fastcall AslpPathWildcardFreeMatchNode(_QWORD *a1)
{
  void *v2; // rcx
  char result; // al
  void *v4; // rdx

  if ( a1 )
  {
    v2 = (void *)a1[3];
    if ( v2 )
    {
      result = ZwClose(v2);
      a1[3] = 0LL;
    }
    v4 = (void *)a1[1];
    if ( v4 )
    {
      result = AslFree(NtCurrentPeb()->ProcessHeap, v4);
      a1[1] = 0LL;
    }
    a1[2] = 0LL;
  }
  return result;
}
