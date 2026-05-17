/*
 * XREFs of RtlLockHeap @ 0x180015FD0
 * Callers:
 *     RtlValidateHeap @ 0x1800156C0 (RtlValidateHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x180015DB0 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlLockProcessHeapOnProcessTerminate @ 0x180087520 (RtlLockProcessHeapOnProcessTerminate.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180092520 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014FC20 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180027944 (RtlpBreakPointHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlpLogHeapLockEvent @ 0x180116368 (RtlpLogHeapLockEvent.c)
 */

char __fastcall RtlLockHeap(__int64 a1)
{
  _DWORD *SharedData; // rcx
  __int64 v3; // rcx
  __int64 v5; // rdi
  void *UniqueThread; // rsi

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( (*(_BYTE *)(v5 + 24) & 2) == 0 )
    {
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
      if ( (_DWORD)UniqueThread == *(_DWORD *)(v5 + 36) )
      {
        ++*(_DWORD *)(v5 + 32);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v5 + 40);
        *(_DWORD *)(v5 + 32) = 1;
        *(_DWORD *)(v5 + 36) = (_DWORD)UniqueThread;
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_1801C55E0)();
    if ( *(_DWORD *)(a1 + 152) != -285217025 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Invalid heap signature for heap at %p", (const void *)a1);
      DbgPrint(", passed to %s", "RtlLockHeap");
      DbgPrint("\n");
      RtlpBreakPointHeap();
      return 0;
    }
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      ++*(_WORD *)(a1 + 416);
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
      RtlpLogHeapLockEvent(a1);
  }
  return 1;
}
