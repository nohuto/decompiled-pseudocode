/*
 * XREFs of RtlDebugCreateTagHeap @ 0x180146CC4
 * Callers:
 *     RtlCreateTagHeap @ 0x1800C89F0 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180060540 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180060C38 (RtlpValidateHeapHeaders.c)
 *     RtlCreateTagHeap @ 0x1800C89F0 (RtlCreateTagHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugCreateTagHeap(unsigned __int64 a1, int a2, WCHAR *a3, WCHAR *a4)
{
  char v8; // si
  ULONG TagHeap; // r14d
  ULONG v10; // edi

  v8 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlCreateTagHeap") )
  {
    v10 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v8 = 1;
      v10 |= 1u;
    }
    if ( RtlpValidateHeap(a1, 0) )
      TagHeap = RtlCreateTagHeap((PVOID)a1, v10, a3, a4);
    RtlpValidateHeapHeaders((char *)a1, 1);
  }
  if ( v8 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return TagHeap;
}
