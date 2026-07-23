/*
 * XREFs of RtlDebugQueryTagHeap @ 0x180106668
 * Callers:
 *     RtlQueryTagHeap @ 0x180106490 (RtlQueryTagHeap.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180060540 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     RtlQueryTagHeap @ 0x180106490 (RtlQueryTagHeap.c)
 */

PWSTR __fastcall RtlDebugQueryTagHeap(unsigned __int64 a1, int a2, USHORT a3, BOOLEAN a4, PRTL_HEAP_TAG_INFO TagInfo)
{
  char v9; // si
  PWSTR TagHeap; // r14
  ULONG v11; // edi

  v9 = 0;
  TagHeap = 0LL;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlQueryTagHeap") )
  {
    v11 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v9 = 1;
      v11 |= 1u;
    }
    if ( RtlpValidateHeap(a1, 0) )
      TagHeap = RtlQueryTagHeap((PVOID)a1, v11, a3, a4, TagInfo);
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return TagHeap;
}
