/*
 * XREFs of RtlRcuAllocate @ 0x1801497F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

void *__fastcall RtlRcuAllocate(int a1)
{
  void *result; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 **v5; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (void *)RtlAllocateHeap_0();
  v3 = (__int64)result;
  if ( result )
  {
    memset_thunk_772440563353939046(result, 0, 0x88uLL);
    *(_DWORD *)(v3 + 128) = a1;
    *(_QWORD *)(v3 + 16) = 1LL;
    _InterlockedOr(v6, 0);
    RtlAcquireSRWLockExclusive(&qword_1801CCC30, v4);
    if ( RtlpRcuState )
    {
      v5 = (__int64 **)qword_1801CCC28;
    }
    else
    {
      v5 = (__int64 **)&RtlpRcuState;
      qword_1801CCC28 = (__int64)&RtlpRcuState;
      RtlpRcuState = (__int64)&RtlpRcuState;
    }
    if ( *v5 != &RtlpRcuState )
      __fastfail(3u);
    *(_QWORD *)v3 = &RtlpRcuState;
    *(_QWORD *)(v3 + 8) = v5;
    *v5 = (__int64 *)v3;
    qword_1801CCC28 = v3;
    RtlReleaseSRWLockExclusive(&qword_1801CCC30);
    return (void *)v3;
  }
  return result;
}
