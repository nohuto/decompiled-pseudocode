/*
 * XREFs of RtlDebugAllocateHeap @ 0x180014940
 * Callers:
 *     RtlpAllocateHeap @ 0x18001E7C0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x1800148A0 (RtlpGetExtraStuffPointer.c)
 *     RtlpCheckHeapSignature @ 0x180014E10 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180014EB8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180015508 (RtlpValidateHeapHeaders.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180027944 (RtlpBreakPointHeap.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x18007C250 (RtlLogStackBackTraceEx.c)
 *     RtlpGetTagName @ 0x1800FFAF0 (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x180100D78 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlDebugAllocateHeap(_DWORD *Src, int a2, unsigned __int64 a3)
{
  char v6; // r13
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 Heap_0; // r14
  __int64 v12; // rdi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v14; // r15
  unsigned __int16 v15; // r15
  struct _PEB *v16; // rax
  __int64 TagName; // rax
  char v19; // [rsp+20h] [rbp-38h]

  v6 = 0;
  v19 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(_DWORD *))qword_1801C55A0)(Src);
  if ( !(unsigned __int8)RtlpCheckHeapSignature(Src, "RtlAllocateHeap") )
    goto LABEL_45;
  v7 = Src[29] | 0x10000100 | a2;
  v8 = a3;
  if ( !a3 )
    v8 = 1LL;
  v9 = *((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v8);
  if ( v9 < 0x20 )
    v9 = 32LL;
  v10 = v9 + 16;
  if ( v10 < a3 || v10 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, *((_QWORD *)Src + 25));
LABEL_45:
    Heap_0 = 0LL;
    goto LABEL_46;
  }
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v6 = 1;
    v19 = 1;
    v7 |= 1u;
  }
  RtlpValidateHeap(Src, 0LL);
  Heap_0 = RtlAllocateHeap_0(Src, v7, a3);
  RtlpValidateHeapHeaders(Src);
  if ( !Heap_0 )
    goto LABEL_46;
  v12 = Heap_0 - 16;
  _m_prefetchw((const void *)(Heap_0 - 16));
  if ( *(_BYTE *)(Heap_0 - 16 + 15) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  if ( Src[31] )
  {
    *(_DWORD *)(v12 + 8) ^= Src[34];
    if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
      RtlpAnalyzeHeapFailure(Src, v12);
  }
  if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v12);
    v14 = ExtraStuffPointer;
    if ( (Src[28] & 0x8000000) != 0 )
      *ExtraStuffPointer = RtlLogStackBackTraceEx(1LL);
    else
      *ExtraStuffPointer = 0;
    v15 = v14[1];
  }
  else
  {
    v15 = *(unsigned __int8 *)(v12 + 11);
  }
  if ( Src[31] )
  {
    *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
    *(_DWORD *)(v12 + 8) ^= Src[34];
  }
  if ( (Src[28] & 0x20000000) != 0 )
    RtlpValidateHeap(Src, 0LL);
  v16 = NtCurrentPeb();
  if ( Heap_0 == RtlpHeapStopOn )
  {
    if ( v16->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)RtlpHeapStopOn, a3);
    goto LABEL_40;
  }
  if ( (v16->NtGlobalFlag & 0x800) != 0 && v15 && v15 == word_1801CCE08 && *((_WORD *)Src + 104) == word_1801CCE0A )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName(Src, v15);
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", Heap_0, a3, TagName, v19, Heap_0);
LABEL_40:
    RtlpBreakPointHeap();
  }
LABEL_46:
  if ( v6 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return Heap_0;
}
