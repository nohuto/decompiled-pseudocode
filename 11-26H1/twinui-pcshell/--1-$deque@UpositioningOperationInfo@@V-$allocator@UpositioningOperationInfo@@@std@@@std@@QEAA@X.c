/*
 * XREFs of ??1?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@QEAA@XZ @ 0x1802C2734
 * Callers:
 *     ??1FullScreenPositioner@@UEAA@XZ @ 0x180086558 (--1FullScreenPositioner@@UEAA@XZ.c)
 *     ??1?$queue@UpositioningOperationInfo@@V?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@@std@@QEAA@XZ @ 0x1802C2728 (--1-$queue@UpositioningOperationInfo@@V-$deque@UpositioningOperationInfo@@V-$allocator@Uposition.c)
 * Callees:
 *     ?_Tidy@?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@AEAAXXZ @ 0x1802C2764 (-_Tidy@-$deque@UpositioningOperationInfo@@V-$allocator@UpositioningOperationInfo@@@std@@@std@@AE.c)
 */

void __fastcall std::deque<positioningOperationInfo>::~deque<positioningOperationInfo>(void **a1)
{
  void *v2; // rcx

  std::deque<positioningOperationInfo>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16>(v2, (struct std::nothrow_t *)0x10);
}
