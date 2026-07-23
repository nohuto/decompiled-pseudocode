/*
 * XREFs of RtlpHeapTrkInterceptor @ 0x18005CEF0
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x180007640 (RtlpCallInterceptRoutine.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpHeapTrkTrackStack @ 0x18005BF90 (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x18005CE10 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkHash @ 0x18005D2C0 (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18005D350 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FB938 (RtlpHeapTrkTrackRemoveHeap.c)
 *     NtQueryPerformanceCounter @ 0x18015F460 (NtQueryPerformanceCounter.c)
 *     RtlGetCurrentProcessorNumberEx @ 0x180163440 (RtlGetCurrentProcessorNumberEx.c)
 */

__int64 __fastcall RtlpHeapTrkInterceptor(PVOID a1, unsigned __int64 a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  unsigned __int64 v9; // rdi
  unsigned __int8 Number; // dl
  signed __int32 v11; // r9d
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // r14
  volatile signed __int64 *v18; // rdx
  _QWORD *SchedulerSharedDataSlot; // r9
  unsigned int i; // ecx
  _QWORD **v21; // rcx
  _QWORD *j; // rbx
  _QWORD *Heap_0; // r14
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // r10
  void *v32; // rcx
  LARGE_INTEGER v33; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-20h] BYREF
  _PROCESSOR_NUMBER ProcessorNumber; // [rsp+50h] [rbp+8h] BYREF

  ProcessorNumber = 0;
  if ( a1 == HeapHandle || dword_1801C6828 == 1 )
    return 0LL;
  v4 = a3 - 2;
  if ( !v4 )
  {
LABEL_10:
    if ( a2 )
    {
      v9 = (a2 >> 3) | 0xE000000000000000uLL;
      if ( dword_1801C6290 == 1 )
      {
        RtlpHeapTrkTrackAdd((__int64)a1, v9);
      }
      else if ( dword_1801C6290 == 2 )
      {
        RtlGetCurrentProcessorNumberEx(&ProcessorNumber);
        Number = ProcessorNumber.Number;
        if ( ProcessorNumber.Number >= (unsigned int)dword_1801C67E0 )
          Number = 0;
        ProcessorNumber.Number = Number;
        v11 = **(_DWORD **)(qword_1801C6830 + 8LL * Number);
        v12 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        if ( (unsigned int)(v12 - v11) >= 0x3E8 )
        {
          v31 = 8LL * Number;
          if ( v11 == _InterlockedCompareExchange(*(volatile signed __int32 **)(v31 + qword_1801C6830), v12, v11) )
            _InterlockedExchange64(
              (volatile __int64 *)(*(_QWORD *)(v31 + qword_1801C6830) + 8LL),
              PerformanceFrequency.QuadPart / 100);
        }
        v13 = *(_QWORD *)(qword_1801C6830 + 8LL * ProcessorNumber.Number);
        if ( *(__int64 *)(v13 + 8) > 0 )
        {
          PerformanceCounter.QuadPart = 0LL;
          v33.QuadPart = 0LL;
          NtQueryPerformanceCounter(&PerformanceCounter, 0LL);
          Heap_0 = RtlAllocateHeap_0(HeapHandle, 0, 0x28uLL);
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
              RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(v26 + qword_1801C67C8));
              v27 = 16 * v24 + qword_1801C6280;
              v28 = *(_QWORD *)v27;
              if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 )
                goto LABEL_38;
              *Heap_0 = v28;
              Heap_0[1] = v27;
              *(_QWORD *)(v28 + 8) = Heap_0;
              *(_QWORD *)v27 = Heap_0;
              RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v26 + qword_1801C67C8));
            }
            else
            {
              RtlFreeHeap_0(HeapHandle, 0, Heap_0);
            }
          }
          NtQueryPerformanceCounter(&v33, 0LL);
          v33.QuadPart -= PerformanceCounter.QuadPart;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(qword_1801C6830 + 8LL * ProcessorNumber.Number) + 8LL),
            ~v33.QuadPart);
          _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(qword_1801C6830 + 8LL * ProcessorNumber.Number)
                                                            + 16LL));
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
    v18 = *(volatile signed __int64 **)(v17 + qword_1801C67C8);
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
    if ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(v18, (unsigned __int64)v18);
    v21 = (_QWORD **)(16 * v16 + qword_1801C6280);
    for ( j = *v21; ; j = (_QWORD *)*j )
    {
      if ( j == v21 )
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v17 + qword_1801C67C8));
        return 0LL;
      }
      if ( j[3] == v14 && (PVOID)j[2] == a1 )
        break;
    }
    v29 = (_QWORD *)*j;
    if ( *(_QWORD **)(*j + 8LL) != j || (v30 = (_QWORD *)j[1], (_QWORD *)*v30 != j) )
LABEL_38:
      __fastfail(3u);
    *v30 = v29;
    v29[1] = v30;
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v17 + qword_1801C67C8));
    v32 = (void *)j[4];
    if ( v32 )
    {
      RtlpHeapTrkDereferenceStack(v32);
      j[4] = 0LL;
    }
    RtlFreeHeap_0(HeapHandle, 0, j);
  }
  return 0LL;
}
