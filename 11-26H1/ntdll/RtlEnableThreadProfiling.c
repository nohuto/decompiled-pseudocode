/*
 * XREFs of RtlEnableThreadProfiling @ 0x180138E30
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlEnableThreadProfiling(
        HANDLE ThreadHandle,
        ULONG Flags,
        ULONG64 HardwareCounters,
        PVOID *PerformanceDataHandle)
{
  _QWORD *Heap_0; // rax
  _QWORD *v10; // rbx
  int v11; // edi
  ULONG64 ThreadInformation; // [rsp+20h] [rbp-38h] BYREF
  ULONG v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+2Ch] [rbp-2Ch]
  _QWORD *v15; // [rsp+30h] [rbp-28h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  if ( (HardwareCounters & 0xFFFFFFFFFFFF0000uLL) != 0 )
    return -1073741583;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x1C0uLL);
  v10 = Heap_0;
  if ( !Heap_0 )
    return -1073741801;
  memset_thunk_772440563353939046(Heap_0, 0, 0x1C0uLL);
  *(_DWORD *)v10 = 65984;
  v10[4] = HardwareCounters;
  v14 = 1;
  v13 = Flags;
  ThreadInformation = HardwareCounters;
  v15 = v10;
  v11 = NtSetInformationThread(ThreadHandle, ThreadCounterProfiling, &ThreadInformation, 0x18u);
  if ( v11 < 0 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v10);
  else
    *PerformanceDataHandle = v10;
  return v11;
}
