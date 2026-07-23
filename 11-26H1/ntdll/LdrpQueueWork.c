/*
 * XREFs of LdrpQueueWork @ 0x180087FA0
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x180025500 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadContextReplaceModule @ 0x18007C6F0 (LdrpLoadContextReplaceModule.c)
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 *     LdrpSignalModuleMapped @ 0x18011B26C (LdrpSignalModuleMapped.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     TpPostWork @ 0x180088400 (TpPostWork.c)
 */

void __fastcall LdrpQueueWork(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  if ( **(int **)(a1 + 40) >= 0 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v2 = (_QWORD *)qword_1801CA6F8;
    v3 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_1801CA6F8 != &LdrpWorkQueue )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_1801CA6F8;
    *v3 = &LdrpWorkQueue;
    *v2 = v3;
    qword_1801CA6F8 = a1 + 64;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TpPostWork(LdrpMapAndSnapWork);
    }
  }
}
