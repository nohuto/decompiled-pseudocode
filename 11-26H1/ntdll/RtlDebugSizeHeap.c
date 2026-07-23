/*
 * XREFs of RtlDebugSizeHeap @ 0x1800603FC
 * Callers:
 *     RtlSizeHeap @ 0x1800058B0 (RtlSizeHeap.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlSizeHeap @ 0x1800058B0 (RtlSizeHeap.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180060540 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800605E8 (RtlpValidateHeap.c)
 *     RtlpValidateHeapEntry @ 0x1800610A0 (RtlpValidateHeapEntry.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

SIZE_T __fastcall RtlDebugSizeHeap(__int64 a1, int a2, char *a3)
{
  char v6; // r14
  SIZE_T v7; // rdi
  ULONG v8; // esi
  char *v9; // rdx

  v6 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(__int64))qword_1801C4620)(a1);
  v7 = -1LL;
  if ( (unsigned __int8)RtlpCheckHeapSignature(a1, "RtlSizeHeap") )
  {
    v8 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v8 |= 1u;
      v6 = 1;
    }
    RtlpValidateHeap(a1);
    v9 = a3 - 16;
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v9 -= 16 * (unsigned __int8)v9[14];
    if ( (unsigned __int8)RtlpValidateHeapEntry(a1, v9, "RtlSizeHeap") )
      v7 = RtlSizeHeap((PVOID)a1, v8, a3);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v6 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return v7;
}
