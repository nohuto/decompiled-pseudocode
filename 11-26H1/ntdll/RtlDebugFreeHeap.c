/*
 * XREFs of RtlDebugFreeHeap @ 0x1800FEF68
 * Callers:
 *     RtlpFreeHeap @ 0x18000E4A0 (RtlpFreeHeap.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     DbgPrint @ 0x1800107F0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x180010880 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180012A14 (RtlpBreakPointHeap.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpGetExtraStuffPointer @ 0x18005FFD0 (RtlpGetExtraStuffPointer.c)
 *     RtlpCheckHeapSignature @ 0x180060540 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180060C38 (RtlpValidateHeapHeaders.c)
 *     RtlpValidateHeapEntry @ 0x1800610A0 (RtlpValidateHeapEntry.c)
 *     RtlpGetTagName @ 0x1800FF240 (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlDebugFreeHeap(unsigned __int64 a1, int a2, char *a3)
{
  LOGICAL v6; // r14d
  char v7; // r12
  ULONG v9; // r15d
  unsigned __int64 v10; // rbx
  struct _PEB *v11; // rax
  __int16 v12; // dx
  unsigned __int16 v13; // r14
  __int64 TagName; // rax

  v6 = 0;
  v7 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return (unsigned __int8)((__int64 (__fastcall *)(unsigned __int64))qword_1801C45B0)(a1);
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlFreeHeap") )
  {
    v6 = 0;
    goto LABEL_34;
  }
  v9 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v7 = 1;
    v9 |= 1u;
  }
  RtlpValidateHeap(a1, 0);
  v10 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
  if ( !RtlpValidateHeapEntry(a1, v10, "RtlFreeHeap") )
    goto LABEL_34;
  v11 = NtCurrentPeb();
  if ( a3 == (char *)qword_1801CBE60 )
  {
    if ( v11->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("About to free block at %p\n", (const void *)qword_1801CBE60);
  }
  else
  {
    if ( (v11->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_11;
    v12 = dword_1801CBE68;
    if ( !dword_1801CBE68 )
      goto LABEL_11;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
      {
        RtlpAnalyzeHeapFailure(a1, v10);
        v12 = dword_1801CBE68;
      }
    }
    if ( (*(_BYTE *)(v10 + 10) & 2) != 0 )
      v13 = *(_WORD *)(RtlpGetExtraStuffPointer(v10) + 2);
    else
      v13 = *(unsigned __int8 *)(v10 + 11);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    if ( !v13 || v13 != v12 || *(_WORD *)(a1 + 208) != HIWORD(dword_1801CBE68) )
      goto LABEL_11;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName(a1, v13);
    DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
  }
  RtlpBreakPointHeap();
LABEL_11:
  v6 = RtlFreeHeap_0((PVOID)a1, v9, a3);
  RtlpValidateHeapHeaders((char *)a1, 1);
  RtlpValidateHeap(a1, 0);
LABEL_34:
  if ( v7 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return v6;
}
