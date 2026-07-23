/*
 * XREFs of EtwpLogMemInfoWs @ 0x1409BBBE8
 * Callers:
 *     EtwpLogMemInfoRundown @ 0x140835768 (EtwpLogMemInfoRundown.c)
 *     EtwpPerfMemInfoWork @ 0x1409BBBC0 (EtwpPerfMemInfoWork.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpLogMemInfoWsHelper @ 0x1409BA2C0 (EtwpLogMemInfoWsHelper.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 *     SmProcessQueryStoreStats @ 0x1409BC61C (SmProcessQueryStoreStats.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpLogMemInfoWs(__int64 a1, unsigned __int64 a2)
{
  int v3; // r12d
  int v4; // r13d
  unsigned int v5; // r15d
  unsigned int *Pool2; // rax
  unsigned int *v7; // rdi
  unsigned int *v8; // rbx
  unsigned int v9; // esi
  unsigned __int64 v10; // rax
  struct _EPROCESS *NextProcess; // rsi
  __int64 v12; // r13
  __int64 v13; // r14
  unsigned int Flags; // eax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ebx
  unsigned int *v21; // rax
  unsigned int *v22; // r14
  SYSTEM_INFORMATION_CLASS v23; // [rsp+28h] [rbp-59h]
  SYSTEM_INFORMATION_CLASS SystemInformationClass[4]; // [rsp+40h] [rbp-41h]
  __int64 v25; // [rsp+50h] [rbp-31h]
  _DWORD *v26; // [rsp+58h] [rbp-29h]
  _QWORD SystemInformation[8]; // [rsp+68h] [rbp-19h] BYREF

  v25 = a1;
  SystemInformationClass[0] = SystemFileCacheInformationEx;
  SystemInformationClass[1] = SystemPagedPoolInformationEx;
  SystemInformationClass[2] = SystemSystemPtesInformationEx;
  memset_0(SystemInformation, 0, sizeof(SystemInformation));
  v3 = 4356;
  v4 = -1;
  v5 = 64;
  Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
  v7 = Pool2;
  if ( !Pool2 )
    return;
  v8 = Pool2 + 1;
  *Pool2 = 0;
  v9 = 0;
  v26 = Pool2 + 1089;
  while ( v9 < 3 )
  {
    v23 = SystemInformationClass[v9];
    if ( ZwQuerySystemInformation(v23, SystemInformation, 0x40u, 0LL) )
      goto LABEL_31;
    *v8 = v4;
    v10 = SystemInformation[0] >> 12;
    *(_QWORD *)(v8 + 1) = SystemInformation[0] >> 12;
    *(_QWORD *)(v8 + 7) = v10;
    *(_QWORD *)(v8 + 3) = v10;
    *(_QWORD *)(v8 + 15) = 0LL;
    *(_QWORD *)(v8 + 5) = v10;
    *(_QWORD *)(v8 + 11) = 0LL;
    *(_QWORD *)(v8 + 9) = 0LL;
    *(_QWORD *)(v8 + 13) = 0LL;
    if ( v23 == SystemPagedPoolInformationEx && a2 > v10 )
    {
      *(_QWORD *)(v8 + 3) = a2;
      *(_QWORD *)(v8 + 5) = a2;
    }
    ++*v7;
    v8 += 17;
    --v4;
    ++v9;
  }
  NextProcess = (struct _EPROCESS *)PsIdleProcess;
  v12 = v25;
  v13 = (__int64)v26;
  while ( 1 )
  {
    if ( !NextProcess )
    {
      EtwpLogMemInfoWsHelper(v12, v7);
      goto LABEL_31;
    }
    Flags = NextProcess->Flags;
    if ( (Flags & 0x4000000) != 0
      && ((Flags & 4) == 0
       || !NextProcess->Pcb.Header.SignalState
       || NextProcess->ActiveThreads
       || NextProcess->Pcb.ThreadListHead.Flink != &NextProcess->Pcb.ThreadListHead) )
    {
      break;
    }
LABEL_12:
    if ( NextProcess == PsIdleProcess )
      NextProcess = 0LL;
    NextProcess = (struct _EPROCESS *)PsGetNextProcess(NextProcess);
  }
  if ( v8 != (unsigned int *)v13 )
  {
LABEL_20:
    *v8 = (unsigned int)NextProcess->UniqueProcessId;
    *(_QWORD *)(v8 + 1) = NextProcess->Vm.Instance.WorkingSetLeafSize;
    *(_QWORD *)(v8 + 7) = NextProcess->Vm.Instance.WorkingSetLeafPrivateSize;
    *(_QWORD *)(v8 + 3) = NextProcess->CommitCharge;
    *(_QWORD *)(v8 + 15) = NextProcess->SharedCommitCharge;
    *(_QWORD *)(v8 + 5) = NextProcess->VirtualSize >> 12;
    v15 = *(_QWORD *)(v8 + 5);
    v16 = *(_QWORD *)(v8 + 3);
    *(_QWORD *)(v8 + 9) = 0LL;
    *(_QWORD *)(v8 + 11) = 0LL;
    if ( v16 >= v15 )
      v16 = v15;
    v17 = *(_QWORD *)(v8 + 1);
    *(_QWORD *)(v8 + 3) = v16;
    v18 = *(_QWORD *)(v8 + 7);
    if ( v18 >= v17 )
      v18 = v17;
    *(_QWORD *)(v8 + 7) = v18;
    *(_QWORD *)(v8 + 13) = NextProcess->Vm.Shared.ReleasedCommitDebt;
    if ( (int)SmProcessQueryStoreStats(NextProcess) >= 0 )
    {
      *(_QWORD *)(v8 + 9) = 0LL;
      *(_QWORD *)(v8 + 11) = 0LL;
    }
    v8 += 17;
    ++*v7;
    goto LABEL_12;
  }
  if ( v5 >= 0x100 )
  {
    EtwpLogMemInfoWsHelper(v12, v7);
    v8 = v7 + 1;
    *v7 = 0;
    goto LABEL_20;
  }
  v19 = 68 * v5;
  v20 = v3;
  v5 *= 2;
  v3 += v19;
  v21 = (unsigned int *)ExAllocatePool2(0x40uLL);
  v22 = v21;
  if ( v21 )
  {
    memmove(v21, v7, v20);
    ExFreePoolWithTag(v7, 0);
    v7 = v22;
    v8 = &v22[17 * *v22 + 1];
    v13 = (__int64)&v22[17 * v5 + 1];
    goto LABEL_20;
  }
  ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
LABEL_31:
  ExFreePoolWithTag(v7, 0);
}
