/*
 * XREFs of RtlUnlockHeap @ 0x180061510
 * Callers:
 *     RtlValidateHeap @ 0x180060DF0 (RtlValidateHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x1800614E0 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18007E8E4 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180092130 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014FAD0 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180061668 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpLogHeapUnlockEvent @ 0x18015027C (RtlpLogHeapUnlockEvent.c)
 */

BOOLEAN __cdecl RtlUnlockHeap(PVOID HeapHandle)
{
  _DWORD *SharedData; // rcx
  __int64 v3; // rcx

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpReleaseDescriptorPseudoGlobalLock(*((_QWORD *)HeapHandle + 7), 0LL);
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_1801C45E8)();
    if ( *((_DWORD *)HeapHandle + 38) != -285217025 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Invalid heap signature for heap at %p", HeapHandle);
      DbgPrint(", passed to %s", "RtlUnlockHeap");
      DbgPrint("\n");
      RtlpBreakPointHeap();
      return 0;
    }
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      --*((_WORD *)HeapHandle + 208);
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v3 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v3 = 2147353472LL;
  if ( *(_BYTE *)v3 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapUnlockEvent(HeapHandle);
  }
  return 1;
}
