/*
 * XREFs of RtlpLowFragHeapAllocateFromZone @ 0x1800DCB60
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18001CED0 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 */

unsigned __int64 __fastcall RtlpLowFragHeapAllocateFromZone(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int32 v5; // eax
  unsigned __int64 v6; // rbp
  __int64 Heap_0; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r14
  _QWORD *v11; // rcx

  v3 = 6LL * a2;
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 8 * v3 + 3280);
    if ( v4 )
    {
      v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 1u);
      if ( v5 < 0xF )
        return v4 + ((unsigned __int64)v5 << 6) + 32;
    }
    Heap_0 = RtlAllocateHeap_0();
    v10 = (_QWORD *)Heap_0;
    if ( !Heap_0 )
      return 0LL;
    *(_DWORD *)(Heap_0 + 16) = 1;
    v6 = (Heap_0 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1, v9);
    if ( v4 == *(_QWORD *)(a1 + 8 * v3 + 3280) )
      break;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    RtlFreeHeap_0();
  }
  v11 = *(_QWORD **)(a1 + 16);
  if ( *v11 != a1 + 8 )
    __fastfail(3u);
  v10[1] = v11;
  *v10 = a1 + 8;
  *v11 = v10;
  *(_QWORD *)(a1 + 16) = v10;
  *(_QWORD *)(a1 + 8 * v3 + 3280) = v10;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v6;
}
