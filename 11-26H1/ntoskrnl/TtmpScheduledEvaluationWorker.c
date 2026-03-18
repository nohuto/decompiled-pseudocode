/*
 * XREFs of TtmpScheduledEvaluationWorker @ 0x1407EC860
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     TtmiScheduleSessionWorker @ 0x1407E67A4 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionLock @ 0x140A3ACCC (TtmpAcquireSessionLock.c)
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
      if ( (v4 & 3) == 0 )
      {
        *((_DWORD *)Object + 9) = v4 | 4;
        TtmiScheduleSessionWorker(v3, 2);
      }
    }
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
    KeLeaveCriticalRegion();
    return ObfDereferenceObject((PVOID)Object);
  }
  return result;
}
