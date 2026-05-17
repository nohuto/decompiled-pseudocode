/*
 * XREFs of RtlUnlockHeap @ 0x180015DE0
 * Callers:
 *     RtlValidateHeap @ 0x1800156C0 (RtlValidateHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x180015DB0 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180087568 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpQueryExtendedHeapInformation @ 0x180092520 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014FC20 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180015F38 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180027944 (RtlpBreakPointHeap.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpLogHeapUnlockEvent @ 0x1801503CC (RtlpLogHeapUnlockEvent.c)
 */

char __fastcall RtlUnlockHeap(__int64 a1)
{
  _DWORD *SharedData; // rcx
  __int64 v3; // rcx

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    RtlpReleaseDescriptorPseudoGlobalLock(*(_QWORD *)(a1 + 56), 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_1801C55E8)();
    if ( *(_DWORD *)(a1 + 152) != -285217025 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Invalid heap signature for heap at %p", (const void *)a1);
      DbgPrint(", passed to %s", "RtlUnlockHeap");
      DbgPrint("\n");
      RtlpBreakPointHeap();
      return 0;
    }
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      --*(_WORD *)(a1 + 416);
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
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
      RtlpLogHeapUnlockEvent(a1);
  }
  return 1;
}
