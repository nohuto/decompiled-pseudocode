/*
 * XREFs of CcInitializeVacbs @ 0x140CB5AFC
 * Callers:
 *     CcInitializeCacheManager @ 0x140C7F4E8 (CcInitializeCacheManager.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 */

_SINGLE_LIST_ENTRY *CcInitializeVacbs()
{
  _SINGLE_LIST_ENTRY *result; // rax

  *(_DWORD *)&EmpParseLock.PriorityFloorCounts[12] = 0;
  *(_DWORD *)&EmpParseLock.PriorityFloorCounts[8] = 0;
  *(_QWORD *)&EmpParseLock.AbWaitEntryCount = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x2800uLL, 0x61566343u);
  if ( !*(_QWORD *)&EmpParseLock.AbWaitEntryCount )
    KeBugCheckEx(0x34u, 0x90493uLL, 0xFFFFFFFFC000009AuLL, 0LL, 0LL);
  result = &EmpParseLock.PropagateBoostsEntry;
  *(_DWORD *)EmpParseLock.PriorityFloorCounts = 128;
  EmpParseLock.IoSelfBoostsEntry.Next = &EmpParseLock.PropagateBoostsEntry;
  EmpParseLock.PropagateBoostsEntry.Next = &EmpParseLock.PropagateBoostsEntry;
  return result;
}
