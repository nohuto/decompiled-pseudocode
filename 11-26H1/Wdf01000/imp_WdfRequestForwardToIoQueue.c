/*
 * XREFs of imp_WdfRequestForwardToIoQueue @ 0x140032D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1400306F4 (WPP_IFR_SF_qLsqd.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x140031FD0 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004EFB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x14004F760 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x140050150 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1400DD008 (Vf_VerifyWdfRequestForwardToIoQueue.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DDE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400E4FC4 (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1400E5908 (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestForwardToIoQueue(
        FxTagTracker *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 DestinationQueue)
{
  const void *v5; // r12
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  _FX_DRIVER_GLOBALS *v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  _FX_DRIVER_GLOBALS *v11; // rsi
  _FX_DRIVER_GLOBALS *v12; // rdx
  int v13; // r15d
  __int64 v14; // r14
  _FX_DRIVER_GLOBALS *v15; // rdx
  FxRequestCompletionState v16; // r15d
  const void *_a1; // rax
  unsigned __int8 v18; // r8
  _LIST_ENTRY *v19; // r14
  _FX_DRIVER_GLOBALS *v20; // rcx
  _FX_DRIVER_GLOBALS *v21; // rdx
  unsigned __int8 v22; // r8
  char v23; // al
  unsigned __int8 v24; // r13
  unsigned int _a4; // eax
  _FX_DRIVER_GLOBALS *v26; // rdx
  _FX_DRIVER_GLOBALS *v27; // r14
  char v28; // r15
  unsigned int v29; // edx
  _FX_DRIVER_GLOBALS *v30; // rdx
  _DWORD *v31; // rcx
  _FX_DRIVER_GLOBALS **v32; // rax
  volatile unsigned int *p_Contention; // r8
  int v34; // r14d
  const void *v35; // rcx
  const char *_a5; // rdx
  unsigned __int8 v37; // r8
  unsigned __int8 v38; // r8
  unsigned __int8 v39; // al
  unsigned __int8 v40; // r8
  _FX_DRIVER_GLOBALS *ImageAddress; // rdx
  __int64 v42; // rax
  unsigned __int8 v43; // dl
  unsigned __int16 v44; // r9
  _FX_DRIVER_GLOBALS *v45; // rax
  unsigned __int8 v46; // dl
  unsigned __int16 v47; // r9
  FxVerifierLock *v48; // rcx
  FxVerifierLock *v49; // rcx
  FxVerifierLock *v50; // rcx
  FxTagTracker *v51; // rcx
  __int64 v52; // r9
  volatile unsigned int **v53; // rax
  _FX_DRIVER_GLOBALS *v54; // rax
  unsigned __int8 v55; // r8
  KIRQL v56; // dl
  unsigned __int8 v57; // r8
  FxVerifierLock *v59; // rcx
  FxVerifierLock *v60; // rcx
  FxVerifierLock *v61; // rcx
  unsigned int v62; // r8d
  unsigned __int8 v63; // r8
  FxVerifierLock *v64; // rcx
  FxVerifierLock *v65; // rcx
  FxTagTracker *v66; // rcx
  const _GUID *traceGuid; // [rsp+28h] [rbp-39h]
  __int16 queue; // [rsp+58h] [rbp-9h]
  unsigned __int64 v69; // [rsp+60h] [rbp-1h] BYREF
  _FX_DRIVER_GLOBALS **v70; // [rsp+68h] [rbp+7h] BYREF
  unsigned __int64 *v71; // [rsp+70h] [rbp+Fh] BYREF
  __int16 v72; // [rsp+78h] [rbp+17h]
  __int16 v73; // [rsp+7Ah] [rbp+19h]
  int v74; // [rsp+7Ch] [rbp+1Bh]
  unsigned __int8 PreviousIrql; // [rsp+C8h] [rbp+67h] BYREF
  unsigned __int8 v76; // [rsp+D8h] [rbp+77h] BYREF
  FxRequestCompletionState NewState; // [rsp+E0h] [rbp+7Fh]

  if ( !DestinationQueue )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-1].m_TagHistory[15].StackFrames,
      WDF_INVALID_HANDLE,
      0LL,
      0x1003uLL);
  v5 = 0LL;
  v6 = ~DestinationQueue & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(v7) = 0;
  if ( (DestinationQueue & 1) != 0 )
  {
    v7 = *(unsigned __int16 *)v6;
    v6 -= v7;
  }
  if ( *(_WORD *)(v6 + 8) == 4099 )
  {
    v69 = v6;
  }
  else
  {
    v73 = v7;
    v69 = 0LL;
    v74 = 0;
    v42 = *(_QWORD *)v6;
    v71 = &v69;
    v72 = 4099;
    if ( (*(int (__fastcall **)(unsigned __int64, unsigned __int64 **))(v42 + 40))(v6, &v71) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(v6 + 16),
        v43,
        DestinationQueue,
        v44,
        traceGuid,
        (const void *)DestinationQueue,
        0x1003u,
        (const void *)v6,
        *(unsigned __int16 *)(v6 + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v6 + 16), WDF_INVALID_HANDLE, DestinationQueue, 0x1003uLL);
    }
    v6 = v69;
  }
  v8 = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
  if ( !Request )
    FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v6 + 16), WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v9) = 0;
  v10 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Request & 1) != 0 )
  {
    v9 = *(unsigned __int16 *)v10;
    v10 -= v9;
  }
  if ( *(_WORD *)(v10 + 8) == 4104 )
  {
    v70 = (_FX_DRIVER_GLOBALS **)v10;
  }
  else
  {
    v73 = v9;
    v70 = 0LL;
    v74 = 0;
    v45 = *(_FX_DRIVER_GLOBALS **)v10;
    v71 = (unsigned __int64 *)&v70;
    v72 = 4104;
    if ( ((int (__fastcall *)(unsigned __int64, unsigned __int64 **))v45->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
           v10,
           &v71) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(v10 + 16),
        v46,
        DestinationQueue,
        v47,
        traceGuid,
        (const void *)Request,
        0x1008u,
        (const void *)v10,
        *(unsigned __int16 *)(v10 + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v10 + 16), WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    v10 = (unsigned __int64)v70;
    v6 = v69;
  }
  if ( *(_BYTE *)(v10 + 214) || (v11 = *(_FX_DRIVER_GLOBALS **)(v10 + 248)) == 0LL )
  {
    if ( v8->FxVerifierOn )
    {
      v13 = Vf_VerifyWdfRequestForwardToIoQueue(v8, (FxRequest *)v10);
      if ( v13 < 0 )
        return (unsigned int)v13;
      v10 = (unsigned __int64)v70;
      v6 = v69;
    }
    return (unsigned int)FxIoQueue::QueueDriverCreatedRequest((FxIoQueue *)v6, (FxRequest *)v10, 0);
  }
  v12 = *(_FX_DRIVER_GLOBALS **)&v11->Refcnt;
  if ( !v12->FxVerifierOn
    || (v13 = FxIoQueue::Vf_VerifyForwardRequest(*(FxIoQueue **)(v10 + 248), v12, (FxIoQueue *)v6, (FxRequest *)v10),
        v13 >= 0) )
  {
    v14 = *(_QWORD *)&v11->Refcnt;
    v71 = (unsigned __int64 *)v14;
    PreviousIrql = 0;
    v15 = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
    if ( *(char *)(v10 + 24) < 0 )
    {
      DriverGlobals = *(FxTagTracker **)(v10 - 48);
      if ( DriverGlobals )
        FxTagTracker::UpdateTagHistory(
          DriverGlobals,
          (void *)0x74617453,
          1399,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          (unsigned int)v15);
    }
    if ( *(_BYTE *)(v10 + 214) )
    {
      NewState = FxRequestCompletionStateNone;
      if ( *(_WORD *)(v10 + 10) )
        _a1 = (const void *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v10 + 16), 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(*(_FX_DRIVER_GLOBALS **)(v10 + 16));
    }
    else
    {
      v16 = *(unsigned __int8 *)(v10 + 237);
      NewState = v16;
      *(_BYTE *)(v10 + 237) = 0;
      if ( v16 )
        (*(void (__fastcall **)(unsigned __int64, __int64, __int64, const char *))(*(_QWORD *)v10 + 16LL))(
          v10,
          1952543827LL,
          1813LL,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    if ( *(_BYTE *)(v14 + 324) )
      queue = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags((FxIoQueue *)DriverGlobals, v15, (FxRequest *)v10);
    else
      queue = 0;
    if ( (char)v11->DestroyEvent.m_Event.Header.gap0 < 0
      && (v48 = *(FxVerifierLock **)&v11[-1].Public.DriverName[8]) != 0LL )
    {
      FxVerifierLock::Lock(v48, &PreviousIrql, DestinationQueue);
      v18 = PreviousIrql;
    }
    else
    {
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v11->FxPoolFrameworks.NonPagedLock.m_DbgFlagIsInitialized);
      PreviousIrql = v18;
    }
    v19 = (_LIST_ENTRY *)(v10 + 304);
    v20 = *(_FX_DRIVER_GLOBALS **)(v10 + 304);
    if ( v20->Linkage.Blink == (_LIST_ENTRY *)(v10 + 304) )
    {
      v21 = *(_FX_DRIVER_GLOBALS **)(v10 + 312);
      if ( v21->Linkage.Flink == v19 )
      {
        v21->Linkage.Flink = &v20->Linkage;
        v20->Linkage.Blink = &v21->Linkage;
        *(_QWORD *)(v10 + 312) = v10 + 304;
        v19->Flink = v19;
        if ( (char)v11->DestroyEvent.m_Event.Header.gap0 < 0
          && (v50 = *(FxVerifierLock **)&v11[-1].Public.DriverName[8]) != 0LL )
        {
          FxVerifierLock::Unlock(v50, v18, v18);
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)&v11->FxPoolFrameworks.NonPagedLock.m_DbgFlagIsInitialized, v18);
        }
        v23 = *(_BYTE *)(v6 + 24);
        v76 = 0;
        if ( v23 < 0 && (v49 = *(FxVerifierLock **)(v6 - 40)) != 0LL )
        {
          FxVerifierLock::Lock(v49, &v76, v22);
          v24 = v76;
        }
        else
        {
          v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 112));
          v76 = v24;
        }
        _a4 = *(_DWORD *)(v6 + 188);
        if ( (_a4 & 1) != 0 )
        {
          v26 = *(_FX_DRIVER_GLOBALS **)(v10 + 16);
          v27 = (_FX_DRIVER_GLOBALS *)(v6 + 192);
          v28 = *(_BYTE *)(v10 + 213);
          if ( v26->FxVerifierOn
            && FxRequest::Vf_VerifyInsertIrpQueue((FxRequest *)v10, v26, (FxIrpQueue *)(v6 + 192)) < 0 )
          {
            *(_QWORD *)(v10 + 248) = v6;
            goto LABEL_104;
          }
          v29 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
          if ( *(char *)(v10 + 24) < 0 )
          {
            v51 = *(FxTagTracker **)(v10 - 48);
            if ( v51 )
              FxTagTracker::UpdateTagHistory(
                v51,
                (void *)0x75657551,
                1900,
                "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                TagAddRef,
                v29);
          }
          v30 = *(_FX_DRIVER_GLOBALS **)(v10 + 152);
          v31 = (_DWORD *)(v10 + 120);
          *(_QWORD *)(v10 + 224) = v27;
          if ( v10 == -120LL )
          {
            *(_QWORD *)&v30->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized = v27;
          }
          else
          {
            *(_QWORD *)&v30->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized = v31;
            *(_QWORD *)(v10 + 128) = v30;
            *(_QWORD *)(v10 + 136) = v27;
            *v31 = 1;
          }
          v32 = *(_FX_DRIVER_GLOBALS ***)(v6 + 200);
          p_Contention = &v30->FxPoolFrameworks.PagedLock.m_Lock.Contention;
          if ( *v32 == v27 )
          {
            *(_QWORD *)&v30->FxPoolFrameworks.PagedLock.m_Lock.Event.Header.Lock = v32;
            *(_QWORD *)p_Contention = v27;
            *v32 = (_FX_DRIVER_GLOBALS *)p_Contention;
            *(_QWORD *)(v6 + 200) = p_Contention;
            ++*(_DWORD *)(v6 + 224);
            BYTE3(v30->FxPoolFrameworks.PagedLock.m_Lock.Event.Header.WaitListHead.Flink->Flink) |= 1u;
            _InterlockedExchange64(
              (volatile __int64 *)&v30->WdfLogHeader,
              (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
            if ( !LOBYTE(v30->Tag) || !_InterlockedExchange64((volatile __int64 *)&v30->WdfLogHeader, 0LL) )
            {
              v34 = 0;
              goto LABEL_81;
            }
            v52 = *(_QWORD *)p_Contention;
            if ( *(volatile unsigned int **)(*(_QWORD *)p_Contention + 8LL) == p_Contention )
            {
              v53 = *(volatile unsigned int ***)&v30->FxPoolFrameworks.PagedLock.m_Lock.Event.Header.Lock;
              if ( *v53 == p_Contention )
              {
                *v53 = (volatile unsigned int *)v52;
                *(_QWORD *)(v52 + 8) = v53;
                *(_QWORD *)&v30->FxPoolFrameworks.PagedLock.m_Lock.Event.Header.Lock = &v30->FxPoolFrameworks.PagedLock.m_Lock.Contention;
                *(_QWORD *)p_Contention = p_Contention;
                --*(_DWORD *)(v6 + 224);
                if ( v10 != -120LL )
                  *(_QWORD *)(v10 + 128) = 0LL;
                *(_QWORD *)&v30->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized = 0LL;
                v54 = *(_FX_DRIVER_GLOBALS **)v10;
                *(_QWORD *)(v10 + 224) = 0LL;
                v34 = -1073741536;
                (*(void (__fastcall **)(unsigned __int64, __int64, __int64, const char *))&v54->Refcnt)(
                  v10,
                  1969583441LL,
                  1916LL,
                  "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
LABEL_81:
                *(_QWORD *)(v10 + 248) = v6;
                if ( v34 >= 0 )
                {
                  if ( *(_DWORD *)(v6 + 224) == 1 || *(_BYTE *)(v6 + 373) )
                    FxIoQueue::SetTransitionFromEmpty((FxIoQueue *)v6);
LABEL_84:
                  if ( v28 && *(_DWORD *)(v6 + 368) )
                    FxNonPagedObject::Unlock((FxNonPagedObject *)v6, v24, (unsigned __int8)p_Contention);
                  else
                    FxIoQueue::DispatchEvents((FxIoQueue *)v6, v24, 0LL);
                  v13 = 0;
                  if ( (char)v11->DestroyEvent.m_Event.Header.gap0 < 0
                    && (v59 = *(FxVerifierLock **)&v11[-1].Public.DriverName[8]) != 0LL )
                  {
                    FxVerifierLock::Lock(v59, &PreviousIrql, v55);
                    v56 = PreviousIrql;
                  }
                  else
                  {
                    v56 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v11->FxPoolFrameworks.NonPagedLock.m_DbgFlagIsInitialized);
                  }
                  --LODWORD(v11->BugCheckCallbackRecord.CallbackRoutine);
                  if ( LODWORD(v11->BugCheckCallbackRecord.Entry.Blink) )
                  {
                    if ( (char)v11->DestroyEvent.m_Event.Header.gap0 < 0
                      && (v60 = *(FxVerifierLock **)&v11[-1].Public.DriverName[8]) != 0LL )
                    {
                      FxVerifierLock::Unlock(v60, v56, v57);
                    }
                    else
                    {
                      KeReleaseSpinLock((PKSPIN_LOCK)&v11->FxPoolFrameworks.NonPagedLock.m_DbgFlagIsInitialized, v56);
                    }
                  }
                  else
                  {
                    FxIoQueue::DispatchEvents((FxIoQueue *)v11, v56, 0LL);
                  }
                  return (unsigned int)v13;
                }
LABEL_104:
                v62 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
                if ( *(char *)(v10 + 24) < 0 )
                {
                  v66 = *(FxTagTracker **)(v10 - 48);
                  if ( v66 )
                    FxTagTracker::UpdateTagHistory(
                      v66,
                      (void *)0x75657551,
                      2459,
                      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
                      TagAddRef,
                      v62);
                }
                FxIoQueue::CancelForQueue((FxIoQueue *)v6, (FxRequest *)v10, v24);
                if ( *(char *)(v6 + 24) < 0 && (v65 = *(FxVerifierLock **)(v6 - 40)) != 0LL )
                {
                  FxVerifierLock::Lock(v65, &v76, v63);
                  v24 = v76;
                }
                else
                {
                  v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 112));
                }
                goto LABEL_84;
              }
            }
          }
        }
        else
        {
          if ( *(_WORD *)(v10 + 10) )
            v35 = (const void *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v35 = 0LL;
          _a5 = "power stopping (Drain) in progress,";
          if ( (_a4 & 0x10000) == 0 )
            _a5 = a5;
          if ( *(_WORD *)(v6 + 10) )
            v5 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
          v13 = -1071644156;
          WPP_IFR_SF_qLsqd(
            *(_FX_DRIVER_GLOBALS **)(v6 + 16),
            3u,
            (unsigned int)a5,
            0x2Bu,
            traceGuid,
            v5,
            _a4,
            _a5,
            v35,
            -1071644156);
          if ( *(char *)(v6 + 24) < 0 && (v61 = *(FxVerifierLock **)(v6 - 40)) != 0LL )
            FxVerifierLock::Unlock(v61, v24, v37);
          else
            KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 112), v24);
          FxRequest::SetCompletionState((FxRequest *)v10, NewState);
          if ( *((_BYTE *)v71 + 324) )
            FxRequestBase::SetVerifierFlags((FxRequestBase *)v10, queue);
          (*(void (__fastcall **)(unsigned __int64, __int64, __int64, const char *))(*(_QWORD *)v10 + 16LL))(
            v10,
            1952543827LL,
            1461LL,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          if ( (char)v11->DestroyEvent.m_Event.Header.gap0 < 0
            && (v64 = *(FxVerifierLock **)&v11[-1].Public.DriverName[8]) != 0LL )
          {
            FxVerifierLock::Lock(v64, &PreviousIrql, v38);
            v39 = PreviousIrql;
          }
          else
          {
            v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v11->FxPoolFrameworks.NonPagedLock.m_DbgFlagIsInitialized);
          }
          ImageAddress = (_FX_DRIVER_GLOBALS *)v11->ImageAddress;
          if ( (_WDF_BIND_INFO **)ImageAddress->Linkage.Flink == &v11->WdfBindInfo )
          {
            v19->Flink = (_LIST_ENTRY *)&v11->WdfBindInfo;
            *(_QWORD *)(v10 + 312) = ImageAddress;
            ImageAddress->Linkage.Flink = v19;
            v11->ImageAddress = v19;
            FxNonPagedObject::Unlock((FxNonPagedObject *)v11, v39, v40);
            return (unsigned int)v13;
          }
        }
      }
    }
    __fastfail(3u);
  }
  return (unsigned int)v13;
}
