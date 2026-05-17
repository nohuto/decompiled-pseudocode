/*
 * XREFs of RtlpHeapTrkInterceptor @ 0x1800117C0
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x18001C570 (RtlpCallInterceptRoutine.c)
 * Callees:
 *     RtlpHeapTrkTrackStack @ 0x180010860 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800116E0 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkHash @ 0x180011B90 (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkDereferenceStack @ 0x180011C20 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FC1E8 (RtlpHeapTrkTrackRemoveHeap.c)
 *     NtQueryPerformanceCounter @ 0x18015F560 (NtQueryPerformanceCounter.c)
 *     RtlGetCurrentProcessorNumberEx @ 0x180163540 (RtlGetCurrentProcessorNumberEx.c)
 */

__int64 __fastcall RtlpHeapTrkInterceptor(__int64 a1, unsigned __int64 a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // dl
  signed __int32 v11; // r9d
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // r14
  volatile signed __int32 *v18; // rdx
  _QWORD *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  _QWORD **v21; // rcx
  _QWORD *j; // rbx
  _QWORD *Heap_0; // r14
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // r10
  __int64 v33; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v34[4]; // [rsp+28h] [rbp-20h] BYREF
  int v35; // [rsp+50h] [rbp+8h] BYREF

  v35 = 0;
  if ( a1 == qword_1801C7798 || dword_1801C77D8 == 1 )
    return 0LL;
  v4 = a3 - 2;
  if ( !v4 )
  {
LABEL_10:
    if ( a2 )
    {
      v9 = (a2 >> 3) | 0xE000000000000000uLL;
      if ( dword_1801C7290 == 1 )
      {
        RtlpHeapTrkTrackAdd(a1, v9);
      }
      else if ( dword_1801C7290 == 2 )
      {
        RtlGetCurrentProcessorNumberEx(&v35);
        v10 = BYTE2(v35);
        if ( BYTE2(v35) >= (unsigned int)dword_1801C7790 )
          v10 = 0;
        BYTE2(v35) = v10;
        v11 = **(_DWORD **)(qword_1801C77E0 + 8LL * v10);
        v12 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        if ( (unsigned int)(v12 - v11) >= 0x3E8 )
        {
          v32 = 8LL * v10;
          if ( v11 == _InterlockedCompareExchange(*(volatile signed __int32 **)(v32 + qword_1801C77E0), v12, v11) )
            _InterlockedExchange64(
              (volatile __int64 *)(*(_QWORD *)(v32 + qword_1801C77E0) + 8LL),
              qword_1801C77D0 / 100);
        }
        v13 = *(_QWORD *)(qword_1801C77E0 + 8LL * BYTE2(v35));
        if ( *(__int64 *)(v13 + 8) > 0 )
        {
          v34[0] = 0LL;
          v33 = 0LL;
          NtQueryPerformanceCounter(v34, 0LL);
          Heap_0 = (_QWORD *)RtlAllocateHeap_0(qword_1801C7798, 0LL, 40LL);
          if ( Heap_0 )
          {
            v24 = (unsigned int)RtlpHeapTrkHash(v9);
            Heap_0[2] = a1;
            Heap_0[3] = v9;
            v25 = RtlpHeapTrkTrackStack();
            Heap_0[4] = v25;
            if ( v25 )
            {
              v26 = 8 * (v24 & 0xF);
              RtlAcquireSRWLockExclusive(*(_QWORD *)(v26 + qword_1801C7778));
              v28 = 16 * v24 + qword_1801C7280;
              v29 = *(_QWORD *)v28;
              if ( *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28 )
                goto LABEL_38;
              *Heap_0 = v29;
              Heap_0[1] = v28;
              *(_QWORD *)(v29 + 8) = Heap_0;
              *(_QWORD *)v28 = Heap_0;
              RtlReleaseSRWLockExclusive(*(_QWORD *)(v26 + qword_1801C7778), v27);
            }
            else
            {
              RtlFreeHeap_0(qword_1801C7798, 0LL, Heap_0);
            }
          }
          NtQueryPerformanceCounter(&v33, 0LL);
          v33 -= v34[0];
          _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_1801C77E0 + 8LL * BYTE2(v35)) + 8LL), ~v33);
          _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(qword_1801C77E0 + 8LL * BYTE2(v35)) + 16LL));
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
        }
      }
    }
    return 0LL;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 2 )
          RtlpHeapTrkTrackRemoveHeap();
        return 0LL;
      }
      goto LABEL_10;
    }
  }
  if ( a2 )
  {
    v14 = (a2 >> 3) | 0xE000000000000000uLL;
    v15 = RtlpHeapTrkHash(v14);
    v16 = v15;
    v17 = 8LL * (v15 & 0xF);
    v18 = *(volatile signed __int32 **)(v17 + qword_1801C7778);
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        if ( !SchedulerSharedDataSlot[i] )
        {
          SchedulerSharedDataSlot[i] = v18;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(v18, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(v18);
    v21 = (_QWORD **)(16 * v16 + qword_1801C7280);
    for ( j = *v21; ; j = (_QWORD *)*j )
    {
      if ( j == v21 )
      {
        RtlReleaseSRWLockExclusive(*(_QWORD *)(v17 + qword_1801C7778), v18);
        return 0LL;
      }
      if ( j[3] == v14 && j[2] == a1 )
        break;
    }
    v30 = (_QWORD *)*j;
    if ( *(_QWORD **)(*j + 8LL) != j || (v31 = (_QWORD *)j[1], (_QWORD *)*v31 != j) )
LABEL_38:
      __fastfail(3u);
    *v31 = v30;
    v30[1] = v31;
    RtlReleaseSRWLockExclusive(*(_QWORD *)(v17 + qword_1801C7778), v31);
    if ( j[4] )
    {
      RtlpHeapTrkDereferenceStack();
      j[4] = 0LL;
    }
    RtlFreeHeap_0(qword_1801C7798, 0LL, j);
  }
  return 0LL;
}
