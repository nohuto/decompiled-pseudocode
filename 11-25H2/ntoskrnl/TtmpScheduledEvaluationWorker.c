/*
 * XREFs of TtmpScheduledEvaluationWorker @ 0x140760940
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     TtmpAcquireSessionLock @ 0x1406EBB64 (TtmpAcquireSessionLock.c)
 *     TtmiScheduleSessionWorker @ 0x14075A564 (TtmiScheduleSessionWorker.c)
 */

LONG_PTR __fastcall TtmpScheduledEvaluationWorker(volatile __int32 *Object)
{
  LONG_PTR result; // rax
  __int64 v3; // rcx
  int v4; // eax

  result = (unsigned int)_InterlockedExchange(Object + 62, 0);
  if ( (_DWORD)result )
  {
    TtmpAcquireSessionLock();
    v3 = *((_QWORD *)Object + 2);
    if ( v3 )
    {
      v4 = *((_DWORD *)Object + 9);
      if ( (v4 & 1) == 0 && (v4 & 2) == 0 )
      {
        *((_DWORD *)Object + 9) = v4 | 4;
        TtmiScheduleSessionWorker(v3, 2);
      }
    }
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    return ObfDereferenceObject((PVOID)Object);
  }
  return result;
}
