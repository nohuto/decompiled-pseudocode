/*
 * XREFs of CcInitializeVacbs @ 0x140CBBB3C
 * Callers:
 *     CcInitializeCacheManager @ 0x140C854E8 (CcInitializeCacheManager.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 */

unsigned __int8 *CcInitializeVacbs()
{
  unsigned __int8 *result; // rax

  LODWORD(EmpParseLock.IoSelfBoostsEntry.Next) = 0;
  HIDWORD(EmpParseLock.PropagateBoostsEntry.Next) = 0;
  EmpParseLock.SchedulerSharedSystemSlot = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x2800uLL, 0x61566343u);
  if ( !EmpParseLock.SchedulerSharedSystemSlot )
    KeBugCheckEx(0x34u, 0x90493uLL, 0xFFFFFFFFC000009AuLL, 0LL, 0LL);
  result = &EmpParseLock.PriorityFloorCounts[8];
  LODWORD(EmpParseLock.PropagateBoostsEntry.Next) = 128;
  *(_QWORD *)&EmpParseLock.PriorityFloorCounts[16] = &EmpParseLock.PriorityFloorCounts[8];
  *(_QWORD *)&EmpParseLock.PriorityFloorCounts[8] = &EmpParseLock.PriorityFloorCounts[8];
  return result;
}
