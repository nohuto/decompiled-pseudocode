/*
 * XREFs of TpTrimPools @ 0x1800E78E0
 * Callers:
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 * Callees:
 *     RtlSleepConditionVariableSRW @ 0x180017BF0 (RtlSleepConditionVariableSRW.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtWaitForMultipleObjects @ 0x18015F990 (NtWaitForMultipleObjects.c)
 *     NtSetInformationWorkerFactory @ 0x180162470 (NtSetInformationWorkerFactory.c)
 */

void TpTrimPools()
{
  _UNKNOWN **v0; // r14
  _UNKNOWN **v1; // rbx
  _RTL_SRWLOCK *v2; // rbp
  _RTL_SRWLOCK *v3; // r15
  char v4; // r13
  unsigned __int64 v5; // r8
  NTSTATUS v6; // r9d
  NTSTATUS v7; // eax
  void **v8; // rsi
  char *Heap_0; // r12
  PVOID *v10; // r15
  __int64 v11; // rdi
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  void ***v15; // rdi
  void **v16; // rcx
  void **v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  ULONG v20; // r10d
  PVOID *v21; // rbx
  void ***v22; // rdi
  void **v23; // rcx
  void **v24; // rax
  int WorkerFactoryInformation; // [rsp+70h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+78h] [rbp+10h] BYREF
  _RTL_SRWLOCK *v27; // [rsp+80h] [rbp+18h]

  WorkerFactoryInformation = 0;
  Timeout.QuadPart = -1000000LL;
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  v0 = (_UNKNOWN **)TppPoolpList;
  while ( v0 != &TppPoolpList )
  {
    v1 = v0;
    v0 = (_UNKNOWN **)*v0;
    v2 = (_RTL_SRWLOCK *)(v1 - 2);
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)v1 - 2);
    if ( *((_BYTE *)v1 - 7) )
      goto LABEL_4;
    v3 = (_RTL_SRWLOCK *)(v1 - 39);
    v27 = (_RTL_SRWLOCK *)(v1 - 39);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v1 - 39);
    WorkerFactoryInformation = 0;
    v4 = 1;
    if ( NtSetInformationWorkerFactory(*(v1 - 41), WorkerFactoryTimeoutWaiters, &WorkerFactoryInformation, 4u) >= 0
      && WorkerFactoryInformation )
    {
      v5 = *((_DWORD *)v1 + 13) & 0xFFFFF001 | (2 * (WorkerFactoryInformation & 0x7FF));
      v6 = 0;
      *((_DWORD *)v1 + 13) = v5;
      if ( (((unsigned int)v5 >> 11) & 0xFFE) < (v5 & 0xFFE) )
      {
        do
        {
          if ( v6 == 258 )
            break;
          v7 = RtlSleepConditionVariableSRW((PRTL_CONDITION_VARIABLE)v1 + 8, (PRTL_SRWLOCK)v1 - 39, &Timeout, 0);
          v5 = *((unsigned int *)v1 + 13);
          v6 = v7;
        }
        while ( (((unsigned int)v5 >> 11) & 0xFFE) < (*((_DWORD *)v1 + 13) & 0xFFEu) );
      }
      if ( (v5 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v1 + 13) = v5 & 0xFFFFF001;
        goto LABEL_34;
      }
      v8 = (void **)(v1 + 9);
      Heap_0 = (char *)RtlAllocateHeap_0(
                         NtCurrentPeb()->ProcessHeap,
                         (TppHeapTag + 786432) | 8,
                         8 * ((v5 >> 12) & 0x7FF));
      if ( !Heap_0 )
      {
        while ( 1 )
        {
          v22 = (void ***)*v8;
          if ( *v8 == v8 )
            break;
          v23 = *v22;
          if ( (*v22)[1] != v22 || (v24 = v22[1], *v24 != v22) )
LABEL_21:
            __fastfail(3u);
          *v24 = v23;
          v23[1] = v24;
          NtClose(v22[2]);
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v22);
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
        goto LABEL_34;
      }
      v10 = (PVOID *)RtlAllocateHeap_0(
                       NtCurrentPeb()->ProcessHeap,
                       (TppHeapTag + 786432) | 8,
                       8LL * ((*((_DWORD *)v1 + 13) >> 12) & 0x7FF));
      if ( v10 )
      {
        v11 = 0LL;
        while ( 1 )
        {
          v12 = *v8;
          if ( *v8 == v8 )
            break;
          *(_QWORD *)&Heap_0[8 * v11] = v12[2];
          v10[v11] = v12;
          v13 = *v12;
          if ( *(_QWORD **)(*v12 + 8LL) != v12 )
            goto LABEL_21;
          v14 = (_QWORD *)v12[1];
          if ( (_QWORD *)*v14 != v12 )
            goto LABEL_21;
          *v14 = v13;
          v11 = (unsigned int)(v11 + 1);
          *(_QWORD *)(v13 + 8) = v14;
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v1 - 39);
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)v1 - 2);
        v4 = 0;
        v18 = 0;
        do
        {
          v19 = v18 << 6;
          if ( (unsigned int)v19 >= (unsigned int)v11 )
            break;
          v20 = (int)v19 + 64 <= (unsigned int)v11 ? 64 : v11 & 0x3F;
          if ( NtWaitForMultipleObjects(v20, (HANDLE *)&Heap_0[8 * v19], WaitAll, 0, &Timeout) == 258 )
            break;
          ++v18;
        }
        while ( v18 <= (unsigned int)v11 >> 6 );
        if ( (_DWORD)v11 )
        {
          v21 = v10;
          do
          {
            NtClose(*(PVOID *)((char *)v21 + Heap_0 - (char *)v10));
            RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v21++);
            --v11;
          }
          while ( v11 );
        }
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v10);
      }
      else
      {
        while ( 1 )
        {
          v15 = (void ***)*v8;
          if ( *v8 == v8 )
            break;
          v16 = *v15;
          if ( (*v15)[1] != v15 )
            goto LABEL_21;
          v17 = v15[1];
          if ( *v17 != v15 )
            goto LABEL_21;
          *v17 = v16;
          v16[1] = v17;
          NtClose(v15[2]);
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v15);
        }
        *((_DWORD *)v1 + 13) &= 0xFF800001;
      }
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap_0);
      if ( v4 )
      {
        v3 = v27;
        goto LABEL_34;
      }
    }
    else
    {
LABEL_34:
      RtlReleaseSRWLockExclusive(v3);
LABEL_4:
      RtlReleaseSRWLockShared(v2);
    }
  }
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
