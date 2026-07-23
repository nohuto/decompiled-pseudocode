/*
 * XREFs of RtlInitializeResource @ 0x180068670
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlpFreeDebugInfo @ 0x180068290 (RtlpFreeDebugInfo.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800696F0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18006A3B0 (RtlInitializeCriticalSectionEx.c)
 *     RtlStdLogStackTrace @ 0x18006AAE0 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x18006AD50 (RtlStdReleaseStackTrace.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     NtCreateSemaphore @ 0x180160710 (NtCreateSemaphore.c)
 *     RtlpInterlockedPopEntrySList @ 0x180162BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162C10 (RtlpInterlockedPushEntrySList.c)
 */

void __cdecl RtlInitializeResource(PRTL_RESOURCE Resource)
{
  _RTL_CRITICAL_SECTION_DEBUG *Heap_0; // rdi
  void *ProcessHeap; // rcx
  PRTL_SRWLOCK v4; // rbp
  __int64 v5; // rsi
  int v6; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdx
  unsigned int v12; // eax
  _DWORD *v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // r15
  volatile signed __int32 *v16; // rdx
  _QWORD *SchedulerSharedDataSlot; // r8
  unsigned int i; // ecx
  _QWORD *v19; // r12
  _QWORD *v20; // rdx
  unsigned int j; // ecx
  char *Value; // rcx
  unsigned __int64 v23; // rsi
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  char *v28; // rcx
  HANDLE v29; // [rsp+30h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF
  HANDLE SemaphoreHandle; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+20h] BYREF

  v29 = 0LL;
  SemaphoreHandle = 0LL;
  Heap_0 = (_RTL_CRITICAL_SECTION_DEBUG *)RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !Heap_0 )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
      goto LABEL_35;
    Heap_0 = (_RTL_CRITICAL_SECTION_DEBUG *)RtlAllocateHeap_0(ProcessHeap, 0, 0x30uLL);
  }
  if ( !Heap_0 )
LABEL_35:
    RtlRaiseStatus(-1073741801);
  Heap_0->ContentionCount = 0;
  v4 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v5) = 0;
    goto LABEL_7;
  }
  v9 = RtlStdLogStackTrace(RtlpStackTraceDatabase, 1LL);
  v10 = v9;
  if ( !v9 )
  {
    LODWORD(v5) = 0;
    goto LABEL_7;
  }
  v11 = *(unsigned __int16 *)(v9 + 14);
  v12 = 0;
  if ( (_WORD)v11 )
  {
    v13 = (_DWORD *)(v10 + 16);
    do
    {
      v12 += *v13;
      v13 += 2;
      --v11;
    }
    while ( v11 );
  }
  v14 = v12 % *(_DWORD *)&v4[90].0;
  v15 = 2LL * v14;
  if ( !byte_1801CA908 )
  {
    v16 = (volatile signed __int32 *)&v4[2 * v14 + 92];
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        if ( !SchedulerSharedDataSlot[i] )
        {
          SchedulerSharedDataSlot[i] = v16;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(v16, 0LL) )
      RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)&v4[v15 + 92], (unsigned __int64)v16);
  }
  if ( !*(_DWORD *)(v10 + 10) )
  {
    v19 = 0LL;
    BaseAddress = 0LL;
    RegionSize = 0LL;
    if ( !byte_1801CA908 )
    {
      v20 = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v20 )
      {
        for ( j = 0; j < 8; ++j )
        {
          if ( !v20[j] )
          {
            v20[j] = v4;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)v4, (unsigned __int64)v20);
    }
    Value = (char *)v4[19].Value;
    v23 = v4[21].Value - 8;
    BaseAddress = Value;
    if ( v4[16].0 )
    {
      if ( v23 < v4[20].Value )
      {
LABEL_31:
        if ( !byte_1801CA908 )
          RtlReleaseSRWLockExclusive(v4);
        if ( v19 )
        {
          *v19 = v10;
          v5 = (__int64)(v4[23].Value - (_QWORD)v19) >> 3;
          *(_WORD *)(v10 + 12) = v5;
          *(_WORD *)(v10 + 10) = WORD1(v5);
        }
        else
        {
          LODWORD(v5) = 0;
        }
        goto LABEL_43;
      }
    }
    else if ( v23 < (unsigned __int64)Value )
    {
      v28 = Value - 4096;
      RegionSize = 4096LL;
      if ( (unsigned __int64)v28 <= v4[18].Value )
        goto LABEL_31;
      BaseAddress = v28;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_31;
      v4[19].Value = (unsigned __int64)BaseAddress;
    }
    ++HIDWORD(v4[22].Ptr);
    v19 = (_QWORD *)v23;
    v4[21].Value = v23;
    goto LABEL_31;
  }
  LODWORD(v5) = *(unsigned __int16 *)(v10 + 12) + (*(unsigned __int16 *)(v10 + 10) << 16);
LABEL_43:
  if ( !byte_1801CA908 )
    RtlReleaseSRWLockExclusive(&v4[v15 + 92]);
  if ( !(_DWORD)v5 )
    RtlStdReleaseStackTrace(v4, v10);
LABEL_7:
  Heap_0->CreatorBackTraceIndex = v5;
  Heap_0->CreatorBackTraceIndexHigh = WORD1(v5);
  v6 = NtCreateSemaphore(&SemaphoreHandle, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v6 < 0 )
  {
    if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
      || &RtlpStaticDebugInfo <= (_UNKNOWN *)Heap_0 && Heap_0 < (_RTL_CRITICAL_SECTION_DEBUG *)&RtlpForceCSToUseEvents )
    {
      RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, Heap_0, v7, v8);
    }
    else
    {
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
    }
    RtlRaiseStatus(v6);
  }
  v24 = NtCreateSemaphore(&v29, 0x100003u, 0LL, 0, 0x7FFFFFFF);
  if ( v24 < 0 )
  {
    NtClose(SemaphoreHandle);
    RtlpFreeDebugInfo((char *)Heap_0, v25, v26, v27);
    RtlRaiseStatus(v24);
  }
  Resource->SharedSemaphore = SemaphoreHandle;
  Resource->ExclusiveSemaphore = v29;
  Resource->NumberOfWaitingShared = 0;
  *(_QWORD *)&Resource->NumberOfWaitingExclusive = 0LL;
  Resource->ExclusiveOwnerThread = 0LL;
  Resource->Flags = 0;
  Resource->DebugInfo = Heap_0;
  RtlInitializeCriticalSectionEx(&Resource->CriticalSection, 0, 0x8000000u);
  RtlpAddDebugInfoToCriticalSection(Resource);
  if ( Resource->CriticalSection.DebugInfo != (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
    Resource->CriticalSection.DebugInfo->Type = 1;
}
