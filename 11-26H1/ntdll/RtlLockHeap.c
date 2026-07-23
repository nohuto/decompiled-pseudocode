/*
 * XREFs of RtlLockHeap @ 0x180061700
 * Callers:
 *     RtlValidateHeap @ 0x180060DF0 (RtlValidateHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x1800614E0 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlLockProcessHeapOnProcessTerminate @ 0x18007E890 (RtlLockProcessHeapOnProcessTerminate.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180092130 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014FAD0 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlpLogHeapLockEvent @ 0x180115B48 (RtlpLogHeapLockEvent.c)
 */

BOOLEAN __cdecl RtlLockHeap(PVOID HeapHandle)
{
  _DWORD *SharedData; // rcx
  __int64 v3; // rcx
  __int64 v5; // rdi
  void *UniqueThread; // rsi

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v5 = *((_QWORD *)HeapHandle + 7);
    if ( (*(_BYTE *)(v5 + 24) & 2) == 0 )
    {
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
      if ( (_DWORD)UniqueThread == *(_DWORD *)(v5 + 36) )
      {
        ++*(_DWORD *)(v5 + 32);
      }
      else
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v5 + 40));
        *(_DWORD *)(v5 + 32) = 1;
        *(_DWORD *)(v5 + 36) = (_DWORD)UniqueThread;
      }
    }
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_1801C45E0)();
    if ( *((_DWORD *)HeapHandle + 38) != -285217025 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Invalid heap signature for heap at %p", HeapHandle);
      DbgPrint(", passed to %s", "RtlLockHeap");
      DbgPrint("\n");
      RtlpBreakPointHeap();
      return 0;
    }
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      ++*((_WORD *)HeapHandle + 208);
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
      RtlpLogHeapLockEvent(HeapHandle);
  }
  return 1;
}
