/*
 * XREFs of RtlDebugCompactHeap @ 0x180121278
 * Callers:
 *     RtlCompactHeap @ 0x180103B80 (RtlCompactHeap.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180060540 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180060C38 (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     RtlCompactHeap @ 0x180103B80 (RtlCompactHeap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

SIZE_T __fastcall RtlDebugCompactHeap(unsigned __int64 a1, int a2)
{
  char v4; // si
  SIZE_T v6; // rdi
  ULONG v7; // edi

  v4 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(unsigned __int64))qword_1801C4628)(a1);
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlCompactHeap") )
  {
    v7 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v4 = 1;
      v7 |= 1u;
    }
    RtlpValidateHeap(a1, 0);
    v6 = RtlCompactHeap((PVOID)a1, v7);
    RtlpValidateHeapHeaders((char *)a1, 1);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return v6;
}
