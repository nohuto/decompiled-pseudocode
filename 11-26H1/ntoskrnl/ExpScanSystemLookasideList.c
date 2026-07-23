/*
 * XREFs of ExpScanSystemLookasideList @ 0x14042894C
 * Callers:
 *     KeBalanceSetManager @ 0x1405FA400 (KeBalanceSetManager.c)
 * Callees:
 *     ExpComputeLookasideDepth @ 0x140428A30 (ExpComputeLookasideDepth.c)
 *     ExHeapLookasideRebalance @ 0x140428AE0 (ExHeapLookasideRebalance.c)
 */

__int64 ExpScanSystemLookasideList()
{
  __int64 v0; // rbx
  unsigned int v1; // esi
  _GENERAL_LOOKASIDE **p_L; // rdi
  _GENERAL_LOOKASIDE *v3; // rcx
  __int64 v4; // rdx
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax

  v0 = 11LL;
  v1 = 3 * KeNumberProcessors_0;
  if ( ExpPoolScanCount == (_DWORD)KeNumberProcessors_0 )
  {
    p_L = &KeGetCurrentPrcb()->PPLookasideList[0].L;
    do
    {
      v3 = *p_L;
      if ( *p_L )
      {
        v4 = v3->AllocateMisses - v3->LastAllocateMisses;
        v3->LastAllocateMisses = v3->AllocateMisses;
        ExpComputeLookasideDepth(v3, v4, v1);
      }
      p_L += 2;
      --v0;
    }
    while ( v0 );
  }
  else
  {
    v5 = (__int64 *)(KiProcessorBlock[ExpPoolScanCount] + 2112);
    do
    {
      v6 = *v5;
      if ( *v5 )
      {
        v7 = (unsigned int)(*(_DWORD *)(v6 + 24) - *(_DWORD *)(v6 + 84));
        *(_DWORD *)(v6 + 84) = *(_DWORD *)(v6 + 24);
        ExpComputeLookasideDepth(v6, v7, v1);
      }
      v5 += 2;
      --v0;
    }
    while ( v0 );
  }
  ExHeapLookasideRebalance();
  ++ExpPoolScanCount;
  result = (unsigned int)KeNumberProcessors_0;
  if ( ExpPoolScanCount > (unsigned int)KeNumberProcessors_0 )
    ExpPoolScanCount = 0;
  return result;
}
