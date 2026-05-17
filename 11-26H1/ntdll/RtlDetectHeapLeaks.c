/*
 * XREFs of RtlDetectHeapLeaks @ 0x1800C43E0
 * Callers:
 *     LdrShutdownProcess @ 0x180087920 (LdrShutdownProcess.c)
 * Callees:
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x18007EAC0 (RtlDestroyHeap.c)
 *     RtlpInitializeLeakDetection @ 0x1800C45C8 (RtlpInitializeLeakDetection.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800C4B70 (RtlpScanProcessVirtualMemory.c)
 *     RtlpReadProcessHeaps @ 0x1800C501C (RtlpReadProcessHeaps.c)
 */

struct _PEB *RtlDetectHeapLeaks()
{
  struct _PEB *result; // rax
  __int64 v1; // rdx
  __int64 v2; // rdx
  struct _PEB *v3; // rax
  _PEB_LDR_DATA *Ldr; // rdx

  result = NtCurrentPeb();
  if ( (result->NtGlobalFlag & 0x100) == 0 )
  {
    result = NtCurrentPeb();
    if ( (result->NtGlobalFlag & 0x2000000) == 0
      && (*((_QWORD *)&xmmword_1801CCFC0 + 1) || (RtlpShutdownProcessFlags & 3) != 0) )
    {
      RtlpLeaksCount = 0;
      result = (struct _PEB *)RtlpCreateHeap(3, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      RtlpLeakHeap = (__int64)result;
      if ( result )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Inspecting leaks at process shutdown ...\n");
        if ( (unsigned __int8)RtlpInitializeLeakDetection() )
        {
          RtlpLeakHeapAddress = RtlpLeakHeap;
          RtlpReadProcessHeaps();
          RtlpScanProcessVirtualMemory();
          RtlDestroyHeap(RtlpLeakHeap, v2);
          v3 = NtCurrentPeb();
          RtlpLeakHeap = 0LL;
          Ldr = v3->Ldr;
          if ( RtlpLeaksCount )
          {
            if ( Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            result = (struct _PEB *)DbgPrint("%ld leaks detected.\n", RtlpLeaksCount);
            if ( (RtlpShutdownProcessFlags & 2) != 0 )
              __debugbreak();
          }
          else
          {
            if ( Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            return (struct _PEB *)DbgPrint("No leaks detected.\n");
          }
        }
        else
        {
          return (struct _PEB *)RtlDestroyHeap(RtlpLeakHeap, v1);
        }
      }
    }
  }
  return result;
}
