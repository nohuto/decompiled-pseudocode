/*
 * XREFs of RtlAllocateHeapFast @ 0x18013FD70
 * Callers:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlAllocateHeapExport @ 0x18013FD50 (RtlAllocateHeapExport.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpAllocateNTHeapInternal @ 0x18001C810 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x180071440 (RtlpHpAllocateHeap.c)
 *     RtlpAllocateHeapRaiseException @ 0x180113150 (RtlpAllocateHeapRaiseException.c)
 *     RtlpLogHeapFailure @ 0x1801217EC (RtlpLogHeapFailure.c)
 *     RtlpHeapFatalExceptionFilter @ 0x180140418 (RtlpHeapFatalExceptionFilter.c)
 */

unsigned __int64 __fastcall RtlAllocateHeapFast(_DWORD *a1, int a2, unsigned __int64 a3)
{
  signed int v6; // edi
  int v7; // eax
  __int64 Heap; // rsi
  struct _TEB *v9; // rbx

  if ( !a1 )
    RtlpLogHeapFailure(19, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( a1[4] != -571548178 )
    return RtlpAllocateNTHeapInternal(a1, a3, a2);
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
  Heap = RtlpHpAllocateHeap((__int64)a1, a3, (unsigned int)v6);
  if ( !Heap )
  {
    v9 = NtCurrentTeb();
    v9->LastStatusValue = -1073741801;
    v9->LastErrorValue = RtlNtStatusToDosErrorNoTeb(0xC0000017);
    if ( v6 < 0 || (int)a1[5] < 0 )
      RtlpAllocateHeapRaiseException(a3);
  }
  return Heap;
}
