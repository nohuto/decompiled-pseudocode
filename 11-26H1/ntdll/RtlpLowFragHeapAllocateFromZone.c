/*
 * XREFs of RtlpLowFragHeapAllocateFromZone @ 0x1800D9AD0
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180007FA0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 */

unsigned __int64 __fastcall RtlpLowFragHeapAllocateFromZone(PRTL_SRWLOCK SRWLock, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned __int64 Value; // rbx
  unsigned __int32 v5; // eax
  unsigned __int64 v6; // rbp
  _RTL_SRWLOCK *Heap_0; // rax
  _RTL_SRWLOCK *v9; // r14
  PRTL_SRWLOCK *v10; // rcx

  v3 = 6LL * a2;
  while ( 1 )
  {
    Value = SRWLock[v3 + 410].Value;
    if ( Value )
    {
      v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(Value + 16), 1u);
      if ( v5 < 0xF )
        return Value + ((unsigned __int64)v5 << 6) + 32;
    }
    Heap_0 = (_RTL_SRWLOCK *)RtlAllocateHeap_0(SRWLock[3].Ptr, 0x800000u, 0x3F0uLL);
    v9 = Heap_0;
    if ( !Heap_0 )
      return 0LL;
    *(_DWORD *)&Heap_0[2].0 = 1;
    v6 = ((unsigned __int64)&Heap_0[4].Ptr + 7) & 0xFFFFFFFFFFFFFFF0uLL;
    RtlAcquireSRWLockExclusive(SRWLock);
    if ( Value == SRWLock[v3 + 410].Value )
      break;
    RtlReleaseSRWLockExclusive(SRWLock);
    RtlFreeHeap_0(SRWLock[3].Ptr, 0x800000u, v9);
  }
  v10 = (PRTL_SRWLOCK *)SRWLock[2].Value;
  if ( *v10 != &SRWLock[1] )
    __fastfail(3u);
  v9[1].Value = (unsigned __int64)v10;
  v9->Value = (unsigned __int64)&SRWLock[1];
  *v10 = v9;
  SRWLock[2].Value = (unsigned __int64)v9;
  SRWLock[v3 + 410].Value = (unsigned __int64)v9;
  RtlReleaseSRWLockExclusive(SRWLock);
  return v6;
}
