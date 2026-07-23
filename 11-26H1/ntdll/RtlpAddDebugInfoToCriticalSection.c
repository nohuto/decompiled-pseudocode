/*
 * XREFs of RtlpAddDebugInfoToCriticalSection @ 0x1800696F0
 * Callers:
 *     RtlInitializeCriticalSectionAndSpinCount @ 0x180067FB0 (RtlInitializeCriticalSectionAndSpinCount.c)
 *     RtlInitializeCriticalSection @ 0x180068130 (RtlInitializeCriticalSection.c)
 *     RtlInitializeResource @ 0x180068670 (RtlInitializeResource.c)
 *     RtlpWaitOnCriticalSection @ 0x180068F40 (RtlpWaitOnCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18006A3B0 (RtlInitializeCriticalSectionEx.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpFreeDebugInfo @ 0x180068290 (RtlpFreeDebugInfo.c)
 *     RtlStdLogStackTrace @ 0x18006AAE0 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x18006AD50 (RtlStdReleaseStackTrace.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     RtlpInterlockedPopEntrySList @ 0x180162BD0 (RtlpInterlockedPopEntrySList.c)
 */

void __fastcall RtlpAddDebugInfoToCriticalSection(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *Heap_0; // rbx
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 *v5; // r9
  void *ProcessHeap; // rcx
  unsigned int v7; // edi
  PRTL_SRWLOCK v8; // rbp
  __int64 v9; // rsi
  volatile signed __int64 v10; // rbx
  void *v11; // rcx
  signed __int64 *v13; // rax
  signed __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  unsigned int v18; // eax
  _DWORD *v19; // rcx
  __int64 v20; // r13
  unsigned int i; // ecx
  _QWORD *v22; // r12
  unsigned int j; // ecx
  char *Value; // rcx
  unsigned __int64 v25; // rsi
  char *v26; // rcx
  PVOID BaseAddress; // [rsp+78h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+18h] BYREF

  Heap_0 = RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !Heap_0 )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
    {
LABEL_42:
      _InterlockedIncrement(&RtlFailedCriticalDebugAllocations);
      return;
    }
    Heap_0 = RtlAllocateHeap_0(ProcessHeap, 0, 0x30uLL);
  }
  if ( !Heap_0 )
    goto LABEL_42;
  v7 = 0;
  *(_WORD *)Heap_0 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
    *(_WORD *)Heap_0 = 1;
  Heap_0[4] = 0LL;
  Heap_0[1] = a1;
  *((_DWORD *)Heap_0 + 10) = 0;
  *((_WORD *)Heap_0 + 23) = 17235;
  v8 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v9) = 0;
    goto LABEL_9;
  }
  v15 = RtlStdLogStackTrace(RtlpStackTraceDatabase, 2LL);
  v16 = v15;
  if ( !v15 )
  {
    LODWORD(v9) = 0;
    goto LABEL_9;
  }
  v17 = *(unsigned __int16 *)(v15 + 14);
  v18 = 0;
  if ( (_WORD)v17 )
  {
    v19 = (_DWORD *)(v16 + 16);
    do
    {
      v18 += *v19;
      v19 += 2;
      --v17;
    }
    while ( v17 );
  }
  v2 = v18 % *(_DWORD *)&v8[90].0;
  v20 = 2LL * (unsigned int)v2;
  if ( !byte_1801CA908 )
  {
    v2 = (__int64)&v8[2 * (unsigned int)v2 + 92];
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v5 = &SchedulerSharedDataSlot[i];
        if ( !*v5 )
        {
          *v5 = v2;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)&v8[v20 + 92], v2);
  }
  if ( !*(_DWORD *)(v16 + 10) )
  {
    v22 = 0LL;
    BaseAddress = 0LL;
    RegionSize = 0LL;
    if ( !byte_1801CA908 )
    {
      v2 = (__int64)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v2 )
      {
        for ( j = 0; j < 8; ++j )
        {
          SchedulerSharedDataSlot = (_QWORD *)(v2 + 8LL * j);
          if ( !*SchedulerSharedDataSlot )
          {
            *SchedulerSharedDataSlot = v8;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
        RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)v8, v2);
    }
    Value = (char *)v8[19].Value;
    v25 = v8[21].Value - 8;
    BaseAddress = Value;
    if ( v8[16].0 )
    {
      if ( v25 < v8[20].Value )
      {
LABEL_38:
        if ( !byte_1801CA908 )
          RtlReleaseSRWLockExclusive(v8);
        if ( v22 )
        {
          *v22 = v16;
          v9 = (__int64)(v8[23].Value - (_QWORD)v22) >> 3;
          *(_WORD *)(v16 + 12) = v9;
          *(_WORD *)(v16 + 10) = WORD1(v9);
        }
        else
        {
          LODWORD(v9) = 0;
        }
        goto LABEL_50;
      }
    }
    else if ( v25 < (unsigned __int64)Value )
    {
      v26 = Value - 4096;
      RegionSize = 4096LL;
      if ( (unsigned __int64)v26 <= v8[18].Value )
        goto LABEL_38;
      BaseAddress = v26;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_38;
      v8[19].Value = (unsigned __int64)BaseAddress;
    }
    ++HIDWORD(v8[22].Ptr);
    v22 = (_QWORD *)v25;
    v8[21].Value = v25;
    goto LABEL_38;
  }
  LODWORD(v9) = *(unsigned __int16 *)(v16 + 12) + (*(unsigned __int16 *)(v16 + 10) << 16);
LABEL_50:
  if ( !byte_1801CA908 )
    RtlReleaseSRWLockExclusive(&v8[v20 + 92]);
  if ( !(_DWORD)v9 )
    RtlStdReleaseStackTrace(v8, v16);
LABEL_9:
  *((_WORD *)Heap_0 + 1) = v9;
  *((_WORD *)Heap_0 + 22) = WORD1(v9);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)Heap_0, -1LL) == -1 )
  {
    v10 = *(_QWORD *)a1;
    v11 = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( v11 )
    {
      while ( v7 < 8 )
      {
        v2 = (__int64)v11 + 8 * v7;
        if ( !*(_QWORD *)v2 )
        {
          *(_QWORD *)v2 = &RtlCriticalSectionLock;
          break;
        }
        ++v7;
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlCriticalSectionLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)&RtlCriticalSectionLock, v2);
    v13 = (signed __int64 *)off_1801C48E8;
    v14 = v10 + 16;
    if ( *off_1801C48E8 != (_UNKNOWN *)&RtlCriticalSectionList )
      __fastfail(3u);
    *(_QWORD *)v14 = &RtlCriticalSectionList;
    *(_QWORD *)(v14 + 8) = v13;
    *v13 = v14;
    off_1801C48E8 = (_UNKNOWN **)v14;
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
  }
  else
  {
    RtlpFreeDebugInfo((char *)Heap_0, v2, (__int64)SchedulerSharedDataSlot, (__int64)v5);
  }
}
