/*
 * XREFs of RtlDebugReAllocateHeap @ 0x180022780
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18001AED0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800216E0 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x1800148A0 (RtlpGetExtraStuffPointer.c)
 *     RtlpCheckHeapSignature @ 0x180014E10 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180014EB8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180015508 (RtlpValidateHeapHeaders.c)
 *     RtlpValidateHeapEntry @ 0x180015970 (RtlpValidateHeapEntry.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     DbgPrint @ 0x180025720 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800257B0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180027944 (RtlpBreakPointHeap.c)
 *     RtlReAllocateHeap_0 @ 0x180038020 (RtlReAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x18007C250 (RtlLogStackBackTraceEx.c)
 *     RtlpGetTagName @ 0x1800FFAF0 (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x180100D78 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlDebugReAllocateHeap(_DWORD *Src, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // r14
  unsigned int v9; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int16 v12; // r15
  unsigned __int64 v13; // rsi
  struct _PEB *v14; // rax
  __int16 v15; // dx
  __int64 TagName; // rax
  __int64 Heap_0; // rax
  __int64 v18; // rsi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v20; // r15
  struct _PEB *v21; // rax
  __int64 v22; // rax
  char v24; // [rsp+30h] [rbp-48h]

  v24 = 0;
  v8 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_1801C55A8)();
  if ( !RtlpCheckHeapSignature(Src, "RtlReAllocateHeap") )
    goto LABEL_51;
  v9 = Src[29] | 0x10000100 | a2;
  v10 = a4;
  if ( !a4 )
    v10 = 1LL;
  v11 = (*((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v10)) + 16;
  if ( v11 < a4 || v11 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *((_QWORD *)Src + 25));
LABEL_51:
    v8 = 0LL;
    goto LABEL_68;
  }
  v12 = 0;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v24 = 1;
    v9 |= 1u;
  }
  RtlpValidateHeap((__int64)Src, 0);
  v13 = a3 - 16;
  _m_prefetchw((const void *)v13);
  if ( *(_BYTE *)(v13 + 15) == 5 )
    v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
  if ( RtlpValidateHeapEntry((__int64)Src, v13, "RtlReAllocateHeap") )
  {
    v14 = NtCurrentPeb();
    if ( a3 == qword_1801CCE10 )
    {
      if ( v14->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_1801CCE10, a4);
    }
    else
    {
      if ( (v14->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_29;
      v15 = dword_1801CCE18;
      if ( !dword_1801CCE18 )
        goto LABEL_29;
      if ( Src[31] )
      {
        *(_DWORD *)(v13 + 8) ^= Src[34];
        if ( *(_BYTE *)(v13 + 11) != (*(_BYTE *)(v13 + 8) ^ (unsigned __int8)(*(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10))) )
        {
          RtlpAnalyzeHeapFailure(Src, v13);
          v15 = dword_1801CCE18;
        }
      }
      if ( (*(_BYTE *)(v13 + 10) & 2) != 0 )
        v12 = *(_WORD *)(RtlpGetExtraStuffPointer(v13) + 2);
      else
        v12 = *(unsigned __int8 *)(v13 + 11);
      if ( Src[31] )
      {
        *(_BYTE *)(v13 + 11) = *(_BYTE *)(v13 + 8) ^ *(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10);
        *(_DWORD *)(v13 + 8) ^= Src[34];
      }
      if ( !v12 || v12 != v15 || *((_WORD *)Src + 104) != HIWORD(dword_1801CCE18) )
        goto LABEL_29;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName(Src, v12);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap();
LABEL_29:
    Heap_0 = RtlReAllocateHeap_0(Src, v9, a3, a4);
    v8 = Heap_0;
    if ( Heap_0 )
    {
      v18 = Heap_0 - 16;
      _m_prefetchw((const void *)(Heap_0 - 16));
      if ( *(_BYTE *)(Heap_0 - 16 + 15) == 5 )
        v18 -= 16LL * *(unsigned __int8 *)(v18 + 14);
      if ( Src[31] )
      {
        *(_DWORD *)(v18 + 8) ^= Src[34];
        if ( *(_BYTE *)(v18 + 11) != (*(_BYTE *)(v18 + 8) ^ (unsigned __int8)(*(_BYTE *)(v18 + 9) ^ *(_BYTE *)(v18 + 10))) )
          RtlpAnalyzeHeapFailure(Src, v18);
      }
      if ( (*(_BYTE *)(v18 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v18);
        v20 = ExtraStuffPointer;
        if ( (Src[28] & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1LL);
        else
          *ExtraStuffPointer = 0;
        v12 = v20[1];
      }
      else
      {
        v12 = *(unsigned __int8 *)(v18 + 11);
      }
      if ( Src[31] )
      {
        *(_BYTE *)(v18 + 11) = *(_BYTE *)(v18 + 8) ^ *(_BYTE *)(v18 + 9) ^ *(_BYTE *)(v18 + 10);
        *(_DWORD *)(v18 + 8) ^= Src[34];
      }
    }
    RtlpValidateHeapHeaders(Src, 1);
    RtlpValidateHeap((__int64)Src, 0);
  }
  if ( v8 )
  {
    v21 = NtCurrentPeb();
    if ( v8 == qword_1801CCE10 )
    {
      if ( v21->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_1801CCE10, a4);
      goto LABEL_57;
    }
    if ( (v21->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)Src + 104), v12) == dword_1801CCE18 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v22 = RtlpGetTagName(Src, v12);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v8, a4, v22);
LABEL_57:
      RtlpBreakPointHeap();
    }
  }
LABEL_68:
  if ( v24 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v8;
}
