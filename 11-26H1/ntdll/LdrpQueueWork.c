/*
 * XREFs of LdrpQueueWork @ 0x180067B50
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x18003AF90 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadContextReplaceModule @ 0x180085350 (LdrpLoadContextReplaceModule.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 *     LdrpSignalModuleMapped @ 0x18011B4BC (LdrpSignalModuleMapped.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     TpPostWork @ 0x180067FB0 (TpPostWork.c)
 */

struct _PEB *__fastcall LdrpQueueWork(__int64 a1)
{
  struct _PEB *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  result = *(struct _PEB **)(a1 + 40);
  if ( *(int *)&result->InheritedAddressSpace >= 0 )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v3 = (_QWORD *)qword_1801CB698;
    v4 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_1801CB698 != &LdrpWorkQueue )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_1801CB698;
    *v4 = &LdrpWorkQueue;
    *v3 = v4;
    qword_1801CB698 = a1 + 64;
    result = (struct _PEB *)RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
        return (struct _PEB *)TpPostWork(LdrpMapAndSnapWork);
    }
  }
  return result;
}
