/*
 * XREFs of TpAllocPoolInternal @ 0x180085A1C
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x1800389D0 (TppPoolpReferenceGlobalPool.c)
 *     LdrpEnableParallelLoading @ 0x180084E40 (LdrpEnableParallelLoading.c)
 *     TpAllocPool @ 0x1800854F0 (TpAllocPool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     TppPoolUpdateNodeRelation @ 0x180015808 (TppPoolUpdateNodeRelation.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlImageNtHeaderEx @ 0x1800315B0 (RtlImageNtHeaderEx.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     TppETWPoolCreate @ 0x180085534 (TppETWPoolCreate.c)
 *     TpSetPoolThreadCpuSets @ 0x1800855C0 (TpSetPoolThreadCpuSets.c)
 *     TppInitializeTimerQueue @ 0x180085FB8 (TppInitializeTimerQueue.c)
 *     TppGetCurrentThreadNumaNode @ 0x180086D00 (TppGetCurrentThreadNumaNode.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtCreateIoCompletion @ 0x180160470 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x1801608D0 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x180162470 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpAllocPoolInternal(_QWORD *a1, char a2)
{
  _QWORD *v2; // rsi
  char *Heap_0; // r15
  SIZE_T StackReserve; // r13
  SIZE_T StackCommit; // r14
  struct _PEB *v6; // rax
  SIZE_T MinimumStackCommit; // rcx
  char *StartParameter; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 i; // rdx
  char *v12; // rax
  PVOID v13; // rax
  PVOID v14; // rax
  unsigned int v15; // esi
  int updated; // ebx
  ULONG v17; // r9d
  HANDLE *v18; // r12
  int v19; // eax
  ULONG MaxThreadCount; // eax
  HANDLE *v21; // rsi
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  void *v25; // r8
  void *v26; // r8
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  int WorkerFactoryInformation; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int64 v31; // [rsp+B0h] [rbp+18h] BYREF
  char *v32; // [rsp+B8h] [rbp+20h]

  v2 = a1;
  Heap_0 = 0LL;
  *a1 = 0LL;
  WorkerFactoryInformation = a2 & 1;
  v31 = 0LL;
  RtlImageNtHeaderEx(1u, NtCurrentPeb()->ImageBaseAddress, 0LL, (PIMAGE_NT_HEADERS *)&v31);
  if ( !v31 )
    return (unsigned int)-1073741701;
  if ( *(_WORD *)(v31 + 24) == 523 )
  {
    StackReserve = *(_QWORD *)(v31 + 96);
    StackCommit = *(_QWORD *)(v31 + 104);
  }
  else
  {
    StackReserve = *(unsigned int *)(v31 + 96);
    StackCommit = *(unsigned int *)(v31 + 100);
  }
  v6 = NtCurrentPeb();
  MinimumStackCommit = v6->MinimumStackCommit;
  if ( MinimumStackCommit && StackCommit < MinimumStackCommit )
    StackCommit = v6->MinimumStackCommit;
  StartParameter = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 0x1D8uLL);
  v32 = StartParameter;
  if ( StartParameter )
  {
    Heap_0 = (char *)RtlAllocateHeap_0(
                       NtCurrentPeb()->ProcessHeap,
                       TppHeapTag + 786432,
                       72LL * (unsigned int)TppNumberNodes);
    if ( Heap_0 )
    {
      v9 = 0LL;
      v10 = (unsigned int)TppNumberNodes;
      while ( (unsigned int)v9 < 3 )
      {
        *(_QWORD *)&StartParameter[8 * v9 + 16] = &Heap_0[24 * (unsigned int)(v10 * v9)];
        v9 = (unsigned int)(v9 + 1);
      }
      for ( i = 0LL; (unsigned int)i < 3 * (int)v10; i = (unsigned int)(i + 1) )
      {
        v12 = &Heap_0[24 * i];
        *((_QWORD *)v12 + 2) = 0LL;
        *((_QWORD *)v12 + 1) = v12;
        *(_QWORD *)v12 = v12;
      }
      v13 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 4 * v10);
      *((_QWORD *)StartParameter + 5) = v13;
      if ( v13 )
      {
        v14 = RtlAllocateHeap_0(
                NtCurrentPeb()->ProcessHeap,
                (TppHeapTag + 786432) | 8,
                16 * (unsigned int)TppNumberNodes * (unsigned __int64)(unsigned int)TppMaximumGroups);
        *((_QWORD *)StartParameter + 6) = v14;
        if ( v14 )
        {
          v15 = *((_DWORD *)StartParameter + 110);
          if ( !v15 )
            v15 = MEMORY[0x7FFE03C0];
          *((_DWORD *)StartParameter + 106) = v15;
          updated = TppPoolUpdateNodeRelation((__int64)StartParameter);
          if ( updated < 0 )
            goto LABEL_36;
          *((_DWORD *)StartParameter + 107) = -2;
          v31 = (unsigned __int16)v15;
          *((_QWORD *)StartParameter + 1) = (unsigned __int16)v15;
          *(_DWORD *)StartParameter = 1;
          v17 = v15 + 1;
          if ( v15 < 4 )
            v17 = 4;
          v18 = (HANDLE *)(StartParameter + 64);
          updated = NtCreateIoCompletion((PHANDLE)StartParameter + 8, 0x1F0003u, 0LL, v17);
          if ( updated < 0 )
            goto LABEL_36;
          v19 = *((_DWORD *)StartParameter + 110);
          if ( !v19 )
            v19 = MEMORY[0x7FFE03C0];
          MaxThreadCount = 4 * v19;
          if ( MaxThreadCount < 0x200 )
            MaxThreadCount = 512;
          v21 = (HANDLE *)(StartParameter + 56);
          updated = NtCreateWorkerFactory(
                      (PHANDLE)StartParameter + 7,
                      0xF00FFu,
                      0LL,
                      *v18,
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      TppWorkerThread,
                      StartParameter,
                      MaxThreadCount,
                      StackReserve,
                      StackCommit);
          if ( updated >= 0 )
          {
            if ( !WorkerFactoryInformation )
              goto LABEL_27;
            updated = NtSetInformationWorkerFactory(*v21, WorkerFactoryFlags, &WorkerFactoryInformation, 4u);
            if ( updated >= 0 )
            {
              *((_WORD *)StartParameter + 189) = WorkerFactoryInformation;
LABEL_27:
              *((_QWORD *)StartParameter + 9) = 0LL;
              *((_QWORD *)StartParameter + 46) = 0LL;
              *((_QWORD *)StartParameter + 56) = 0LL;
              *((_WORD *)StartParameter + 188) = 0;
              *((_QWORD *)StartParameter + 11) = StartParameter + 80;
              *((_QWORD *)StartParameter + 10) = StartParameter + 80;
              *((_QWORD *)StartParameter + 13) = StartParameter + 96;
              *((_QWORD *)StartParameter + 12) = StartParameter + 96;
              *((_QWORD *)StartParameter + 58) = StartParameter + 456;
              *((_QWORD *)StartParameter + 57) = StartParameter + 456;
              TppGetCurrentThreadNumaNode(StartParameter, &v31, 0LL, 0LL);
              *((_QWORD *)StartParameter + 50) = retaddr;
              updated = TppInitializeTimerQueue(StartParameter + 112, StartParameter);
              if ( updated >= 0 )
              {
                updated = 0;
                RtlAcquireSRWLockExclusive(&TppPoolpListLock);
                v22 = StartParameter + 384;
                v23 = off_1801C4740[0];
                if ( *(_UNKNOWN ***)off_1801C4740[0] != &TppPoolpList )
                  __fastfail(3u);
                *v22 = &TppPoolpList;
                *((_QWORD *)StartParameter + 49) = v23;
                *v23 = v22;
                off_1801C4740[0] = (_UNKNOWN **)(StartParameter + 384);
                RtlReleaseSRWLockExclusive(&TppPoolpListLock);
                RtlAcquireSRWLockShared(&TppPoolpDefaultPoolCpuSetLock);
                if ( TppPoolpDefaultPoolCpuSetCount )
                  updated = TpSetPoolThreadCpuSets(
                              (__int64)StartParameter,
                              &TppPoolpDefaultPoolCpuSets,
                              TppPoolpDefaultPoolCpuSetCount);
                RtlReleaseSRWLockShared(&TppPoolpDefaultPoolCpuSetLock);
              }
            }
          }
          if ( updated < 0 )
          {
            NtClose(*v18);
            if ( *v21 )
            {
              NtClose(*v21);
              *v21 = 0LL;
            }
          }
LABEL_36:
          v2 = a1;
          goto LABEL_40;
        }
      }
    }
  }
  updated = -1073741801;
LABEL_40:
  if ( updated < 0 )
  {
    if ( StartParameter )
    {
      if ( Heap_0 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap_0);
      v25 = (void *)*((_QWORD *)StartParameter + 5);
      if ( v25 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v25);
      v26 = (void *)*((_QWORD *)StartParameter + 6);
      if ( v26 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v26);
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, StartParameter);
    }
  }
  else
  {
    *v2 = StartParameter;
    if ( RtlGetCurrentServiceSessionId() )
      v24 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v24 = 2147353478LL;
    if ( *(_BYTE *)v24 )
      TppETWPoolCreate((__int64)StartParameter);
  }
  return (unsigned int)updated;
}
