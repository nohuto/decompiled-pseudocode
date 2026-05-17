/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x1800DB6CC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     LdrpUnmapModule @ 0x1801199AC (LdrpUnmapModule.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x1800DB700 (RtlxRemoveInvertedFunctionTable.c)
 */

struct _TEB *__fastcall RtlRemoveInvertedFunctionTable(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock, a2);
  RtlxRemoveInvertedFunctionTable(v3, a1);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
