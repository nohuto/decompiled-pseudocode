/*
 * XREFs of RtlTlsAlloc @ 0x1800939E0
 * Callers:
 *     RtlpHpEnvTlsAlloc @ 0x180092F08 (RtlpHpEnvTlsAlloc.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpTlsHeapAlloc @ 0x180093918 (RtlpTlsHeapAlloc.c)
 *     RtlFindClearBitsAndSet @ 0x180093C70 (RtlFindClearBitsAndSet.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlTlsAlloc(_DWORD *a1)
{
  struct _TEB *v1; // rdi
  _PEB *ProcessEnvironmentBlock; // rbp
  unsigned int ClearBitsAndSet; // eax
  __int64 v5; // rbx
  void **TlsExpansionSlots; // rsi
  void **v8; // rax
  void **v9; // rbx

  v1 = NtCurrentTeb();
  ProcessEnvironmentBlock = v1->ProcessEnvironmentBlock;
  while ( 1 )
  {
    RtlEnterCriticalSection((__int64)&FastPebLock);
    ClearBitsAndSet = RtlFindClearBitsAndSet(ProcessEnvironmentBlock->TlsBitmap, 1LL);
    v5 = ClearBitsAndSet;
    if ( ClearBitsAndSet != -1 )
    {
      RtlLeaveCriticalSection((__int64)&FastPebLock);
      v1->TlsSlots[v5] = 0LL;
LABEL_4:
      *a1 = v5;
      return 0LL;
    }
    TlsExpansionSlots = v1->TlsExpansionSlots;
    if ( TlsExpansionSlots )
      break;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    v8 = (void **)RtlpTlsHeapAlloc();
    v9 = v8;
    if ( !v8 )
      return 3221225495LL;
    memset_thunk_772440563353939046(v8, 0, 0x2000uLL);
    v1->TlsExpansionSlots = v9;
  }
  v5 = (unsigned int)RtlFindClearBitsAndSet(ProcessEnvironmentBlock->TlsExpansionBitmap, 1LL);
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  if ( (_DWORD)v5 != -1 )
  {
    TlsExpansionSlots[v5] = 0LL;
    LODWORD(v5) = v5 + 64;
    goto LABEL_4;
  }
  return 3221225495LL;
}
