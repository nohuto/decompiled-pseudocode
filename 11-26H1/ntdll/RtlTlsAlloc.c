/*
 * XREFs of RtlTlsAlloc @ 0x180072BB0
 * Callers:
 *     RtlpHpEnvTlsAlloc @ 0x180072460 (RtlpHpEnvTlsAlloc.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlFindClearBitsAndSet @ 0x180072E40 (RtlFindClearBitsAndSet.c)
 *     RtlpTlsHeapAlloc @ 0x1800BCC00 (RtlpTlsHeapAlloc.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlTlsAlloc(_DWORD *a1)
{
  struct _TEB *v1; // rdi
  _PEB *ProcessEnvironmentBlock; // rbp
  ULONG ClearBitsAndSet; // eax
  __int64 v5; // rbx
  void **TlsExpansionSlots; // rsi
  void **v8; // rax
  void **v9; // rbx

  v1 = NtCurrentTeb();
  ProcessEnvironmentBlock = v1->ProcessEnvironmentBlock;
  while ( 1 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    ClearBitsAndSet = RtlFindClearBitsAndSet(ProcessEnvironmentBlock->TlsBitmap, 1u, 0);
    v5 = ClearBitsAndSet;
    if ( ClearBitsAndSet != -1 )
    {
      RtlLeaveCriticalSection(&FastPebLock);
      v1->TlsSlots[v5] = 0LL;
LABEL_4:
      *a1 = v5;
      return 0LL;
    }
    TlsExpansionSlots = v1->TlsExpansionSlots;
    if ( TlsExpansionSlots )
      break;
    RtlLeaveCriticalSection(&FastPebLock);
    v8 = (void **)RtlpTlsHeapAlloc();
    v9 = v8;
    if ( !v8 )
      return 3221225495LL;
    memset_thunk_772440563353939046(v8, 0, 0x2000uLL);
    v1->TlsExpansionSlots = v9;
  }
  v5 = RtlFindClearBitsAndSet(ProcessEnvironmentBlock->TlsExpansionBitmap, 1u, 0);
  RtlLeaveCriticalSection(&FastPebLock);
  if ( (_DWORD)v5 != -1 )
  {
    TlsExpansionSlots[v5] = 0LL;
    LODWORD(v5) = v5 + 64;
    goto LABEL_4;
  }
  return 3221225495LL;
}
