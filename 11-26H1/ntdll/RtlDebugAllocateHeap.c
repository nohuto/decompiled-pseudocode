/*
 * XREFs of RtlDebugAllocateHeap @ 0x180060070
 * Callers:
 *     RtlpAllocateHeap @ 0x180009890 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpGetExtraStuffPointer @ 0x18005FFD0 (RtlpGetExtraStuffPointer.c)
 *     RtlpCheckHeapSignature @ 0x180060540 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180060C38 (RtlpValidateHeapHeaders.c)
 *     RtlLogStackBackTraceEx @ 0x18006AA70 (RtlLogStackBackTraceEx.c)
 *     RtlpGetTagName @ 0x1800FF240 (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char *__fastcall RtlDebugAllocateHeap(unsigned __int64 a1, int a2, SIZE_T a3)
{
  char v6; // r13
  ULONG v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  SIZE_T v10; // rax
  char *Heap_0; // r14
  unsigned __int64 v12; // rdi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v14; // r15
  unsigned __int16 v15; // r15
  struct _PEB *v16; // rax
  __int64 TagName; // rax
  char v19; // [rsp+20h] [rbp-38h]

  v6 = 0;
  v19 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return (char *)((__int64 (__fastcall *)(unsigned __int64))qword_1801C45A0)(a1);
  if ( !(unsigned __int8)RtlpCheckHeapSignature(a1, "RtlAllocateHeap") )
    goto LABEL_45;
  v7 = *(_DWORD *)(a1 + 116) | 0x10000100 | a2;
  v8 = a3;
  if ( !a3 )
    v8 = 1LL;
  v9 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v8);
  if ( v9 < 0x20 )
    v9 = 32LL;
  v10 = v9 + 16;
  if ( v10 < a3 || v10 > *(_QWORD *)(a1 + 200) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, *(_QWORD *)(a1 + 200));
LABEL_45:
    Heap_0 = 0LL;
    goto LABEL_46;
  }
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v6 = 1;
    v19 = 1;
    v7 |= 1u;
  }
  RtlpValidateHeap(a1);
  Heap_0 = (char *)RtlAllocateHeap_0((PVOID)a1, v7, a3);
  RtlpValidateHeapHeaders((void *)a1);
  if ( !Heap_0 )
    goto LABEL_46;
  v12 = (unsigned __int64)(Heap_0 - 16);
  _m_prefetchw(Heap_0 - 16);
  if ( *(Heap_0 - 1) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v12);
  }
  if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v12);
    v14 = ExtraStuffPointer;
    if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
      *ExtraStuffPointer = RtlLogStackBackTraceEx(1LL);
    else
      *ExtraStuffPointer = 0;
    v15 = v14[1];
  }
  else
  {
    v15 = *(unsigned __int8 *)(v12 + 11);
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
    *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( (*(_DWORD *)(a1 + 112) & 0x20000000) != 0 )
    RtlpValidateHeap(a1);
  v16 = NtCurrentPeb();
  if ( Heap_0 == (char *)RtlpHeapStopOn )
  {
    if ( v16->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)RtlpHeapStopOn, a3);
    goto LABEL_40;
  }
  if ( (v16->NtGlobalFlag & 0x800) != 0 && v15 && v15 == word_1801CBE48 && *(_WORD *)(a1 + 208) == word_1801CBE4A )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName(a1, v15);
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", Heap_0, a3, TagName, v19, Heap_0);
LABEL_40:
    RtlpBreakPointHeap();
  }
LABEL_46:
  if ( v6 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return Heap_0;
}
