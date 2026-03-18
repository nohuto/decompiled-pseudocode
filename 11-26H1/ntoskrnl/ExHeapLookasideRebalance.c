/*
 * XREFs of ExHeapLookasideRebalance @ 0x140433A10
 * Callers:
 *     ExpScanSystemLookasideList @ 0x14043387C (ExpScanSystemLookasideList.c)
 *     ?ExpLookasideMgrGeneralWorkerRoutine@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER@@@Z @ 0x140B45800 (-ExpLookasideMgrGeneralWorkerRoutine@@YAXPEAU_EXP_LOOKASIDE_MGR_WORKER@@@Z.c)
 * Callees:
 *     RtlpDynamicLookasideRebalance @ 0x140433ACC (RtlpDynamicLookasideRebalance.c)
 *     ExpPoolMgrScheduleLookasideRebalance @ 0x140433CBC (ExpPoolMgrScheduleLookasideRebalance.c)
 */

__int64 ExHeapLookasideRebalance()
{
  unsigned int i; // ebx
  __int64 v1; // rsi
  void **v2; // rdi

  for ( i = 0; i < HIDWORD(stru_140E6BCE8.Header.WaitListHead.Flink); ++i )
  {
    v1 = 2LL;
    v2 = &stru_140E6BCE8.KernelStack + 1048 * i;
    do
    {
      RtlpDynamicLookasideRebalance(v2);
      v2 += 520;
      --v1;
    }
    while ( v1 );
  }
  return ExpPoolMgrScheduleLookasideRebalance(&dword_140E6BC60);
}
