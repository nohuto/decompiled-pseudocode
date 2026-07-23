/*
 * XREFs of RtlAllocateHeapFast @ 0x18013FC70
 * Callers:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlAllocateHeapExport @ 0x18013FC50 (RtlAllocateHeapExport.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180004B80 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpAllocateNTHeapInternal @ 0x1800078E0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 *     RtlpAllocateHeapRaiseException @ 0x180112C00 (RtlpAllocateHeapRaiseException.c)
 *     RtlpLogHeapFailure @ 0x180121588 (RtlpLogHeapFailure.c)
 *     RtlpHeapFatalExceptionFilter @ 0x180140318 (RtlpHeapFatalExceptionFilter.c)
 */

_WORD *__fastcall RtlAllocateHeapFast(char *BaseAddress, int a2, unsigned __int64 a3)
{
  signed int v6; // edi
  int v7; // eax
  __int64 Heap; // rsi
  struct _TEB *v9; // rbx

  if ( !BaseAddress )
    RtlpLogHeapFailure(19, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( *((_DWORD *)BaseAddress + 4) != -571548178 )
    return RtlpAllocateNTHeapInternal((__int64)BaseAddress, a3, a2);
  if ( a2 )
  {
    v6 = 2;
    if ( a2 != 8 )
    {
      v7 = 0;
      if ( (a2 & 8) != 0 )
        v7 = 2;
      v6 = v7;
      if ( (a2 & 4) != 0 )
        v6 = v7 | 0x80000000;
      if ( (a2 & 0x100) != 0 )
        v6 |= 0x100u;
      if ( (a2 & 0xE00) != 0 )
        v6 |= a2 & 0xE00;
      if ( (a2 & 0x10) != 0 )
        v6 |= 0x10000000u;
    }
  }
  else
  {
    v6 = 0;
  }
  Heap = RtlpHpAllocateHeap(BaseAddress, a3, (unsigned int)v6);
  if ( !Heap )
  {
    v9 = NtCurrentTeb();
    v9->LastStatusValue = -1073741801;
    v9->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741801);
    if ( v6 < 0 || *((int *)BaseAddress + 5) < 0 )
      RtlpAllocateHeapRaiseException(a3);
  }
  return (_WORD *)Heap;
}
