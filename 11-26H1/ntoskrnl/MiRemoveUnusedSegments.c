/*
 * XREFs of MiRemoveUnusedSegments @ 0x1404A3280
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x1404A3320 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     MiDeleteZeroValueSegments @ 0x1404A33F4 (MiDeleteZeroValueSegments.c)
 *     MiDeleteCachedEntries @ 0x1404A3510 (MiDeleteCachedEntries.c)
 *     MiWakeCommitRequest @ 0x1404A3584 (MiWakeCommitRequest.c)
 *     MiReduceSystemCache @ 0x140531298 (MiReduceSystemCache.c)
 */

unsigned __int64 __fastcall MiRemoveUnusedSegments(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // esi
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  v3 = *(_DWORD *)(a1 + 56);
  while ( 1 )
  {
    MiDeleteZeroValueSegments();
    result = MiDeleteCachedEntries(a1, 1LL);
    if ( (_DWORD)result )
      break;
    result = *(_QWORD *)(v1 + 2440);
    if ( result <= 0x100000 )
      break;
    result = *(unsigned int *)(v1 + 92);
    if ( (_DWORD)result )
      break;
    if ( *(_QWORD *)(a1 + 16) != 1LL )
      break;
    result = MiReduceSystemCache(v1);
    if ( !(_DWORD)result )
      break;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  if ( v3 == 2 )
    return MiWakeCommitRequest(v1, 0LL);
  return result;
}
