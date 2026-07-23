/*
 * XREFs of RtlDebugCreateHeap @ 0x1801136E8
 * Callers:
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180060C38 (RtlpValidateHeapHeaders.c)
 *     RtlLogStackBackTraceEx @ 0x18006AA70 (RtlLogStackBackTraceEx.c)
 *     RtlpCreateHeap @ 0x18006B0B0 (RtlpCreateHeap.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 */

char *__fastcall RtlDebugCreateHeap(
        int a1,
        void *a2,
        ULONG_PTR a3,
        void *a4,
        _RTL_CRITICAL_SECTION *a5,
        __int64 a6,
        int a7)
{
  NTSTATUS VirtualMemory; // r15d
  __int64 Heap; // rax
  char *v14; // rdi
  const void *MemoryInformation[4]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v16; // [rsp+60h] [rbp-28h]

  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  v16 = 0LL;
  if ( a3 <= 0x10 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid ReserveSize parameter - %Ix\n", a3);
LABEL_6:
    RtlpBreakPointHeap();
    return 0LL;
  }
  if ( a3 < (unsigned __int64)a4 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid CommitSize parameter - %Ix\n", a4);
    goto LABEL_6;
  }
  if ( (a1 & 1) != 0 && a5 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not specify Lock parameter with HEAP_NO_SERIALIZE\n");
    goto LABEL_6;
  }
  if ( a2 )
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      a2,
                      MemoryBasicInformation,
                      MemoryInformation,
                      0x30uLL,
                      0LL);
    if ( VirtualMemory < 0 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) invalid,  Status = %lx\n", a2, VirtualMemory);
      goto LABEL_6;
    }
    if ( MemoryInformation[0] != a2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) != to BaseAddress (%p)\n", a2, MemoryInformation[0]);
      goto LABEL_6;
    }
    if ( (_DWORD)v16 == 0x10000 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) is free or not writable\n", MemoryInformation[0]);
      goto LABEL_6;
    }
  }
  Heap = RtlpCreateHeap(a1 | 0x10000060u, a2, a3, a4, a5, a6, a7);
  v14 = (char *)Heap;
  if ( Heap )
  {
    if ( (*(_DWORD *)(Heap + 112) & 0x8000000) != 0 )
      *(_WORD *)(Heap + 304) = RtlLogStackBackTraceEx(1u);
    RtlpValidateHeapHeaders(v14, 1);
  }
  return v14;
}
