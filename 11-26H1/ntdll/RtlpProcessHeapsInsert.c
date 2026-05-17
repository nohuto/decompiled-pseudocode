/*
 * XREFs of RtlpProcessHeapsInsert @ 0x18007DC3C
 * Callers:
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpProcessHeapsInsert(__int64 a1, char a2)
{
  unsigned int v2; // esi
  void *ProcessHeap; // r14
  __int64 Heap_0; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  struct _PEB *v9; // rdx

  v2 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( !ProcessHeap )
    ProcessHeap = (void *)a1;
  Heap_0 = RtlAllocateHeap_0();
  v7 = (_QWORD *)Heap_0;
  if ( Heap_0 )
  {
    *(_QWORD *)(Heap_0 + 16) = a1;
    *(_DWORD *)(Heap_0 + 24) = a2 & 3;
    *(_QWORD *)(Heap_0 + 40) = 0LL;
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      *(_QWORD *)(a1 + 56) = v7;
    else
      *(_QWORD *)(a1 + 392) = v7;
    v8 = (_QWORD *)qword_1801CCF48;
    if ( *(__int64 **)qword_1801CCF48 != &RtlpProcessHeaps )
      __fastfail(3u);
    *v7 = &RtlpProcessHeaps;
    v7[1] = v8;
    *v8 = v7;
    qword_1801CCF48 = (__int64)v7;
    if ( ProcessHeap == (void *)a1 )
    {
      v9 = NtCurrentPeb();
      v9->NumberOfHeaps = 1;
      *v9->ProcessHeaps = (void *)a1;
    }
    RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
