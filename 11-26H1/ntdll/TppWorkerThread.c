/*
 * XREFs of TppWorkerThread @ 0x18003E5E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18003C634 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     TppCallbackPerformDeferredWork @ 0x18003C6B0 (TppCallbackPerformDeferredWork.c)
 *     TppWorkerFindTask @ 0x18003D370 (TppWorkerFindTask.c)
 *     RtlClearThreadWorkOnBehalfTicket @ 0x18003DBA0 (RtlClearThreadWorkOnBehalfTicket.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18003FC58 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     TppCallbackEpilog @ 0x18003FD40 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180040250 (TppCallbackCheckThreadAfterCallback.c)
 *     TppPrepareDirectParams @ 0x1800406D0 (TppPrepareDirectParams.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18004EAA0 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x18004ED88 (TppPoolpFree.c)
 *     RtlExitUserThread @ 0x180086970 (RtlExitUserThread.c)
 *     TppCritSetThread @ 0x1800E1D30 (TppCritSetThread.c)
 *     TppAllocThreadData @ 0x1800E2250 (TppAllocThreadData.c)
 *     TppPoolAddWorker @ 0x1800E2D68 (TppPoolAddWorker.c)
 *     RtlRegisterThreadWithCsrss @ 0x1800E34E0 (RtlRegisterThreadWithCsrss.c)
 *     TppPoolRemoveWorker @ 0x1800E62E8 (TppPoolRemoveWorker.c)
 *     TppFreeThreadData @ 0x1800E703C (TppFreeThreadData.c)
 *     TppPoolUpdateTrimmedWorker @ 0x1800E708C (TppPoolUpdateTrimmedWorker.c)
 *     TppFreeDirectParamsCache @ 0x1800E7C9C (TppFreeDirectParamsCache.c)
 *     TppCritResetThread @ 0x1800EC5D4 (TppCritResetThread.c)
 *     TppWorkerpInnerExceptionFilter @ 0x18011F1F4 (TppWorkerpInnerExceptionFilter.c)
 *     RtlResetStackOverflow @ 0x18013AFA8 (RtlResetStackOverflow.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180159520 (TppWorkerpOuterExceptionFilter.c)
 *     NtWorkerFactoryWorkerReady @ 0x18015EF60 (NtWorkerFactoryWorkerReady.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1801600F0 (ZwAlpcSendWaitReceivePort.c)
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x180162C10 (ZwWaitForWorkViaWorkerFactory.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

void __fastcall __noreturn TppWorkerThread(__int64 a1)
{
  char v2; // di
  unsigned __int64 *p_TppWorkerpListLock; // rsi
  __int64 v4; // rdx
  _LIST_ENTRY *p_TppWorkerpList; // rdi
  _LIST_ENTRY *Blink; // rax
  unsigned __int64 Number; // r15
  int Group; // esi
  int v9; // r14d
  int v10; // ecx
  __int64 v11; // rdx
  unsigned int i; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 **v15; // rdi
  unsigned int v16; // r14d
  __int128 *v17; // rsi
  int v18; // edi
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rdi
  unsigned __int8 v22; // r13
  __int64 v23; // rsi
  __int16 v24; // r14
  __int64 v25; // r12
  int v26; // r15d
  int v27; // eax
  bool v28; // si
  int v29; // ecx
  __int64 v30; // rdx
  signed __int64 v31; // rax
  signed __int64 v32; // r9
  char v33; // r8
  int v34; // ecx
  struct _TEB *v35; // rax
  void *CurrentTransactionHandle; // rcx
  int v37; // ecx
  struct _TEB *v38; // rax
  void *v39; // rcx
  _QWORD *v40; // rdx
  unsigned __int16 j; // dx
  _DWORD *SharedData; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // edi
  int v47; // edi
  __int64 Heap_0; // rax
  __int128 **v49; // rax
  signed __int64 v50; // rax
  signed __int64 v51; // r8
  struct _PEB *v52; // rdi
  signed __int64 v53; // rcx
  signed __int64 **v54; // rax
  __int128 **v55; // r8
  bool v56; // [rsp+41h] [rbp-277h]
  char v57; // [rsp+42h] [rbp-276h] BYREF
  char v58; // [rsp+43h] [rbp-275h]
  char v59; // [rsp+44h] [rbp-274h]
  char v60; // [rsp+45h] [rbp-273h]
  char v61; // [rsp+46h] [rbp-272h]
  bool v62; // [rsp+47h] [rbp-271h]
  int v63; // [rsp+48h] [rbp-270h]
  int v64; // [rsp+4Ch] [rbp-26Ch]
  int v65; // [rsp+50h] [rbp-268h]
  int v66; // [rsp+54h] [rbp-264h] BYREF
  int v67; // [rsp+58h] [rbp-260h] BYREF
  char v68; // [rsp+5Ch] [rbp-25Ch]
  __int64 v69; // [rsp+60h] [rbp-258h]
  struct _PEB *v70; // [rsp+68h] [rbp-250h]
  unsigned int v71; // [rsp+70h] [rbp-248h]
  int v72; // [rsp+74h] [rbp-244h] BYREF
  signed __int64 v73; // [rsp+78h] [rbp-240h]
  _LIST_ENTRY ***v74; // [rsp+80h] [rbp-238h] BYREF
  _DWORD *v75; // [rsp+88h] [rbp-230h]
  __int64 v76; // [rsp+90h] [rbp-228h] BYREF
  __int64 **v77; // [rsp+98h] [rbp-220h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-218h]
  __int128 *v79; // [rsp+A8h] [rbp-210h]
  __int64 v80; // [rsp+B0h] [rbp-208h]
  _LIST_ENTRY *v81; // [rsp+C0h] [rbp-1F8h] BYREF
  signed __int64 **v82; // [rsp+C8h] [rbp-1F0h]
  __int64 **v83; // [rsp+E0h] [rbp-1D8h]
  __int64 v84; // [rsp+F0h] [rbp-1C8h]
  _BYTE v85[72]; // [rsp+F8h] [rbp-1C0h] BYREF
  int v86; // [rsp+140h] [rbp-178h]
  char v87; // [rsp+144h] [rbp-174h]
  __int64 v88; // [rsp+150h] [rbp-168h]
  __int64 **v89; // [rsp+158h] [rbp-160h]
  int v90; // [rsp+160h] [rbp-158h]
  __int64 v91; // [rsp+178h] [rbp-140h]
  _QWORD v92[2]; // [rsp+1C8h] [rbp-F0h] BYREF
  unsigned int v93; // [rsp+1D8h] [rbp-E0h]
  int v94; // [rsp+1DCh] [rbp-DCh]
  _GUID ActivityId; // [rsp+1E0h] [rbp-D8h]
  __int64 v96; // [rsp+1F0h] [rbp-C8h]
  __int128 v97; // [rsp+1F8h] [rbp-C0h] BYREF
  __int128 v98; // [rsp+208h] [rbp-B0h] BYREF
  __int128 **v99; // [rsp+218h] [rbp-A0h]
  unsigned int v100; // [rsp+220h] [rbp-98h]
  char v101; // [rsp+228h] [rbp-90h]
  unsigned __int16 v102; // [rsp+22Ah] [rbp-8Eh]
  _BYTE v103[6]; // [rsp+230h] [rbp-88h] BYREF
  __int16 v104; // [rsp+236h] [rbp-82h]
  __int64 v105; // [rsp+250h] [rbp-68h]
  int v106; // [rsp+258h] [rbp-60h]
  int v107; // [rsp+25Ch] [rbp-5Ch]
  __int16 v108; // [rsp+260h] [rbp-58h]
  __int16 v109; // [rsp+262h] [rbp-56h]
  int v110; // [rsp+264h] [rbp-54h]
  int v111; // [rsp+268h] [rbp-50h]
  __int128 v112; // [rsp+270h] [rbp-48h] BYREF

  v75 = (_DWORD *)a1;
  v76 = 0LL;
  v66 = 0;
  v69 = a1;
  v78 = a1;
  v58 = 0;
  v59 = 0;
  v2 = 0;
  v60 = 0;
  v57 = 0;
  v61 = 0;
  v77 = 0LL;
  memset_thunk_772440563353939046(&v81, 0, 0x170uLL);
  v74 = 0LL;
  v72 = 0;
  v63 = 0;
  RtlRegisterThreadWithCsrss();
  v70 = NtCurrentPeb();
  TppCritSetThread(&v76);
  TppAllocThreadData(&v74);
  if ( v74 )
    *v74 = &v81;
  memset_thunk_772440563353939046(&v81, 0, 0x170uLL);
  RtlAcquireSRWLockShared(a1 + 368);
  if ( *(_BYTE *)(a1 + 377) )
  {
    v64 = -1073741558;
  }
  else
  {
    v64 = NtWorkerFactoryWorkerReady(*(_QWORD *)(a1 + 56));
    if ( v64 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      goto LABEL_8;
    }
  }
  v2 = 1;
  v68 = 1;
LABEL_8:
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 368));
  if ( v2 )
    goto LABEL_137;
  TppPoolAddWorker(a1, &v81);
  v60 = 1;
  p_TppWorkerpListLock = &v70->TppWorkerpListLock;
  RtlAcquireSRWLockExclusive(&v70->TppWorkerpListLock);
  p_TppWorkerpList = &v70->TppWorkerpList;
  Blink = v70->TppWorkerpList.Blink;
  if ( Blink->Flink != &v70->TppWorkerpList )
    __fastfail(3u);
  v81 = &v70->TppWorkerpList;
  v82 = (signed __int64 **)Blink;
  Blink->Flink = (_LIST_ENTRY *)&v81;
  p_TppWorkerpList->Blink = (_LIST_ENTRY *)&v81;
  v59 = 1;
  RtlReleaseSRWLockExclusive(p_TppWorkerpListLock, v4);
  memset_thunk_772440563353939046(v85, 0, 0x100uLL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
  v58 = 1;
  v71 = 0;
  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  v9 = TppNumberNodes;
  v10 = *(_DWORD *)(a1 + 440);
  if ( !v10 )
    v10 = MEMORY[0x7FFE03C0];
  v75 = (_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 424) != v10 )
  {
    RtlAcquireSRWLockExclusive(a1 + 72);
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive(a1 + 72, v11);
  }
  for ( i = 0; ; ++i )
  {
    v71 = i;
    if ( i >= TppNumberNodes )
      goto LABEL_20;
    v13 = *(_QWORD *)(a1 + 48);
    if ( *(_WORD *)(v13 + 16LL * (Group + TppMaximumGroups * i) + 8) == (_WORD)Group )
    {
      v14 = *(_QWORD *)(v13 + 16LL * (Group + TppMaximumGroups * i));
      if ( _bittest64(&v14, Number) )
        break;
    }
  }
  v9 = i;
LABEL_20:
  v100 = v9;
  v102 = Group;
LABEL_21:
  while ( 1 )
  {
    v63 = 0;
    v97 = 0LL;
    v98 = 0LL;
    v15 = v99;
    v65 = 16;
    if ( !v99 )
      break;
    if ( *((_DWORD *)v99 + 2) != 1 )
      goto LABEL_129;
    memset_thunk_772440563353939046(*v99, 0, 56LL * *((unsigned int *)v99 + 3));
    v16 = *((_DWORD *)v15 + 3);
    v65 = v16;
    v17 = *v15;
LABEL_24:
    *(_QWORD *)&v112 = v17;
    v79 = v17;
    v66 = 0;
    v18 = ZwWaitForWorkViaWorkerFactory(*(_QWORD *)(a1 + 56), v17, v16, &v66, v92);
    v64 = v18;
    if ( v18 )
      v66 = 0;
    if ( (v94 & 1) != 0 )
    {
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v92[0]);
      v94 &= ~1u;
    }
    if ( v18 )
    {
      v46 = v18 - 128;
      if ( !v46 )
        goto LABEL_137;
      v47 = v46 - 64;
      if ( v47 )
      {
        if ( v47 == 66 )
        {
          v61 = 1;
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
      if ( !a1 || (v19 = *(_DWORD *)(a1 + 440)) == 0 )
        v19 = MEMORY[0x7FFE03C0];
      if ( *v75 != v19 )
      {
        RtlAcquireSRWLockExclusive(a1 + 72);
        TppAdjustRunningThreadGoalWithLock(a1);
        RtlReleaseSRWLockExclusive(a1 + 72, v20);
      }
      if ( (unsigned __int8)TppPrepareDirectParams((unsigned int)&v81, (_DWORD)v17, v66, v16, a1, (__int64)&v57) )
        goto LABEL_137;
      if ( !v57 )
      {
        v21 = v97;
        if ( (_QWORD)v97 )
        {
          v80 = v97;
          v88 = *(_QWORD *)(v97 + 56);
          v89 = (__int64 **)v97;
          v22 = *(_BYTE *)(v97 + 68);
          v23 = *(unsigned int *)(v97 + 64);
          v112 = 0LL;
          v24 = -1;
          v67 = 0;
          v25 = v100;
          v26 = v102;
          v27 = *(_DWORD *)(a1 + 428);
          if ( (_DWORD)v23 == v100 )
          {
            if ( v27 == -1 && !v101 )
            {
              v101 = 1;
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v23));
            }
          }
          else
          {
            if ( v27 == -1 )
            {
              if ( v101 )
              {
                v40 = (_QWORD *)(a1 + 40);
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v100));
              }
              else
              {
                v101 = 1;
                v40 = (_QWORD *)(v78 + 40);
              }
              _InterlockedIncrement((volatile signed __int32 *)(*v40 + 4 * v23));
            }
            if ( ((1LL << v22) & *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(v26 + TppMaximumGroups * v23))) != 0 )
            {
              v24 = v26;
            }
            else
            {
              for ( j = 0; ; ++j )
              {
                while ( 1 )
                {
                  if ( j >= (unsigned int)TppMaximumGroups )
                    goto LABEL_101;
                  if ( j != (_WORD)v26 )
                    break;
                  ++j;
                }
                if ( ((1LL << v22) & *(_QWORD *)(*(_QWORD *)(a1 + 48)
                                               + 16LL * (TppMaximumGroups * (_DWORD)v23 + (unsigned int)j))) != 0 )
                  break;
              }
              v24 = j;
            }
LABEL_101:
            v100 = v23;
            v102 = v24;
            SharedData = NtCurrentPeb()->SharedData;
            if ( SharedData && *SharedData )
              v43 = (__int64)NtCurrentPeb()->SharedData + 556;
            else
              v43 = 2147353478LL;
            if ( *(_BYTE *)v43 )
            {
              memset_thunk_772440563353939046(v103, 0, 0x40uLL);
              v104 = 7209;
              v105 = a1;
              v106 = v25;
              v107 = v23;
              v108 = v26;
              v109 = v24;
              v44 = *(_QWORD *)(a1 + 40);
              v110 = *(_DWORD *)(v44 + 4 * v25);
              v111 = *(_DWORD *)(v44 + 4 * v23);
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
                v45 = (__int64)NtCurrentPeb()->SharedData + 556;
              else
                v45 = 2147353478LL;
              NtTraceEvent(*(unsigned __int8 *)v45, 1026LL, 28LL, v103);
            }
            v112 = 0LL;
            NtSetInformationThread(-2LL, 30LL, &v112, 16LL);
            LOWORD(v67) = v24;
            HIWORD(v67) = v22;
            NtSetInformationThread(-2LL, 33LL, &v67, 4LL);
          }
          ActivityId = NtCurrentTeb()->ActivityId;
          if ( v91 && (*(_BYTE *)(v91 + 436) & 1) == 0 )
          {
            v34 = v90 | 8;
            v90 |= 8u;
            if ( NtCurrentTeb()->IsImpersonating )
              v90 = v34 | 4;
            v35 = NtCurrentTeb();
            CurrentTransactionHandle = v35->CurrentTransactionHandle;
            if ( CurrentTransactionHandle && CurrentTransactionHandle != (void *)-1LL
              || v35->TxnScopeEnterCallback
              || v35->TxnScopeExitCallback
              || v35->TxnScopeContext
              || v35->TxFsContext != 65534 )
            {
              v90 |= 0x10u;
            }
            if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              v90 |= 0x20u;
            if ( NtCurrentTeb()->PreferredLanguages )
              v90 |= 0x40u;
            if ( NtCurrentTeb()->SavedPriorityState )
              v90 |= 0x80u;
          }
          (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, __int128 *))(v21 + 56))(
            v85,
            v21,
            *((_QWORD *)&v97 + 1),
            &v98);
          goto LABEL_41;
        }
        while ( 1 )
        {
          if ( !(unsigned int)TppWorkerFindTask(a1, (volatile signed __int64 *)&v81, (__int64)&v77) )
            goto LABEL_137;
          if ( (v94 & 1) != 0 )
          {
            ZwAlpcSendWaitReceivePort(v92[1], v93, v92[0], 0LL, 0LL, 0LL, 0LL, 0LL);
            RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v92[0]);
            v94 &= ~1u;
          }
          v96 = 0LL;
          RtlClearThreadWorkOnBehalfTicket();
          v83 = v77;
          v88 = **v77;
          v89 = v77;
          v91 = v84;
          ActivityId = NtCurrentTeb()->ActivityId;
          if ( v84 && (*(_BYTE *)(v84 + 436) & 1) == 0 )
          {
            v37 = v90 | 8;
            v90 |= 8u;
            if ( NtCurrentTeb()->IsImpersonating )
              v90 = v37 | 4;
            v38 = NtCurrentTeb();
            v39 = v38->CurrentTransactionHandle;
            if ( v39 && v39 != (void *)-1LL
              || v38->TxnScopeEnterCallback
              || v38->TxnScopeExitCallback
              || v38->TxnScopeContext
              || v38->TxFsContext != 65534 )
            {
              v90 |= 0x10u;
            }
            if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
              v90 |= 0x20u;
            if ( NtCurrentTeb()->PreferredLanguages )
              v90 |= 0x40u;
            if ( NtCurrentTeb()->SavedPriorityState )
              v90 |= 0x80u;
          }
          ((void (__fastcall *)(_BYTE *, __int64 **))**v77)(v85, v77);
LABEL_41:
          v56 = (v87 & 4) != 0;
          v28 = v86 == 4;
          v62 = v86 == 4;
          TppCallbackEpilog(v85);
          v83 = 0LL;
          if ( v56 )
            break;
          if ( !a1 || (v29 = *(_DWORD *)(a1 + 440)) == 0 )
            v29 = MEMORY[0x7FFE03C0];
          if ( *v75 != v29 )
          {
            RtlAcquireSRWLockExclusive(a1 + 72);
            TppAdjustRunningThreadGoalWithLock(a1);
            RtlReleaseSRWLockExclusive(a1 + 72, v30);
          }
          v73 = 0LL;
          _m_prefetchw((const void *)(a1 + 8));
          v31 = *(_QWORD *)(a1 + 8);
          v73 = v31;
          do
          {
            v32 = v31;
            if ( *(_BYTE *)(a1 + 376) )
              goto LABEL_137;
            if ( HIDWORD(v31) && ((v31 & 0x8000u) == 0LL || v28) )
            {
              v33 = 0;
              HIDWORD(v73) = HIDWORD(v31) - 1;
            }
            else
            {
              v33 = 1;
              LODWORD(v73) = ((__int16)v31 + 1) ^ (v31 ^ ((__int16)v31 + 1)) & 0xFFFF0000;
            }
            v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v73, v31);
            v73 = v31;
          }
          while ( v31 != v32 );
          v57 = v33;
          if ( v33 )
            goto LABEL_21;
        }
        *(_QWORD *)&v112 = 0LL;
        _m_prefetchw((const void *)(a1 + 8));
        v50 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)&v112 = v50;
        do
        {
          v51 = v50;
          LODWORD(v112) = ((__int16)v50 + 1) ^ (((__int16)v50 + 1) ^ v50) & 0xFFFF0000;
          v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v112, v50);
          *(_QWORD *)&v112 = v50;
        }
        while ( v50 != v51 );
        v72 = 3;
        NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 9LL, &v72, 4LL);
LABEL_137:
        if ( (v94 & 1) != 0 )
        {
          TppCallbackSendAndDestroyAlpcMessage((__int64)v85);
          v94 &= ~1u;
        }
        v96 = 0LL;
        RtlClearThreadWorkOnBehalfTicket();
        if ( v58 )
          _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
        if ( v59 )
        {
          v52 = v70;
          RtlAcquireSRWLockExclusive(&v70->TppWorkerpListLock);
          v53 = (signed __int64)v81;
          v54 = v82;
          if ( (_LIST_ENTRY **)v81->Blink != &v81 || *v82 != (signed __int64 *)&v81 )
            __fastfail(3u);
          *v82 = (signed __int64 *)v81;
          *(_QWORD *)(v53 + 8) = v54;
          RtlReleaseSRWLockExclusive(&v52->TppWorkerpListLock, &v81);
        }
        if ( v60 )
        {
          TppPoolRemoveWorker(&v81);
          if ( v61 )
            TppPoolUpdateTrimmedWorker(a1);
        }
        if ( a1 == TppPoolpGlobalPool )
        {
          TppPoolpDereferenceGlobalPool(&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
        }
        else if ( a1 == TppPoolpSerializedPool )
        {
          TppPoolpDereferenceGlobalPool(&TppPoolpSerializedPool, &TppPoolpSerializedPoolLock);
        }
        else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
        {
          TppPoolpFree(a1);
        }
        TppCritResetThread(v76);
        TppFreeThreadData(v74);
        v55 = v99;
        if ( v99 && _InterlockedExchangeAdd((volatile signed __int32 *)v99 + 2, 0xFFFFFFFF) == 1 )
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 3145728), *v55);
        v64 = 0;
        RtlExitUserThread(0LL);
        __debugbreak();
      }
    }
  }
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 3145728) | 8u, 912LL);
  v17 = (__int128 *)Heap_0;
  if ( Heap_0 )
  {
    v49 = (__int128 **)(Heap_0 + 896);
    *v49 = v17;
    *((_DWORD *)v17 + 226) = 1;
    *((_DWORD *)v17 + 227) = 16;
    v99 = v49;
    v16 = 16;
  }
  else
  {
LABEL_129:
    v16 = 1;
    v17 = &v97;
  }
  v65 = v16;
  goto LABEL_24;
}
