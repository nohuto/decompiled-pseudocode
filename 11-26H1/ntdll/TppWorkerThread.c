/*
 * XREFs of TppWorkerThread @ 0x180028B50
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x180026BA4 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppCallbackPerformDeferredWork @ 0x180026C20 (TppCallbackPerformDeferredWork.c)
 *     TppWorkerFindTask @ 0x1800278E0 (TppWorkerFindTask.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x180028110 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18002A1C8 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     TppCallbackEpilog @ 0x18002A2B0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18002A7C0 (TppCallbackCheckThreadAfterCallback.c)
 *     TppPrepareDirectParams @ 0x18002AC40 (TppPrepareDirectParams.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     TppPoolpDereferenceGlobalPool @ 0x180039020 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x180039308 (TppPoolpFree.c)
 *     RtlExitUserThread @ 0x18007DD10 (RtlExitUserThread.c)
 *     TppCritSetThread @ 0x1800DF5D0 (TppCritSetThread.c)
 *     TppAllocThreadData @ 0x1800DFD50 (TppAllocThreadData.c)
 *     TppPoolAddWorker @ 0x1800E15C8 (TppPoolAddWorker.c)
 *     RtlRegisterThreadWithCsrss @ 0x1800E1D40 (RtlRegisterThreadWithCsrss.c)
 *     TppPoolRemoveWorker @ 0x1800E44F8 (TppPoolRemoveWorker.c)
 *     TppFreeThreadData @ 0x1800E5A9C (TppFreeThreadData.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800E5AEC (TppPoolUpdateTrimmedWorker.c)
 *     TppFreeDirectParamsCache @ 0x1800E66FC (TppFreeDirectParamsCache.c)
 *     TppCritResetThread @ 0x1800EB7A4 (TppCritResetThread.c)
 *     TppWorkerpInnerExceptionFilter @ 0x18011EFA4 (TppWorkerpInnerExceptionFilter.c)
 *     RtlResetStackOverflow @ 0x18013AD18 (RtlResetStackOverflow.c)
 *     TppWorkerpOuterExceptionFilter @ 0x1801593F0 (TppWorkerpOuterExceptionFilter.c)
 *     NtWorkerFactoryWorkerReady @ 0x18015EE60 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     ZwAlpcSendWaitReceivePort @ 0x18015FFF0 (ZwAlpcSendWaitReceivePort.c)
 *     NtSetInformationWorkerFactory @ 0x180162470 (NtSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x180162B10 (ZwWaitForWorkViaWorkerFactory.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  char v2; // di
  _RTL_SRWLOCK *v3; // rsi
  _RTL_SRWLOCK *v4; // rdi
  signed __int64 **Value; // rax
  unsigned __int64 Number; // r15
  int Group; // esi
  int v8; // r14d
  int v9; // ecx
  unsigned int i; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  _FILE_IO_COMPLETION_INFORMATION **v13; // rdi
  ULONG v14; // r14d
  _FILE_IO_COMPLETION_INFORMATION *v15; // rsi
  NTSTATUS v16; // edi
  int v17; // ecx
  __int64 v18; // rdi
  unsigned __int8 v19; // r13
  __int64 v20; // rsi
  __int16 v21; // r14
  __int64 v22; // r12
  int v23; // r15d
  int v24; // eax
  bool v25; // si
  int v26; // ecx
  signed __int64 v27; // rax
  signed __int64 v28; // r9
  char v29; // r8
  int v30; // ecx
  struct _TEB *v31; // rax
  void *CurrentTransactionHandle; // rcx
  int v33; // ecx
  struct _TEB *v34; // rax
  void *v35; // rcx
  _QWORD *v36; // rdx
  unsigned __int16 j; // dx
  _DWORD *SharedData; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  NTSTATUS v42; // edi
  NTSTATUS v43; // edi
  _FILE_IO_COMPLETION_INFORMATION *Heap_0; // rax
  _FILE_IO_COMPLETION_INFORMATION **v45; // rax
  signed __int64 v46; // rax
  signed __int64 v47; // r8
  _RTL_SRWLOCK *v48; // rdi
  signed __int64 v49; // rcx
  signed __int64 **v50; // rax
  PVOID *v51; // r8
  bool v52; // [rsp+41h] [rbp-277h]
  char v53; // [rsp+42h] [rbp-276h] BYREF
  char v54; // [rsp+43h] [rbp-275h]
  char v55; // [rsp+44h] [rbp-274h]
  char v56; // [rsp+45h] [rbp-273h]
  char v57; // [rsp+46h] [rbp-272h]
  bool v58; // [rsp+47h] [rbp-271h]
  int v59; // [rsp+48h] [rbp-270h]
  NTSTATUS v60; // [rsp+4Ch] [rbp-26Ch]
  int v61; // [rsp+50h] [rbp-268h]
  ULONG PacketsReturned; // [rsp+54h] [rbp-264h] BYREF
  int v63; // [rsp+58h] [rbp-260h] BYREF
  char v64; // [rsp+5Ch] [rbp-25Ch]
  __int64 v65; // [rsp+60h] [rbp-258h]
  _RTL_SRWLOCK *v66; // [rsp+68h] [rbp-250h]
  unsigned int v67; // [rsp+70h] [rbp-248h]
  int WorkerFactoryInformation; // [rsp+74h] [rbp-244h] BYREF
  signed __int64 v69; // [rsp+78h] [rbp-240h]
  PVOID BaseAddress; // [rsp+80h] [rbp-238h] BYREF
  _DWORD *v71; // [rsp+88h] [rbp-230h]
  __int64 v72; // [rsp+90h] [rbp-228h] BYREF
  __int64 **v73; // [rsp+98h] [rbp-220h] BYREF
  __int64 v74; // [rsp+A0h] [rbp-218h]
  _FILE_IO_COMPLETION_INFORMATION *v75; // [rsp+A8h] [rbp-210h]
  __int64 v76; // [rsp+B0h] [rbp-208h]
  _RTL_SRWLOCK *v77; // [rsp+C0h] [rbp-1F8h] BYREF
  signed __int64 **v78; // [rsp+C8h] [rbp-1F0h]
  __int64 **v79; // [rsp+E0h] [rbp-1D8h]
  __int64 v80; // [rsp+F0h] [rbp-1C8h]
  _BYTE v81[72]; // [rsp+F8h] [rbp-1C0h] BYREF
  int v82; // [rsp+140h] [rbp-178h]
  char v83; // [rsp+144h] [rbp-174h]
  __int64 v84; // [rsp+150h] [rbp-168h]
  __int64 **v85; // [rsp+158h] [rbp-160h]
  int v86; // [rsp+160h] [rbp-158h]
  __int64 v87; // [rsp+178h] [rbp-140h]
  _WORKER_FACTORY_DEFERRED_WORK DeferredWork; // [rsp+1C8h] [rbp-F0h] BYREF
  _GUID ActivityId; // [rsp+1E0h] [rbp-D8h]
  __int64 v90; // [rsp+1F0h] [rbp-C8h]
  __int128 v91; // [rsp+1F8h] [rbp-C0h] BYREF
  __int128 v92; // [rsp+208h] [rbp-B0h] BYREF
  _FILE_IO_COMPLETION_INFORMATION **v93; // [rsp+218h] [rbp-A0h]
  unsigned int v94; // [rsp+220h] [rbp-98h]
  char v95; // [rsp+228h] [rbp-90h]
  unsigned __int16 v96; // [rsp+22Ah] [rbp-8Eh]
  _BYTE Fields[6]; // [rsp+230h] [rbp-88h] BYREF
  __int16 v98; // [rsp+236h] [rbp-82h]
  __int64 v99; // [rsp+250h] [rbp-68h]
  int v100; // [rsp+258h] [rbp-60h]
  int v101; // [rsp+25Ch] [rbp-5Ch]
  __int16 v102; // [rsp+260h] [rbp-58h]
  __int16 v103; // [rsp+262h] [rbp-56h]
  int v104; // [rsp+264h] [rbp-54h]
  int v105; // [rsp+268h] [rbp-50h]
  __int128 ThreadInformation; // [rsp+270h] [rbp-48h] BYREF

  v71 = (_DWORD *)a1;
  v72 = 0LL;
  PacketsReturned = 0;
  v65 = a1;
  v74 = a1;
  v54 = 0;
  v55 = 0;
  v2 = 0;
  v56 = 0;
  v53 = 0;
  v57 = 0;
  v73 = 0LL;
  memset_thunk_772440563353939046(&v77, 0, 0x170uLL);
  BaseAddress = 0LL;
  WorkerFactoryInformation = 0;
  v59 = 0;
  RtlRegisterThreadWithCsrss();
  v66 = (_RTL_SRWLOCK *)NtCurrentPeb();
  TppCritSetThread(&v72);
  TppAllocThreadData(&BaseAddress);
  if ( BaseAddress )
    *(_QWORD *)BaseAddress = &v77;
  memset_thunk_772440563353939046(&v77, 0, 0x170uLL);
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v60 = -1073741558;
  }
  else
  {
    v60 = NtWorkerFactoryWorkerReady(*(HANDLE *)(a1 + 56));
    if ( v60 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      goto LABEL_8;
    }
  }
  v2 = 1;
  v64 = 1;
LABEL_8:
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( v2 )
    goto LABEL_137;
  TppPoolAddWorker(a1, &v77);
  v56 = 1;
  v3 = v66 + 113;
  RtlAcquireSRWLockExclusive(v66 + 113);
  v4 = v66 + 114;
  Value = (signed __int64 **)v66[115].Value;
  if ( *Value != (signed __int64 *)&v66[114] )
    __fastfail(3u);
  v77 = v66 + 114;
  v78 = Value;
  *Value = (signed __int64 *)&v77;
  v4[1].Value = (unsigned __int64)&v77;
  v55 = 1;
  RtlReleaseSRWLockExclusive(v3);
  memset_thunk_772440563353939046(v81, 0, 0x100uLL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
  v54 = 1;
  v67 = 0;
  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  v8 = TppNumberNodes;
  v9 = *(_DWORD *)(a1 + 440);
  if ( !v9 )
    v9 = MEMORY[0x7FFE03C0];
  v71 = (_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 424) != v9 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  }
  for ( i = 0; ; ++i )
  {
    v67 = i;
    if ( i >= TppNumberNodes )
      goto LABEL_20;
    v11 = *(_QWORD *)(a1 + 48);
    if ( *(_WORD *)(v11 + 16LL * (Group + TppMaximumGroups * i) + 8) == (_WORD)Group )
    {
      v12 = *(_QWORD *)(v11 + 16LL * (Group + TppMaximumGroups * i));
      if ( _bittest64(&v12, Number) )
        break;
    }
  }
  v8 = i;
LABEL_20:
  v94 = v8;
  v96 = Group;
LABEL_21:
  while ( 1 )
  {
    v59 = 0;
    v91 = 0LL;
    v92 = 0LL;
    v13 = v93;
    v61 = 16;
    if ( !v93 )
      break;
    if ( *((_DWORD *)v93 + 2) != 1 )
      goto LABEL_129;
    memset_thunk_772440563353939046(*v93, 0, 56LL * *((unsigned int *)v93 + 3));
    v14 = *((_DWORD *)v13 + 3);
    v61 = v14;
    v15 = *v13;
LABEL_24:
    *(_QWORD *)&ThreadInformation = v15;
    v75 = v15;
    PacketsReturned = 0;
    v16 = ZwWaitForWorkViaWorkerFactory(*(HANDLE *)(a1 + 56), v15, v14, &PacketsReturned, &DeferredWork);
    v60 = v16;
    if ( v16 )
      PacketsReturned = 0;
    if ( (DeferredWork.Flags & 1) != 0 )
    {
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, DeferredWork.AlpcSendMessage);
      DeferredWork.Flags &= ~1u;
    }
    if ( v16 )
    {
      v42 = v16 - 128;
      if ( !v42 )
        goto LABEL_137;
      v43 = v42 - 64;
      if ( v43 )
      {
        if ( v43 == 66 )
        {
          v57 = 1;
          goto LABEL_137;
        }
      }
      else
      {
        TppCallbackCheckThreadAfterCallback(0LL);
      }
    }
    else
    {
      if ( !a1 || (v17 = *(_DWORD *)(a1 + 440)) == 0 )
        v17 = MEMORY[0x7FFE03C0];
      if ( *v71 != v17 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
        TppAdjustRunningThreadGoalWithLock(a1);
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
      }
      if ( (unsigned __int8)TppPrepareDirectParams(
                              (unsigned int)&v77,
                              (_DWORD)v15,
                              PacketsReturned,
                              v14,
                              a1,
                              (__int64)&v53) )
        goto LABEL_137;
      if ( !v53 )
      {
        v18 = v91;
        if ( (_QWORD)v91 )
        {
          v76 = v91;
          v84 = *(_QWORD *)(v91 + 56);
          v85 = (__int64 **)v91;
          v19 = *(_BYTE *)(v91 + 68);
          v20 = *(unsigned int *)(v91 + 64);
          ThreadInformation = 0LL;
          v21 = -1;
          v63 = 0;
          v22 = v94;
          v23 = v96;
          v24 = *(_DWORD *)(a1 + 428);
          if ( (_DWORD)v20 == v94 )
          {
            if ( v24 == -1 && !v95 )
            {
              v95 = 1;
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v20));
            }
          }
          else
          {
            if ( v24 == -1 )
            {
              if ( v95 )
              {
                v36 = (_QWORD *)(a1 + 40);
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v94));
              }
              else
              {
                v95 = 1;
                v36 = (_QWORD *)(v74 + 40);
              }
              _InterlockedIncrement((volatile signed __int32 *)(*v36 + 4 * v20));
            }
            if ( ((1LL << v19) & *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(v23 + TppMaximumGroups * v20))) != 0 )
            {
              v21 = v23;
            }
            else
            {
              for ( j = 0; ; ++j )
              {
                while ( 1 )
                {
                  if ( j >= (unsigned int)TppMaximumGroups )
                    goto LABEL_101;
                  if ( j != (_WORD)v23 )
                    break;
                  ++j;
                }
                if ( ((1LL << v19) & *(_QWORD *)(*(_QWORD *)(a1 + 48)
                                               + 16LL * (TppMaximumGroups * (_DWORD)v20 + (unsigned int)j))) != 0 )
                  break;
              }
              v21 = j;
            }
LABEL_101:
            v94 = v20;
            v96 = v21;
            SharedData = NtCurrentPeb()->SharedData;
            if ( SharedData && *SharedData )
              v39 = (__int64)NtCurrentPeb()->SharedData + 556;
            else
              v39 = 2147353478LL;
            if ( *(_BYTE *)v39 )
            {
              memset_thunk_772440563353939046(Fields, 0, 0x40uLL);
              v98 = 7209;
              v99 = a1;
              v100 = v22;
              v101 = v20;
              v102 = v23;
              v103 = v21;
              v40 = *(_QWORD *)(a1 + 40);
              v104 = *(_DWORD *)(v40 + 4 * v22);
              v105 = *(_DWORD *)(v40 + 4 * v20);
              if ( RtlGetCurrentServiceSessionId() )
                v41 = (__int64)NtCurrentPeb()->SharedData + 556;
              else
                v41 = 2147353478LL;
              NtTraceEvent((HANDLE)*(unsigned __int8 *)v41, 0x402u, 0x1Cu, Fields);
            }
            ThreadInformation = 0LL;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, &ThreadInformation, 0x10u);
            LOWORD(v63) = v21;
            HIWORD(v63) = v19;
            NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessorEx, &v63, 4u);
          }
          ActivityId = NtCurrentTeb()->ActivityId;
          if ( v87 && (*(_BYTE *)(v87 + 436) & 1) == 0 )
          {
            v30 = v86 | 8;
            v86 |= 8u;
            if ( NtCurrentTeb()->IsImpersonating )
              v86 = v30 | 4;
            v31 = NtCurrentTeb();
            CurrentTransactionHandle = v31->CurrentTransactionHandle;
            if ( CurrentTransactionHandle && CurrentTransactionHandle != (void *)-1LL
              || v31->TxnScopeEnterCallback
              || v31->TxnScopeExitCallback
              || v31->TxnScopeContext
              || v31->TxFsContext != 65534 )
            {
              v86 |= 0x10u;
            }
            if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              v86 |= 0x20u;
            if ( NtCurrentTeb()->PreferredLanguages )
              v86 |= 0x40u;
            if ( NtCurrentTeb()->SavedPriorityState )
              v86 |= 0x80u;
          }
          (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, __int128 *))(v18 + 56))(
            v81,
            v18,
            *((_QWORD *)&v91 + 1),
            &v92);
          goto LABEL_41;
        }
        while ( 1 )
        {
          if ( !(unsigned int)TppWorkerFindTask(a1, (volatile signed __int64 *)&v77, (__int64)&v73) )
            goto LABEL_137;
          if ( (DeferredWork.Flags & 1) != 0 )
          {
            ZwAlpcSendWaitReceivePort(
              DeferredWork.AlpcSendMessagePort,
              DeferredWork.AlpcSendMessageFlags,
              DeferredWork.AlpcSendMessage,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL);
            RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, DeferredWork.AlpcSendMessage);
            DeferredWork.Flags &= ~1u;
          }
          v90 = 0LL;
          RtlClearThreadWorkOnBehalfTicket();
          v79 = v73;
          v84 = **v73;
          v85 = v73;
          v87 = v80;
          ActivityId = NtCurrentTeb()->ActivityId;
          if ( v80 && (*(_BYTE *)(v80 + 436) & 1) == 0 )
          {
            v33 = v86 | 8;
            v86 |= 8u;
            if ( NtCurrentTeb()->IsImpersonating )
              v86 = v33 | 4;
            v34 = NtCurrentTeb();
            v35 = v34->CurrentTransactionHandle;
            if ( v35 && v35 != (void *)-1LL
              || v34->TxnScopeEnterCallback
              || v34->TxnScopeExitCallback
              || v34->TxnScopeContext
              || v34->TxFsContext != 65534 )
            {
              v86 |= 0x10u;
            }
            if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              v86 |= 0x20u;
            if ( NtCurrentTeb()->PreferredLanguages )
              v86 |= 0x40u;
            if ( NtCurrentTeb()->SavedPriorityState )
              v86 |= 0x80u;
          }
          ((void (__fastcall *)(_BYTE *, __int64 **))**v73)(v81, v73);
LABEL_41:
          v52 = (v83 & 4) != 0;
          v25 = v82 == 4;
          v58 = v82 == 4;
          TppCallbackEpilog(v81);
          v79 = 0LL;
          if ( v52 )
            break;
          if ( !a1 || (v26 = *(_DWORD *)(a1 + 440)) == 0 )
            v26 = MEMORY[0x7FFE03C0];
          if ( *v71 != v26 )
          {
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
            TppAdjustRunningThreadGoalWithLock(a1);
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
          }
          v69 = 0LL;
          _m_prefetchw((const void *)(a1 + 8));
          v27 = *(_QWORD *)(a1 + 8);
          v69 = v27;
          do
          {
            v28 = v27;
            if ( *(_BYTE *)(a1 + 376) )
              goto LABEL_137;
            if ( HIDWORD(v27) && ((v27 & 0x8000u) == 0LL || v25) )
            {
              v29 = 0;
              HIDWORD(v69) = HIDWORD(v27) - 1;
            }
            else
            {
              v29 = 1;
              LODWORD(v69) = ((__int16)v27 + 1) ^ (v27 ^ ((__int16)v27 + 1)) & 0xFFFF0000;
            }
            v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v69, v27);
            v69 = v27;
          }
          while ( v27 != v28 );
          v53 = v29;
          if ( v29 )
            goto LABEL_21;
        }
        *(_QWORD *)&ThreadInformation = 0LL;
        _m_prefetchw((const void *)(a1 + 8));
        v46 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)&ThreadInformation = v46;
        do
        {
          v47 = v46;
          LODWORD(ThreadInformation) = ((__int16)v46 + 1) ^ (((__int16)v46 + 1) ^ v46) & 0xFFFF0000;
          v46 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), ThreadInformation, v46);
          *(_QWORD *)&ThreadInformation = v46;
        }
        while ( v46 != v47 );
        WorkerFactoryInformation = 3;
        NtSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
LABEL_137:
        if ( (DeferredWork.Flags & 1) != 0 )
        {
          TppCallbackSendAndDestroyAlpcMessage((__int64)v81);
          DeferredWork.Flags &= ~1u;
        }
        v90 = 0LL;
        RtlClearThreadWorkOnBehalfTicket();
        if ( v54 )
          _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
        if ( v55 )
        {
          v48 = v66;
          RtlAcquireSRWLockExclusive(v66 + 113);
          v49 = (signed __int64)v77;
          v50 = v78;
          if ( (_RTL_SRWLOCK **)v77[1].Value != &v77 || *v78 != (signed __int64 *)&v77 )
            __fastfail(3u);
          *v78 = (signed __int64 *)v77;
          *(_QWORD *)(v49 + 8) = v50;
          RtlReleaseSRWLockExclusive(v48 + 113);
        }
        if ( v56 )
        {
          TppPoolRemoveWorker(&v77);
          if ( v57 )
            TppPoolUpdateTrimmedWorker(a1);
        }
        if ( a1 == TppPoolpGlobalPool )
        {
          TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
        }
        else if ( (PVOID)a1 == TppPoolpSerializedPool )
        {
          TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
        }
        else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        {
          TppPoolpFree((PVOID)a1);
        }
        TppCritResetThread(v72);
        TppFreeThreadData(BaseAddress);
        v51 = (PVOID *)v93;
        if ( v93 && _InterlockedExchangeAdd((volatile signed __int32 *)v93 + 2, 0xFFFFFFFF) == 1 )
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *v51);
        v60 = 0;
        RtlExitUserThread(0);
      }
    }
  }
  Heap_0 = (_FILE_IO_COMPLETION_INFORMATION *)RtlAllocateHeap_0(
                                                NtCurrentPeb()->ProcessHeap,
                                                (TppHeapTag + 3145728) | 8,
                                                0x390uLL);
  v15 = Heap_0;
  if ( Heap_0 )
  {
    v45 = (_FILE_IO_COMPLETION_INFORMATION **)&Heap_0[28];
    *v45 = v15;
    LODWORD(v15[28].ApcContext) = 1;
    HIDWORD(v15[28].ApcContext) = 16;
    v93 = v45;
    v14 = 16;
  }
  else
  {
LABEL_129:
    v14 = 1;
    v15 = (_FILE_IO_COMPLETION_INFORMATION *)&v91;
  }
  v61 = v14;
  goto LABEL_24;
}
