/*
 * XREFs of TpAllocPoolInternal @ 0x1800655CC
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18004E450 (TppPoolpReferenceGlobalPool.c)
 *     LdrpEnableParallelLoading @ 0x1800649F0 (LdrpEnableParallelLoading.c)
 *     TpAllocPool @ 0x1800650A0 (TpAllocPool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     TppPoolUpdateNodeRelation @ 0x18002A708 (TppPoolUpdateNodeRelation.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     TppETWPoolCreate @ 0x1800650E4 (TppETWPoolCreate.c)
 *     TpSetPoolThreadCpuSets @ 0x180065170 (TpSetPoolThreadCpuSets.c)
 *     TppInitializeTimerQueue @ 0x180065B68 (TppInitializeTimerQueue.c)
 *     TppGetCurrentThreadNumaNode @ 0x1800668B0 (TppGetCurrentThreadNumaNode.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtCreateIoCompletion @ 0x180160570 (NtCreateIoCompletion.c)
 *     NtCreateWorkerFactory @ 0x1801609D0 (NtCreateWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpAllocPoolInternal(__int64 *a1, char a2)
{
  __int64 *v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r13
  unsigned __int64 v5; // r14
  struct _PEB *v6; // rax
  unsigned __int64 MinimumStackCommit; // rcx
  __int64 Heap_0; // rdi
  __int64 v9; // r8
  int v10; // r9d
  __int64 i; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // esi
  int updated; // ebx
  __int64 v17; // r9
  HANDLE *v18; // r12
  int v19; // eax
  unsigned int v20; // eax
  HANDLE *v21; // rsi
  __int64 v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v27; // [rsp+50h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  int v30; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+20h]

  v2 = a1;
  v3 = 0LL;
  *a1 = 0LL;
  v30 = a2 & 1;
  v31 = 0LL;
  RtlImageNtHeaderEx(1, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, &v31);
  if ( !v31 )
    return (unsigned int)-1073741701;
  if ( *(_WORD *)(v31 + 24) == 523 )
  {
    v4 = *(_QWORD *)(v31 + 96);
    v5 = *(_QWORD *)(v31 + 104);
  }
  else
  {
    v4 = *(unsigned int *)(v31 + 96);
    v5 = *(unsigned int *)(v31 + 100);
  }
  v6 = NtCurrentPeb();
  MinimumStackCommit = v6->MinimumStackCommit;
  if ( MinimumStackCommit && v5 < MinimumStackCommit )
    v5 = v6->MinimumStackCommit;
  Heap_0 = RtlAllocateHeap_0();
  v32 = Heap_0;
  if ( Heap_0 )
  {
    v3 = RtlAllocateHeap_0();
    if ( v3 )
    {
      v9 = 0LL;
      v10 = TppNumberNodes;
      while ( (unsigned int)v9 < 3 )
      {
        *(_QWORD *)(Heap_0 + 8 * v9 + 16) = v3 + 24LL * (unsigned int)(v10 * v9);
        v9 = (unsigned int)(v9 + 1);
      }
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        HIDWORD(v27) = i;
        if ( (unsigned int)i >= 3 * v10 )
          break;
        v12 = (_QWORD *)(v3 + 24 * i);
        v12[2] = 0LL;
        v12[1] = v12;
        *v12 = v12;
      }
      v13 = RtlAllocateHeap_0();
      *(_QWORD *)(Heap_0 + 40) = v13;
      if ( v13 )
      {
        v14 = RtlAllocateHeap_0();
        *(_QWORD *)(Heap_0 + 48) = v14;
        if ( v14 )
        {
          v15 = *(_DWORD *)(Heap_0 + 440);
          if ( !v15 )
            v15 = MEMORY[0x7FFE03C0];
          *(_DWORD *)(Heap_0 + 424) = v15;
          updated = TppPoolUpdateNodeRelation(Heap_0);
          if ( updated < 0 )
            goto LABEL_36;
          *(_DWORD *)(Heap_0 + 428) = -2;
          v31 = (unsigned __int16)v15;
          *(_QWORD *)(Heap_0 + 8) = (unsigned __int16)v15;
          *(_DWORD *)Heap_0 = 1;
          v17 = v15 + 1;
          if ( v15 < 4 )
            v17 = 4LL;
          v18 = (HANDLE *)(Heap_0 + 64);
          updated = NtCreateIoCompletion(Heap_0 + 64, 2031619LL, 0LL, v17);
          LODWORD(v27) = updated;
          if ( updated < 0 )
            goto LABEL_36;
          v19 = *(_DWORD *)(Heap_0 + 440);
          if ( !v19 )
            v19 = MEMORY[0x7FFE03C0];
          v20 = 4 * v19;
          if ( v20 < 0x200 )
            v20 = 512;
          v21 = (HANDLE *)(Heap_0 + 56);
          updated = NtCreateWorkerFactory(
                      Heap_0 + 56,
                      983295LL,
                      0LL,
                      *v18,
                      -1LL,
                      TppWorkerThread,
                      Heap_0,
                      v20,
                      v4,
                      v5,
                      v27,
                      v3);
          if ( updated >= 0 )
          {
            if ( !v30 )
              goto LABEL_27;
            updated = NtSetInformationWorkerFactory(*v21, 13LL, &v30, 4LL);
            if ( updated >= 0 )
            {
              *(_WORD *)(Heap_0 + 378) = v30;
LABEL_27:
              *(_QWORD *)(Heap_0 + 72) = 0LL;
              *(_QWORD *)(Heap_0 + 368) = 0LL;
              *(_QWORD *)(Heap_0 + 448) = 0LL;
              *(_WORD *)(Heap_0 + 376) = 0;
              *(_QWORD *)(Heap_0 + 88) = Heap_0 + 80;
              *(_QWORD *)(Heap_0 + 80) = Heap_0 + 80;
              *(_QWORD *)(Heap_0 + 104) = Heap_0 + 96;
              *(_QWORD *)(Heap_0 + 96) = Heap_0 + 96;
              *(_QWORD *)(Heap_0 + 464) = Heap_0 + 456;
              *(_QWORD *)(Heap_0 + 456) = Heap_0 + 456;
              TppGetCurrentThreadNumaNode(Heap_0, &v31, 0LL, 0LL);
              *(_QWORD *)(Heap_0 + 400) = retaddr;
              updated = TppInitializeTimerQueue(Heap_0 + 112, Heap_0);
              if ( updated >= 0 )
              {
                updated = 0;
                RtlAcquireSRWLockExclusive(&TppPoolpListLock, v22);
                v23 = (_QWORD *)(Heap_0 + 384);
                v24 = off_1801C5740[0];
                if ( *(_UNKNOWN ***)off_1801C5740[0] != &TppPoolpList )
                  __fastfail(3u);
                *v23 = &TppPoolpList;
                *(_QWORD *)(Heap_0 + 392) = v24;
                *v24 = v23;
                off_1801C5740[0] = (_UNKNOWN **)(Heap_0 + 384);
                RtlReleaseSRWLockExclusive(&TppPoolpListLock);
                RtlAcquireSRWLockShared(&TppPoolpDefaultPoolCpuSetLock);
                if ( TppPoolpDefaultPoolCpuSetCount )
                  updated = TpSetPoolThreadCpuSets(
                              Heap_0,
                              (__int64)&TppPoolpDefaultPoolCpuSets,
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
    if ( Heap_0 )
    {
      if ( v3 )
        RtlFreeHeap_0();
      if ( *(_QWORD *)(Heap_0 + 40) )
        RtlFreeHeap_0();
      if ( *(_QWORD *)(Heap_0 + 48) )
        RtlFreeHeap_0();
      RtlFreeHeap_0();
    }
  }
  else
  {
    *v2 = Heap_0;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v25 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v25 = 2147353478LL;
    if ( *(_BYTE *)v25 )
      TppETWPoolCreate(Heap_0);
  }
  return (unsigned int)updated;
}
