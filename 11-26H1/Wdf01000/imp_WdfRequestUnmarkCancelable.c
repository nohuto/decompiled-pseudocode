/*
 * XREFs of imp_WdfRequestUnmarkCancelable @ 0x1400539E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083260 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1400DD710 (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 *     ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1400E4DFC (-Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_C.c)
 */

__int64 __fastcall imp_WdfRequestUnmarkCancelable(FxIoQueue *DriverGlobals, unsigned __int64 Request, unsigned int a3)
{
  unsigned __int64 flags; // rbx
  __int64 v5; // rax
  _FX_DRIVER_GLOBALS *v6; // rbp
  FxIoQueue *v7; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v9; // ebp
  _IRP *v10; // r8
  KIRQL v11; // r14
  _FX_DRIVER_GLOBALS *v12; // r12
  _FX_DRIVER_GLOBALS *v13; // rdx
  _LIST_ENTRY *p_ListEntry; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  FxRequest_vtbl *v17; // rax
  FxRequest_vtbl *v19; // rax
  unsigned __int8 v20; // dl
  unsigned __int16 v21; // r9
  FxVerifierLock *v22; // rcx
  FxVerifierLock *v23; // rcx
  const void *v24; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-78h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-48h] BYREF
  __int16 v27; // [rsp+58h] [rbp-40h]
  __int16 v28; // [rsp+5Ah] [rbp-3Eh]
  int v29; // [rsp+5Ch] [rbp-3Ch]
  unsigned __int8 PreviousIrql; // [rsp+A8h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+B0h] [rbp+18h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-1].m_IoInternalDeviceControl.Method,
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  flags = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(v5) = 0;
  if ( (Request & 1) != 0 )
  {
    v5 = *(unsigned __int16 *)flags;
    flags -= v5;
  }
  if ( *(_WORD *)(flags + 8) == 4104 )
  {
    pRequest = (FxRequest *)flags;
  }
  else
  {
    v28 = v5;
    pRequest = 0LL;
    v29 = 0;
    v19 = *(FxRequest_vtbl **)flags;
    p_pRequest = &pRequest;
    v27 = 4104;
    if ( v19->QueryInterface((FxObject *)flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(flags + 16),
        v20,
        a3,
        v21,
        traceGuid,
        (const void *)Request,
        0x1008u,
        (const void *)flags,
        *(unsigned __int16 *)(flags + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(flags + 16), WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = (unsigned __int64)pRequest;
  }
  v6 = *(_FX_DRIVER_GLOBALS **)(flags + 16);
  if ( *(_BYTE *)(flags + 214) || (v7 = *(FxIoQueue **)(flags + 248)) == 0LL )
  {
    WPP_IFR_SF_qd(v6, 2u, 0x10u, 0x53u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
    FxVerifierDbgBreakPoint(v6);
    return 3221225488LL;
  }
  else
  {
    m_Globals = v7->m_Globals;
    PreviousIrql = 0;
    if ( !m_Globals->FxVerifierOn
      || (v9 = FxIoQueue::Vf_VerifyRequestCancelable(DriverGlobals, m_Globals, (FxRequest *)flags, 0), v9 >= 0) )
    {
      if ( SLOBYTE(v7->m_ObjectFlags) < 0
        && (v22 = *(FxVerifierLock **)&v7[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v22, &PreviousIrql, a3);
        v11 = PreviousIrql;
      }
      else
      {
        v11 = KeAcquireSpinLockRaiseToDpc(&v7->m_NPLock.m_Lock);
      }
      v12 = *(_FX_DRIVER_GLOBALS **)(flags + 16);
      if ( !*(_QWORD *)(flags + 128) )
        goto LABEL_24;
      v13 = v7->m_DriverCancelable.m_LockObject->m_Globals;
      if ( v13->FxVerifierOn )
        FxIrpQueue::Vf_VerifyRemoveIrpFromQueueByContext(
          &v7->m_DriverCancelable,
          v13,
          (_IO_CSQ_IRP_CONTEXT *)(flags + 120));
      v10 = *(_IRP **)(flags + 128);
      if ( _InterlockedExchange64((volatile __int64 *)&v10->CancelRoutine, 0LL) )
      {
        p_ListEntry = &v10->Tail.Overlay.ListEntry;
        Flink = v10->Tail.Overlay.ListEntry.Flink;
        if ( (void **)Flink->Blink != &v10->Tail.CompletionKey + 6
          || (Blink = v10->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
        {
          __fastfail(3u);
        }
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        v10->Tail.Overlay.ListEntry.Blink = &v10->Tail.Overlay.ListEntry;
        p_ListEntry->Flink = p_ListEntry;
        --v7->m_DriverCancelable.m_RequestCount;
        *(_QWORD *)(flags + 128) = 0LL;
        v10->Tail.Overlay.DriverContext[3] = 0LL;
        if ( v12->FxVerifierOn && !*(_QWORD *)(flags + 224) )
        {
          v24 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(flags + 10) )
            v24 = 0LL;
          WPP_IFR_SF_q(v12, 2u, 0x10u, 0x29u, WPP_FxRequest_cpp_Traceguids, v24);
          FxVerifierDbgBreakPoint(v12);
        }
        v17 = *(FxRequest_vtbl **)flags;
        *(_QWORD *)(flags + 224) = 0LL;
        v17->Release(
          (FxObject *)flags,
          (void *)1969583441,
          2030,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        v9 = 0;
        *(_QWORD *)(flags + 184) = 0LL;
      }
      else
      {
LABEL_24:
        v9 = -1073741536;
      }
      if ( SLOBYTE(v7->m_ObjectFlags) < 0
        && (v23 = *(FxVerifierLock **)&v7[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Unlock(v23, v11, (unsigned __int8)v10);
      }
      else
      {
        KeReleaseSpinLock(&v7->m_NPLock.m_Lock, v11);
      }
      if ( m_Globals->FxVerifierOn )
      {
        if ( v9 >= 0 )
          FxRequestBase::ClearVerifierFlags((FxRequestBase *)flags, 16);
      }
    }
    return (unsigned int)v9;
  }
}
