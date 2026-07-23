/*
 * XREFs of RtlCompactHeap @ 0x180103B80
 * Callers:
 *     RtlDebugCompactHeap @ 0x180121278 (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpHpHeapCompact @ 0x1800618B0 (RtlpHpHeapCompact.c)
 *     RtlpHeapExceptionFilter @ 0x1801004C8 (RtlpHeapExceptionFilter.c)
 *     RtlpCoalesceHeap @ 0x180103CD4 (RtlpCoalesceHeap.c)
 *     RtlDebugCompactHeap @ 0x180121278 (RtlDebugCompactHeap.c)
 */

SIZE_T __cdecl RtlCompactHeap(PVOID HeapHandle, ULONG Flags)
{
  char v3; // r14
  ULONG v4; // edx
  SIZE_T v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  struct _TEB *v9; // rbx

  v3 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpHpHeapCompact((__int64)HeapHandle, 0);
    return 16LL;
  }
  else
  {
    v4 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v4 & 0x61000000) != 0 && (v4 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap((int)HeapHandle);
    }
    else
    {
      v6 = 0LL;
      if ( (v4 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v3 = 1;
      }
      v7 = RtlpCoalesceHeap((int)HeapHandle);
      if ( v7 )
      {
        v6 = 16LL * *(unsigned __int16 *)(v7 + 8);
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          *(_BYTE *)(v7 + 11) = *(_BYTE *)(v7 + 8) ^ *(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10);
          *(_DWORD *)(v7 + 8) ^= *((_DWORD *)HeapHandle + 34);
        }
      }
      if ( *((PVOID *)HeapHandle + 30) != (char *)HeapHandle + 240 )
      {
        v8 = *((_QWORD *)HeapHandle + 31);
        if ( *(_QWORD *)(v8 + 40) > v6 )
          v6 = *(_QWORD *)(v8 + 40);
      }
      if ( !v6 )
      {
        v9 = NtCurrentTeb();
        v9->LastStatusValue = 0;
        v9->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0);
      }
      if ( v3 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      return v6;
    }
  }
}
