/*
 * XREFs of RtlDetectHeapLeaks @ 0x1800C1BA0
 * Callers:
 *     LdrShutdownProcess @ 0x18007ECA0 (LdrShutdownProcess.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x18006D090 (RtlDestroyHeap.c)
 *     RtlpInitializeLeakDetection @ 0x1800C1D88 (RtlpInitializeLeakDetection.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800C2330 (RtlpScanProcessVirtualMemory.c)
 *     RtlpReadProcessHeaps @ 0x1800C27DC (RtlpReadProcessHeaps.c)
 */

void RtlDetectHeapLeaks(void)
{
  struct _PEB *v0; // rax
  _PEB_LDR_DATA *Ldr; // rdx

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x2000000) == 0
    && (*((_QWORD *)&xmmword_1801CC000 + 1) || (RtlpShutdownProcessFlags & 3) != 0) )
  {
    RtlpLeaksCount = 0;
    RtlpLeakHeap = (PVOID)RtlpCreateHeap(3, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    if ( RtlpLeakHeap )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Inspecting leaks at process shutdown ...\n");
      if ( (unsigned __int8)RtlpInitializeLeakDetection() )
      {
        RtlpLeakHeapAddress = (__int64)RtlpLeakHeap;
        RtlpReadProcessHeaps();
        RtlpScanProcessVirtualMemory();
        RtlDestroyHeap(RtlpLeakHeap);
        v0 = NtCurrentPeb();
        RtlpLeakHeap = 0LL;
        Ldr = v0->Ldr;
        if ( RtlpLeaksCount )
        {
          if ( Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("%ld leaks detected.\n", RtlpLeaksCount);
          if ( (RtlpShutdownProcessFlags & 2) != 0 )
            __debugbreak();
        }
        else
        {
          if ( Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("No leaks detected.\n");
        }
      }
      else
      {
        RtlDestroyHeap(RtlpLeakHeap);
      }
    }
  }
}
