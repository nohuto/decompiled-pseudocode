/*
 * XREFs of RtlCompactHeap @ 0x180104800
 * Callers:
 *     RtlDebugCompactHeap @ 0x1801214DC (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlpHpHeapCompact @ 0x180016180 (RtlpHpHeapCompact.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180019AA0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpHeapExceptionFilter @ 0x180100D78 (RtlpHeapExceptionFilter.c)
 *     RtlpCoalesceHeap @ 0x180104954 (RtlpCoalesceHeap.c)
 *     RtlDebugCompactHeap @ 0x1801214DC (RtlDebugCompactHeap.c)
 */

__int64 __fastcall RtlCompactHeap(char *Src, int a2)
{
  char v3; // r14
  int v4; // edx
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  struct _TEB *v9; // rbx

  v3 = 0;
  if ( *((_DWORD *)Src + 4) == -571548178 )
  {
    RtlpHpHeapCompact((__int64)Src, 0);
    return 16LL;
  }
  else
  {
    v4 = *((_DWORD *)Src + 29) | a2;
    if ( (v4 & 0x61000000) != 0 && (v4 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap(Src);
    }
    else
    {
      v6 = 0LL;
      if ( (v4 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((_QWORD *)Src + 44));
        v3 = 1;
      }
      v7 = RtlpCoalesceHeap(Src);
      if ( v7 )
      {
        v6 = 16LL * *(unsigned __int16 *)(v7 + 8);
        if ( *((_DWORD *)Src + 31) )
        {
          *(_BYTE *)(v7 + 11) = *(_BYTE *)(v7 + 8) ^ *(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10);
          *(_DWORD *)(v7 + 8) ^= *((_DWORD *)Src + 34);
        }
      }
      if ( *((char **)Src + 30) != Src + 240 )
      {
        v8 = *((_QWORD *)Src + 31);
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
        RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
      return v6;
    }
  }
}
