/*
 * XREFs of RtlQueryTagHeap @ 0x180106490
 * Callers:
 *     RtlDebugQueryTagHeap @ 0x180106668 (RtlDebugQueryTagHeap.c)
 *     TpDbgDumpHeapUsage @ 0x1801591F0 (TpDbgDumpHeapUsage.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlDebugQueryTagHeap @ 0x180106668 (RtlDebugQueryTagHeap.c)
 */

PWSTR __cdecl RtlQueryTagHeap(
        PVOID HeapHandle,
        ULONG Flags,
        USHORT TagIndex,
        BOOLEAN ResetCounters,
        PRTL_HEAP_TAG_INFO TagInfo)
{
  __int64 v6; // rsi
  char v8; // r14
  int v9; // ecx
  WCHAR *TagHeap; // rbx
  ULONG v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int16 v14; // si
  __int64 v15; // rcx
  __int64 v16; // r8

  v6 = TagIndex;
  v8 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0LL;
  v9 = *((_DWORD *)HeapHandle + 29);
  if ( (v9 & 0x1000000) != 0 || (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  TagHeap = 0LL;
  v11 = v9 | Flags;
  if ( (v11 & 0x61000000) != 0 && (v11 & 0x10000000) == 0 )
  {
    TagHeap = (WCHAR *)RtlDebugQueryTagHeap((int)HeapHandle, TagInfo);
  }
  else
  {
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v8 = 1;
    }
    if ( (unsigned __int16)v6 < *((_WORD *)HeapHandle + 112) && (v12 = *((_QWORD *)HeapHandle + 29)) != 0 )
    {
      v13 = v12 + 72 * v6;
      if ( TagInfo )
      {
        TagInfo->NumberOfAllocations = *(_DWORD *)(v12 + 72 * v6);
        TagInfo->NumberOfFrees = *(_DWORD *)(v13 + 4);
        TagInfo->BytesAllocated = 16LL * *(_QWORD *)(v13 + 8);
      }
      if ( ResetCounters )
      {
        *(_DWORD *)(v12 + 72 * v6) = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_QWORD *)(v13 + 8) = 0LL;
      }
      TagHeap = (WCHAR *)(v12 + 20 + 72 * v6);
    }
    else if ( (v6 & 0x8000u) != 0LL )
    {
      v14 = v6 ^ 0x8000;
      if ( v14 < 0x81u )
      {
        v15 = *((_QWORD *)HeapHandle + 41);
        if ( v15 )
        {
          v16 = v15 + 16LL * v14;
          if ( TagInfo )
          {
            TagInfo->NumberOfAllocations = *(_DWORD *)(v15 + 16LL * v14);
            TagInfo->NumberOfFrees = *(_DWORD *)(v16 + 4);
            TagInfo->BytesAllocated = 16LL * *(_QWORD *)(v16 + 8);
          }
          if ( ResetCounters )
          {
            *(_DWORD *)(v15 + 16LL * v14) = 0;
            *(_DWORD *)(v16 + 4) = 0;
            *(_QWORD *)(v16 + 8) = 0LL;
          }
          TagHeap = (WCHAR *)&word_1801762D4;
        }
      }
    }
  }
  if ( v8 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return TagHeap;
}
