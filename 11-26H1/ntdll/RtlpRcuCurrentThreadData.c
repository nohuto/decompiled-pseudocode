/*
 * XREFs of RtlpRcuCurrentThreadData @ 0x1801499CC
 * Callers:
 *     RtlRcuReadLock @ 0x180149820 (RtlRcuReadLock.c)
 *     RtlRcuSynchronize @ 0x1801498F0 (RtlRcuSynchronize.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     ZwQueryInformationThread @ 0x18015F2E0 (ZwQueryInformationThread.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

_DWORD *__fastcall RtlpRcuCurrentThreadData(__int64 a1, int a2)
{
  struct _TEB *v2; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // r13
  _DWORD *result; // rax
  volatile signed __int64 *i; // rbp
  unsigned int *v10; // rdi
  int v11; // edi
  int *Heap_0; // rax
  int *v13; // r15
  __int64 v14; // rax
  unsigned int *v15; // rdi
  signed __int64 v16; // rcx
  signed __int32 v17[22]; // [rsp+0h] [rbp-58h] BYREF
  size_t Size; // [rsp+70h] [rbp+18h] BYREF

  v2 = NtCurrentTeb();
  v5 = v2->Rcu[0];
  v6 = v2->Rcu[1];
  if ( !v5 )
  {
    if ( !a2 )
      return 0LL;
    Size = 0LL;
    if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIndexInformation, &Size, 8u, 0LL) < 0 )
      return 0LL;
    v5 = Size;
    v6 = HIDWORD(Size);
    v2->Rcu[0] = Size;
    v2->Rcu[1] = v6;
  }
  v7 = v5 % 0xA;
  result = *(_DWORD **)(a1 + 8 * v7 + 40);
  if ( result && v5 == result[3] )
    goto LABEL_20;
  for ( i = (volatile signed __int64 *)(a1 + 24); ; i = (volatile signed __int64 *)&v15[2 * v14] )
  {
    v10 = (unsigned int *)*i;
    if ( !*i )
    {
      if ( !a2 )
        return 0LL;
      v11 = 20;
      if ( v5 >= 0x14 )
        v11 = v5 + 1;
      Size = 8LL * (unsigned int)(v11 + 2);
      Heap_0 = (int *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, Size);
      v13 = Heap_0;
      if ( !Heap_0 )
        return 0LL;
      memset_thunk_772440563353939046(Heap_0, 0, Size);
      *v13 = v11;
      _InterlockedOr(v17, 0);
      v10 = (unsigned int *)_InterlockedCompareExchange64(i, (signed __int64)v13, 0LL);
      if ( v10 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v13);
      else
        v10 = (unsigned int *)v13;
    }
    v14 = *v10;
    v15 = v10 + 2;
    if ( v5 < (unsigned int)v14 )
      break;
    v5 -= v14;
  }
  _mm_lfence();
  result = *(_DWORD **)&v15[2 * v5];
  if ( result )
  {
    *(_QWORD *)(a1 + 8 * v7 + 40) = result;
LABEL_20:
    if ( result[2] != v6 )
      *((_QWORD *)result + 2) = *(_QWORD *)(a1 + 16) | 1LL;
    return result;
  }
  if ( !a2 )
    return 0LL;
  result = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
  if ( !result )
    return 0LL;
  *(_QWORD *)result = 0LL;
  *((_QWORD *)result + 2) = 0LL;
  *((_QWORD *)result + 3) = 0LL;
  result[2] = v6;
  result[3] = v5;
  *((_QWORD *)result + 2) = *(_QWORD *)(a1 + 16) | 1LL;
  _m_prefetchw((const void *)(a1 + 32));
  do
  {
    _m_prefetchw((const void *)(a1 + 32));
    v16 = *(_QWORD *)(a1 + 32);
    *((_QWORD *)result + 3) = v16;
    _InterlockedOr(v17, 0);
  }
  while ( v16 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), (signed __int64)result, v16) );
  _InterlockedExchange64((volatile __int64 *)&v15[2 * v5], (__int64)result);
  *(_QWORD *)(a1 + 8 * v7 + 40) = result;
  return result;
}
