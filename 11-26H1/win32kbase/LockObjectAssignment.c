/*
 * XREFs of LockObjectAssignment @ 0x1400BC070
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x140094AC0 (HMChangeOwnerThreadWorker.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall LockObjectAssignment(void **a1, void *a2)
{
  void *v2; // rdi
  LONG_PTR result; // rax

  v2 = *a1;
  if ( a2 )
    result = ObfReferenceObject(a2);
  *a1 = a2;
  if ( v2 )
    return ObfDereferenceObject(v2);
  return result;
}
