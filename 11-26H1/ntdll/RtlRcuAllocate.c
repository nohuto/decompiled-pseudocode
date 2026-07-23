/*
 * XREFs of RtlRcuAllocate @ 0x1801496A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

PVOID __fastcall RtlRcuAllocate(int a1)
{
  PVOID result; // rax
  __int64 v3; // rbx
  __int64 **v4; // rax
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  result = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x88uLL);
  v3 = (__int64)result;
  if ( result )
  {
    memset_thunk_772440563353939046(result, 0, 0x88uLL);
    *(_DWORD *)(v3 + 128) = a1;
    *(_QWORD *)(v3 + 16) = 1LL;
    _InterlockedOr(v5, 0);
    RtlAcquireSRWLockExclusive(&stru_1801CBC70);
    if ( RtlpRcuState )
    {
      v4 = (__int64 **)qword_1801CBC68;
    }
    else
    {
      v4 = (__int64 **)&RtlpRcuState;
      qword_1801CBC68 = (__int64)&RtlpRcuState;
      RtlpRcuState = (__int64)&RtlpRcuState;
    }
    if ( *v4 != &RtlpRcuState )
      __fastfail(3u);
    *(_QWORD *)v3 = &RtlpRcuState;
    *(_QWORD *)(v3 + 8) = v4;
    *v4 = (__int64 *)v3;
    qword_1801CBC68 = v3;
    RtlReleaseSRWLockExclusive(&stru_1801CBC70);
    return (PVOID)v3;
  }
  return result;
}
