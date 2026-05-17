/*
 * XREFs of RtlDebugFreeHeap @ 0x1800FF818
 * Callers:
 *     RtlpFreeHeap @ 0x1800233D0 (RtlpFreeHeap.c)
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
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpGetTagName @ 0x1800FFAF0 (RtlpGetTagName.c)
 *     RtlpHeapExceptionFilter @ 0x180100D78 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlDebugFreeHeap(_QWORD *Src, unsigned __int8 a2, __int64 a3)
{
  unsigned int v6; // r14d
  char v7; // r12
  unsigned __int64 v9; // rbx
  struct _PEB *v10; // rax
  __int16 v11; // dx
  unsigned __int16 v12; // r14
  __int64 TagName; // rax

  v6 = 0;
  v7 = 0;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return (unsigned __int8)((__int64 (__fastcall *)(_QWORD *))qword_1801C55B0)(Src);
  if ( !RtlpCheckHeapSignature(Src, "RtlFreeHeap") )
  {
    v6 = 0;
    goto LABEL_34;
  }
  if ( ((*((_BYTE *)Src + 116) | a2) & 1) == 0 )
  {
    RtlEnterCriticalSection(Src[44]);
    v7 = 1;
  }
  RtlpValidateHeap((__int64)Src, 0);
  v9 = a3 - 16;
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
  if ( !RtlpValidateHeapEntry((__int64)Src, v9, "RtlFreeHeap") )
    goto LABEL_34;
  v10 = NtCurrentPeb();
  if ( a3 == qword_1801CCE20 )
  {
    if ( v10->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("About to free block at %p\n", (const void *)qword_1801CCE20);
  }
  else
  {
    if ( (v10->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_11;
    v11 = dword_1801CCE28;
    if ( !dword_1801CCE28 )
      goto LABEL_11;
    if ( *((_DWORD *)Src + 31) )
    {
      *(_DWORD *)(v9 + 8) ^= *((_DWORD *)Src + 34);
      if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
      {
        RtlpAnalyzeHeapFailure((unsigned __int64)Src, v9);
        v11 = dword_1801CCE28;
      }
    }
    if ( (*(_BYTE *)(v9 + 10) & 2) != 0 )
      v12 = *(_WORD *)(RtlpGetExtraStuffPointer(v9) + 2);
    else
      v12 = *(unsigned __int8 *)(v9 + 11);
    if ( *((_DWORD *)Src + 31) )
    {
      *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
      *(_DWORD *)(v9 + 8) ^= *((_DWORD *)Src + 34);
    }
    if ( !v12 || v12 != v11 || *((_WORD *)Src + 104) != HIWORD(dword_1801CCE28) )
      goto LABEL_11;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName(Src, v12);
    DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
  }
  RtlpBreakPointHeap();
LABEL_11:
  v6 = RtlFreeHeap_0();
  RtlpValidateHeapHeaders(Src, 1);
  RtlpValidateHeap((__int64)Src, 0);
LABEL_34:
  if ( v7 )
    RtlLeaveCriticalSection(Src[44]);
  return v6;
}
