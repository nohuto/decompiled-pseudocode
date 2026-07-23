/*
 * XREFs of RtlDebugReAllocateHeap @ 0x18000D850
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18000C7B0 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlReAllocateHeap_0 @ 0x180001CF0 (RtlReAllocateHeap_0.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpGetExtraStuffPointer @ 0x18005FFD0 (RtlpGetExtraStuffPointer.c)
 *     RtlpCheckHeapSignature @ 0x180060540 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180060C38 (RtlpValidateHeapHeaders.c)
 *     RtlpValidateHeapEntry @ 0x1800610A0 (RtlpValidateHeapEntry.c)
 *     RtlLogStackBackTraceEx @ 0x18006AA70 (RtlLogStackBackTraceEx.c)
 *     RtlpGetTagName @ 0x1800FF240 (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char *__fastcall RtlDebugReAllocateHeap(__int64 a1, int a2, char *a3, SIZE_T a4)
{
  char *v8; // r14
  ULONG v9; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int16 v12; // r15
  char *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  struct _PEB *v16; // rax
  __int64 v17; // rdx
  __int64 TagName; // rax
  char *Heap_0; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // rsi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v25; // r15
  struct _PEB *v26; // rax
  __int64 v27; // rax
  char v29; // [rsp+30h] [rbp-48h]

  v29 = 0;
  v8 = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return (char *)((__int64 (*)(void))qword_1801C45A8)();
  if ( !(unsigned __int8)RtlpCheckHeapSignature(a1, "RtlReAllocateHeap") )
    goto LABEL_51;
  v9 = *(_DWORD *)(a1 + 116) | 0x10000100 | a2;
  v10 = a4;
  if ( !a4 )
    v10 = 1LL;
  v11 = (*(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v10)) + 16;
  if ( v11 < a4 || v11 > *(_QWORD *)(a1 + 200) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *(_QWORD *)(a1 + 200));
LABEL_51:
    v8 = 0LL;
    goto LABEL_68;
  }
  v12 = 0;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v29 = 1;
    v9 |= 1u;
  }
  RtlpValidateHeap(a1);
  v13 = a3 - 16;
  _m_prefetchw(v13);
  if ( v13[15] == 5 )
    v13 -= 16 * (unsigned __int8)v13[14];
  if ( (unsigned __int8)RtlpValidateHeapEntry(a1, v13, "RtlReAllocateHeap") )
  {
    v16 = NtCurrentPeb();
    if ( a3 == (char *)qword_1801CBE50 )
    {
      if ( v16->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_1801CBE50, a4);
    }
    else
    {
      if ( (v16->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_29;
      v17 = (unsigned int)dword_1801CBE58;
      if ( !dword_1801CBE58 )
        goto LABEL_29;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_DWORD *)v13 + 2) ^= *(_DWORD *)(a1 + 136);
        if ( v13[11] != ((unsigned __int8)v13[8] ^ (unsigned __int8)(v13[9] ^ v13[10])) )
        {
          RtlpAnalyzeHeapFailure(a1, v13);
          v17 = (unsigned int)dword_1801CBE58;
        }
      }
      if ( (v13[10] & 2) != 0 )
        v12 = *(_WORD *)(RtlpGetExtraStuffPointer(v13, v17, v14, v15) + 2);
      else
        v12 = (unsigned __int8)v13[11];
      if ( *(_DWORD *)(a1 + 124) )
      {
        v13[11] = v13[8] ^ v13[9] ^ v13[10];
        *((_DWORD *)v13 + 2) ^= *(_DWORD *)(a1 + 136);
      }
      if ( !v12 || v12 != (_WORD)v17 || *(_WORD *)(a1 + 208) != HIWORD(dword_1801CBE58) )
        goto LABEL_29;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName(a1, v12);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap();
LABEL_29:
    Heap_0 = (char *)RtlReAllocateHeap_0((PVOID)a1, v9, a3, a4);
    v8 = Heap_0;
    if ( Heap_0 )
    {
      v23 = Heap_0 - 16;
      _m_prefetchw(Heap_0 - 16);
      if ( *(Heap_0 - 1) == 5 )
        v23 -= 16 * (unsigned __int8)v23[14];
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_DWORD *)v23 + 2) ^= *(_DWORD *)(a1 + 136);
        if ( v23[11] != ((unsigned __int8)v23[8] ^ (unsigned __int8)(v23[9] ^ v23[10])) )
          RtlpAnalyzeHeapFailure(a1, v23);
      }
      if ( (v23[10] & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v23, v20, v21, v22);
        v25 = ExtraStuffPointer;
        if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1LL);
        else
          *ExtraStuffPointer = 0;
        v12 = v25[1];
      }
      else
      {
        v12 = (unsigned __int8)v23[11];
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        v23[11] = v23[8] ^ v23[9] ^ v23[10];
        *((_DWORD *)v23 + 2) ^= *(_DWORD *)(a1 + 136);
      }
    }
    RtlpValidateHeapHeaders((void *)a1);
    RtlpValidateHeap(a1);
  }
  if ( v8 )
  {
    v26 = NtCurrentPeb();
    if ( v8 == (char *)qword_1801CBE50 )
    {
      if ( v26->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_1801CBE50, a4);
      goto LABEL_57;
    }
    if ( (v26->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*(_WORD *)(a1 + 208), v12) == dword_1801CBE58 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v27 = RtlpGetTagName(a1, v12);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v8, a4, v27);
LABEL_57:
      RtlpBreakPointHeap();
    }
  }
LABEL_68:
  if ( v29 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return v8;
}
