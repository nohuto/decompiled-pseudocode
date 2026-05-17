/*
 * XREFs of RtlpAddDebugInfoToCriticalSection @ 0x18007AED0
 * Callers:
 *     RtlInitializeCriticalSectionAndSpinCount @ 0x180079790 (RtlInitializeCriticalSectionAndSpinCount.c)
 *     RtlInitializeCriticalSection @ 0x180079910 (RtlInitializeCriticalSection.c)
 *     RtlInitializeResource @ 0x180079E50 (RtlInitializeResource.c)
 *     RtlpWaitOnCriticalSection @ 0x18007A720 (RtlpWaitOnCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18007BB90 (RtlInitializeCriticalSectionEx.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpFreeDebugInfo @ 0x180079A70 (RtlpFreeDebugInfo.c)
 *     RtlStdLogStackTrace @ 0x18007C2C0 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x18007C530 (RtlStdReleaseStackTrace.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     RtlpInterlockedPopEntrySList @ 0x180162CD0 (RtlpInterlockedPopEntrySList.c)
 */

struct _TEB *__fastcall RtlpAddDebugInfoToCriticalSection(__int64 a1)
{
  struct _TEB *result; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rbp
  __int64 v7; // rsi
  volatile signed __int64 v8; // rbx
  void *v9; // rcx
  signed __int64 *v11; // rax
  signed __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  unsigned int v16; // eax
  _DWORD *v17; // rcx
  __int64 v18; // r13
  _QWORD *SchedulerSharedDataSlot; // r8
  unsigned int i; // ecx
  _QWORD *v21; // r12
  unsigned int j; // ecx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // [rsp+78h] [rbp+10h] BYREF
  __int64 v27; // [rsp+80h] [rbp+18h] BYREF

  result = (struct _TEB *)RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  v4 = (unsigned __int64)result;
  if ( !result )
  {
    result = (struct _TEB *)NtCurrentPeb();
    if ( !result->NtTib.Self )
    {
LABEL_42:
      _InterlockedIncrement(&RtlFailedCriticalDebugAllocations);
      return result;
    }
    result = (struct _TEB *)RtlAllocateHeap_0();
    v4 = (unsigned __int64)result;
  }
  if ( !v4 )
    goto LABEL_42;
  v5 = 0;
  *(_WORD *)v4 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x8000000) != 0 )
    *(_WORD *)v4 = 1;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 8) = a1;
  *(_DWORD *)(v4 + 40) = 0;
  *(_WORD *)(v4 + 46) = 17235;
  v6 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v7) = 0;
    goto LABEL_9;
  }
  v13 = RtlStdLogStackTrace(RtlpStackTraceDatabase, 2LL);
  v14 = v13;
  if ( !v13 )
  {
    LODWORD(v7) = 0;
    goto LABEL_9;
  }
  v15 = *(unsigned __int16 *)(v13 + 14);
  v16 = 0;
  if ( (_WORD)v15 )
  {
    v17 = (_DWORD *)(v14 + 16);
    do
    {
      v16 += *v17;
      v17 += 2;
      --v15;
    }
    while ( v15 );
  }
  v3 = v16 % *(_DWORD *)(v6 + 720);
  v18 = 2LL * (unsigned int)v3;
  if ( !byte_1801CB8C8 )
  {
    v3 = v6 + 736 + 16LL * (unsigned int)v3;
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        if ( !SchedulerSharedDataSlot[i] )
        {
          SchedulerSharedDataSlot[i] = v3;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
      RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(v6 + 736 + 8 * v18), v3);
  }
  if ( !*(_DWORD *)(v14 + 10) )
  {
    v21 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    if ( !byte_1801CB8C8 )
    {
      v3 = (__int64)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v3 )
      {
        for ( j = 0; j < 8; ++j )
        {
          if ( !*(_QWORD *)(v3 + 8LL * j) )
          {
            *(_QWORD *)(v3 + 8LL * j) = v6;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)v6, v3);
    }
    v23 = *(_QWORD *)(v6 + 152);
    v24 = *(_QWORD *)(v6 + 168) - 8LL;
    v26 = v23;
    if ( *(_BYTE *)(v6 + 128) )
    {
      if ( v24 < *(_QWORD *)(v6 + 160) )
      {
LABEL_38:
        if ( !byte_1801CB8C8 )
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)v6);
        if ( v21 )
        {
          *v21 = v14;
          v7 = (__int64)(*(_QWORD *)(v6 + 184) - (_QWORD)v21) >> 3;
          *(_WORD *)(v14 + 12) = v7;
          *(_WORD *)(v14 + 10) = WORD1(v7);
        }
        else
        {
          LODWORD(v7) = 0;
        }
        goto LABEL_50;
      }
    }
    else if ( v24 < v23 )
    {
      v25 = v23 - 4096;
      v27 = 4096LL;
      if ( v25 <= *(_QWORD *)(v6 + 144) )
        goto LABEL_38;
      v26 = v25;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v26, 0LL, &v27, 4096, 4) < 0 )
        goto LABEL_38;
      *(_QWORD *)(v6 + 152) = v26;
    }
    ++*(_DWORD *)(v6 + 180);
    v21 = (_QWORD *)v24;
    *(_QWORD *)(v6 + 168) = v24;
    goto LABEL_38;
  }
  LODWORD(v7) = *(unsigned __int16 *)(v14 + 12) + (*(unsigned __int16 *)(v14 + 10) << 16);
LABEL_50:
  if ( !byte_1801CB8C8 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 736 + 8 * v18));
  if ( !(_DWORD)v7 )
    RtlStdReleaseStackTrace(v6, v14);
LABEL_9:
  *(_WORD *)(v4 + 2) = v7;
  *(_WORD *)(v4 + 44) = WORD1(v7);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, v4, -1LL) != -1 )
    return (struct _TEB *)RtlpFreeDebugInfo(v4);
  v8 = *(_QWORD *)a1;
  v9 = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( v9 )
  {
    while ( v5 < 8 )
    {
      v3 = (__int64)v9 + 8 * v5;
      if ( !*(_QWORD *)v3 )
      {
        *(_QWORD *)v3 = &RtlCriticalSectionLock;
        break;
      }
      ++v5;
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlCriticalSectionLock, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(&RtlCriticalSectionLock, v3);
  v11 = (signed __int64 *)off_1801C58E8;
  v12 = v8 + 16;
  if ( *off_1801C58E8 != (_UNKNOWN *)&RtlCriticalSectionList )
    __fastfail(3u);
  *(_QWORD *)v12 = &RtlCriticalSectionList;
  *(_QWORD *)(v12 + 8) = v11;
  *v11 = v12;
  off_1801C58E8 = (_UNKNOWN **)v12;
  return RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
}
