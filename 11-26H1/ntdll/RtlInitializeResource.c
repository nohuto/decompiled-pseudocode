/*
 * XREFs of RtlInitializeResource @ 0x180079E50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlpFreeDebugInfo @ 0x180079A70 (RtlpFreeDebugInfo.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18007AED0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18007BB90 (RtlInitializeCriticalSectionEx.c)
 *     RtlStdLogStackTrace @ 0x18007C2C0 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x18007C530 (RtlStdReleaseStackTrace.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     NtCreateSemaphore @ 0x180160810 (NtCreateSemaphore.c)
 *     RtlpInterlockedPopEntrySList @ 0x180162CD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x180162D10 (RtlpInterlockedPushEntrySList.c)
 */

_WORD *__fastcall RtlInitializeResource(__int64 a1)
{
  unsigned __int64 Heap_0; // rdi
  __int64 v3; // rbp
  __int64 v4; // rsi
  int v5; // esi
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdx
  unsigned int v9; // eax
  _DWORD *v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // r15
  volatile signed __int32 *v13; // rdx
  _QWORD *SchedulerSharedDataSlot; // r8
  unsigned int i; // ecx
  _QWORD *v16; // r12
  _QWORD *v17; // rdx
  unsigned int j; // ecx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  int v21; // esi
  __int64 v22; // rdx
  _WORD *result; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+18h] BYREF
  __int64 v28; // [rsp+98h] [rbp+20h] BYREF

  v25 = 0LL;
  Handle = 0LL;
  Heap_0 = (unsigned __int64)RtlpInterlockedPopEntrySList(&RtlCriticalSectionDebugSList);
  if ( !Heap_0 )
  {
    if ( !NtCurrentPeb()->ProcessHeap )
      goto LABEL_35;
    Heap_0 = RtlAllocateHeap_0();
  }
  if ( !Heap_0 )
LABEL_35:
    RtlRaiseStatus(-1073741801);
  *(_DWORD *)(Heap_0 + 36) = 0;
  v3 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
  {
    LODWORD(v4) = 0;
    goto LABEL_7;
  }
  v6 = RtlStdLogStackTrace(RtlpStackTraceDatabase, 1LL);
  v7 = v6;
  if ( !v6 )
  {
    LODWORD(v4) = 0;
    goto LABEL_7;
  }
  v8 = *(unsigned __int16 *)(v6 + 14);
  v9 = 0;
  if ( (_WORD)v8 )
  {
    v10 = (_DWORD *)(v7 + 16);
    do
    {
      v9 += *v10;
      v10 += 2;
      --v8;
    }
    while ( v8 );
  }
  v11 = v9 % *(_DWORD *)(v3 + 720);
  v12 = 2LL * v11;
  if ( !byte_1801CB8C8 )
  {
    v13 = (volatile signed __int32 *)(v3 + 736 + 16LL * v11);
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        if ( !SchedulerSharedDataSlot[i] )
        {
          SchedulerSharedDataSlot[i] = v13;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64(v13, 0LL) )
      RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)(v3 + 736 + 8 * v12), (__int64)v13);
  }
  if ( !*(_DWORD *)(v7 + 10) )
  {
    v16 = 0LL;
    v26 = 0LL;
    v28 = 0LL;
    if ( !byte_1801CB8C8 )
    {
      v17 = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v17 )
      {
        for ( j = 0; j < 8; ++j )
        {
          if ( !v17[j] )
          {
            v17[j] = v3;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        RtlpAcquireSRWLockExclusiveContended((volatile signed __int64 *)v3, (__int64)v17);
    }
    v19 = *(_QWORD *)(v3 + 152);
    v20 = *(_QWORD *)(v3 + 168) - 8LL;
    v26 = v19;
    if ( *(_BYTE *)(v3 + 128) )
    {
      if ( v20 < *(_QWORD *)(v3 + 160) )
      {
LABEL_31:
        if ( !byte_1801CB8C8 )
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)v3);
        if ( v16 )
        {
          *v16 = v7;
          v4 = (__int64)(*(_QWORD *)(v3 + 184) - (_QWORD)v16) >> 3;
          *(_WORD *)(v7 + 12) = v4;
          *(_WORD *)(v7 + 10) = WORD1(v4);
        }
        else
        {
          LODWORD(v4) = 0;
        }
        goto LABEL_43;
      }
    }
    else if ( v20 < v19 )
    {
      v24 = v19 - 4096;
      v28 = 4096LL;
      if ( v24 <= *(_QWORD *)(v3 + 144) )
        goto LABEL_31;
      v26 = v24;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v26, 0LL, &v28, 4096, 4) < 0 )
        goto LABEL_31;
      *(_QWORD *)(v3 + 152) = v26;
    }
    ++*(_DWORD *)(v3 + 180);
    v16 = (_QWORD *)v20;
    *(_QWORD *)(v3 + 168) = v20;
    goto LABEL_31;
  }
  LODWORD(v4) = *(unsigned __int16 *)(v7 + 12) + (*(unsigned __int16 *)(v7 + 10) << 16);
LABEL_43:
  if ( !byte_1801CB8C8 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v3 + 736 + 8 * v12));
  if ( !(_DWORD)v4 )
    RtlStdReleaseStackTrace(v3, v7);
LABEL_7:
  *(_WORD *)(Heap_0 + 2) = v4;
  *(_WORD *)(Heap_0 + 44) = WORD1(v4);
  v5 = NtCreateSemaphore(&Handle, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v5 < 0 )
  {
    if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
      || (unsigned __int64)&RtlpStaticDebugInfo <= Heap_0 && Heap_0 < (unsigned __int64)&RtlpForceCSToUseEvents )
    {
      RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, Heap_0);
    }
    else
    {
      RtlFreeHeap_0();
    }
    RtlRaiseStatus(v5);
  }
  v21 = NtCreateSemaphore(&v25, 1048579LL, 0LL, 0LL, 0x7FFFFFFF);
  if ( v21 < 0 )
  {
    NtClose(Handle);
    RtlpFreeDebugInfo(Heap_0);
    RtlRaiseStatus(v21);
  }
  *(_QWORD *)(a1 + 40) = Handle;
  *(_QWORD *)(a1 + 56) = v25;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = Heap_0;
  RtlInitializeCriticalSectionEx(a1, 0LL, 0x8000000LL);
  RtlpAddDebugInfoToCriticalSection(a1, v22);
  result = *(_WORD **)a1;
  if ( *(_QWORD *)a1 != -1LL )
    *result = 1;
  return result;
}
