/*
 * XREFs of ExHeapLookasideRebalance @ 0x140428AE0
 * Callers:
 *     ExpScanSystemLookasideList @ 0x14042894C (ExpScanSystemLookasideList.c)
 *     ?ExpLookasideMgrGeneralWorkerRoutine@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER@@@Z @ 0x140B47830 (-ExpLookasideMgrGeneralWorkerRoutine@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER@@@Z.c)
 * Callees:
 *     RtlpDynamicLookasideRebalance @ 0x140428B9C (RtlpDynamicLookasideRebalance.c)
 *     ExpPoolMgrScheduleLookasideRebalance @ 0x140428D8C (ExpPoolMgrScheduleLookasideRebalance.c)
 */

__int64 ExHeapLookasideRebalance()
{
  unsigned int i; // ebx
  __int64 v1; // rsi
  void **v2; // rdi

  for ( i = 0; i < HIDWORD(stru_140E6BFE8.Header.WaitListHead.Flink); ++i )
  {
    v1 = 2LL;
    v2 = &stru_140E6BFE8.KernelStack + 1048 * i;
    do
    {
      RtlpDynamicLookasideRebalance(v2);
      v2 += 520;
      --v1;
    }
    while ( v1 );
  }
  return ExpPoolMgrScheduleLookasideRebalance(&dword_140E6BF60);
}
