/*
 * XREFs of imp_WdfRequestSend @ 0x140029C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDd @ 0x140017BE4 (WPP_IFR_SF_qDd.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14002A290 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x14002A780 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x140036A80 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x140037310 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x140037FB0 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?HasContext@FxRequestBase@@QEAAEXZ @ 0x140092D8C (-HasContext@FxRequestBase@@QEAAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DDC44 (-Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DDEF0 (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

bool __fastcall imp_WdfRequestSend(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        FxRequest *Request,
        WDFIOTARGET__ *Target,
        _WDF_REQUEST_SEND_OPTIONS *Options)
{
  unsigned __int64 v5; // r15
  unsigned int v7; // esi
  __int64 v8; // rax
  unsigned __int64 flags; // rdi
  _FX_DRIVER_GLOBALS *v10; // r10
  unsigned int v11; // edx
  __int64 v12; // rax
  _FX_DRIVER_GLOBALS **v13; // rbx
  char v14; // al
  KIRQL v15; // r15
  char v16; // di
  unsigned __int8 v17; // r8
  unsigned int v19; // eax
  FxRequest *v20; // rcx
  _FX_DRIVER_GLOBALS *v21; // rdx
  FxRequest *v22; // rsi
  _IRP *m_Irp; // rax
  __int64 v24; // rax
  unsigned __int8 v25; // dl
  unsigned __int16 v26; // r9
  _FX_DRIVER_GLOBALS *v27; // rax
  unsigned __int8 v28; // dl
  unsigned __int16 v29; // r9
  const void *v30; // rax
  FxVerifierLock *v31; // rcx
  FxVerifierLock *v32; // rcx
  const void *v33; // rax
  const void *v34; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-50h]
  FxRequest **v37; // [rsp+50h] [rbp-20h] BYREF
  __int16 v38; // [rsp+58h] [rbp-18h]
  __int16 v39; // [rsp+5Ah] [rbp-16h]
  int v40; // [rsp+5Ch] [rbp-14h]
  _WDF_DRIVER_GLOBALS *Action; // [rsp+A0h] [rbp+30h] BYREF
  FxRequest *v42; // [rsp+A8h] [rbp+38h] BYREF
  WDFIOTARGET__ *v43; // [rsp+B0h] [rbp+40h] BYREF

  v43 = Target;
  v42 = Request;
  Action = DriverGlobals;
  v5 = (unsigned __int64)Target;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v7 = 0;
  LOWORD(v8) = 0;
  flags = ~(unsigned __int64)Request & 0xFFFFFFFFFFFFFFF8uLL;
  if ( ((unsigned __int8)Request & 1) != 0 )
  {
    v8 = *(unsigned __int16 *)flags;
    flags -= v8;
  }
  if ( *(_WORD *)(flags + 8) == 4104 )
  {
    v42 = (FxRequest *)flags;
  }
  else
  {
    v39 = v8;
    v42 = 0LL;
    v40 = 0;
    v24 = *(_QWORD *)flags;
    v37 = &v42;
    v38 = 4104;
    if ( (*(int (__fastcall **)(unsigned __int64, FxRequest ***))(v24 + 40))(flags, &v37) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(flags + 16),
        v25,
        (unsigned int)Target,
        v26,
        traceGuid,
        Request,
        0x1008u,
        (const void *)flags,
        *(unsigned __int16 *)(flags + 8));
      FxVerifierBugCheckWorker(
        *(_FX_DRIVER_GLOBALS **)(flags + 16),
        WDF_INVALID_HANDLE,
        (unsigned __int64)Request,
        0x1008uLL);
    }
    v5 = (unsigned __int64)v43;
    flags = (unsigned __int64)v42;
  }
  v10 = *(_FX_DRIVER_GLOBALS **)(flags + 16);
  if ( Options )
  {
    if ( Options->Size == 16 )
    {
      v11 = Options->Flags;
      if ( (v11 & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(v10, v11, 6u, 0xBu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, v11, 0xFu);
      }
      else
      {
        if ( (v11 & 0xFFFFFFF7) == 0 || (v11 & 8) == 0 )
          goto LABEL_10;
        WPP_IFR_SF_qDd(v10, v11, 6u, 0xCu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, 8u, v11);
      }
    }
    else
    {
      WPP_IFR_SF_qdd(v10, 2u, 6u, 0xAu, WPP_FxRequestValidateFunctions_hpp_Traceguids, Options, 16, Options->Size);
    }
    v42->m_Irp.m_Irp->IoStatus.Status = -1073741811;
    FxVerifierDbgBreakPoint(v42->m_Globals);
    return 0;
  }
LABEL_10:
  if ( !v5 )
    FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(flags + 16), WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v12) = 0;
  v13 = (_FX_DRIVER_GLOBALS **)(~v5 & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (v5 & 1) != 0 )
  {
    v12 = *(unsigned __int16 *)v13;
    v13 = (_FX_DRIVER_GLOBALS **)((char *)v13 - v12);
  }
  if ( *((_WORD *)v13 + 4) == 4608 )
  {
    v43 = (WDFIOTARGET__ *)v13;
  }
  else
  {
    v39 = v12;
    v43 = 0LL;
    v40 = 0;
    v27 = *v13;
    v37 = (FxRequest **)&v43;
    v38 = 4608;
    if ( ((int (__fastcall *)(_FX_DRIVER_GLOBALS **, FxRequest ***))v27->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
           v13,
           &v37) < 0 )
    {
      WPP_IFR_SF_qDqD(
        v13[2],
        v28,
        (unsigned int)Target,
        v29,
        traceGuid,
        (const void *)v5,
        0x1200u,
        v13,
        *((unsigned __int16 *)v13 + 4));
      FxVerifierBugCheckWorker(v13[2], WDF_INVALID_HANDLE, v5, 0x1200uLL);
    }
    v13 = (_FX_DRIVER_GLOBALS **)v43;
    flags = (unsigned __int64)v42;
  }
  if ( Options && (v19 = Options->Flags, (v19 & 0xA) != 0) )
  {
    if ( (v19 & 2) != 0 )
    {
      LODWORD(Action) = 32;
      FxIoTarget::SubmitSync((FxIoTarget *)v13, (FxRequestBase *)flags, Options, (unsigned int *)&Action);
    }
    else if ( (v19 & 8) != 0 )
    {
      if ( *(_BYTE *)(flags + 213) )
      {
        if ( *(_WORD *)(flags + 10) )
          v30 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v30 = 0LL;
        WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(flags + 16), 2u, 0xEu, 0x2Cu, WPP_FxRequestApi_cpp_Traceguids, v30);
        v42->m_Irp.m_Irp->IoStatus.Status = -1073741436;
      }
      else
      {
        if ( !FxRequestBase::HasContext((FxRequestBase *)flags) )
        {
          v21 = *(_FX_DRIVER_GLOBALS **)(flags + 16);
          v22 = (FxRequest *)flags;
          if ( v21->FxVerifierOn )
          {
            FxRequest::Vf_VerifyPreProcessSendAndForget(v20, v21);
            v13 = (_FX_DRIVER_GLOBALS **)v43;
            flags = (unsigned __int64)v42;
          }
          if ( !v22->m_NextStackLocationFormatted )
          {
            m_Irp = v22->m_Irp.m_Irp;
            ++m_Irp->CurrentLocation;
            ++m_Irp->Tail.Overlay.CurrentStackLocation;
            v13 = (_FX_DRIVER_GLOBALS **)v43;
            flags = (unsigned __int64)v42;
          }
          if ( !v22->m_Reserved )
          {
            if ( !FxObject::EarlyDispose(v22) )
            {
              m_Globals = v22->m_Globals;
              if ( m_Globals->FxVerifierOn )
                FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(v22, m_Globals);
            }
            FxObject::DestroyChildren(v22);
            v13 = (_FX_DRIVER_GLOBALS **)v43;
            flags = (unsigned __int64)v42;
          }
          ((void (__fastcall *)(_FX_DRIVER_GLOBALS **, _QWORD))(*v13)->WdfLogHeader)(v13, *(_QWORD *)(flags + 152));
          FxRequest::PostProcessSendAndForget(v42);
          return 1;
        }
        if ( *(_WORD *)(flags + 10) )
          v33 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v33 = 0LL;
        WPP_IFR_SF_qd(
          *(_FX_DRIVER_GLOBALS **)(flags + 16),
          2u,
          0xEu,
          0x2Du,
          WPP_FxRequestApi_cpp_Traceguids,
          v33,
          -1073741808);
        v42->m_Irp.m_Irp->IoStatus.Status = -1073741808;
        FxVerifierDbgBreakPoint(v42->m_Globals);
      }
      return (v7 & 4) != 0;
    }
    LOBYTE(v7) = (_BYTE)Action;
  }
  else if ( *(_QWORD *)(flags + 192) || *(_BYTE *)(flags + 213) )
  {
    if ( Options )
      v7 = Options->Flags;
    v14 = *((_BYTE *)v13 + 24);
    LOBYTE(Action) = 0;
    if ( v14 < 0 && (v31 = (FxVerifierLock *)*(v13 - 5)) != 0LL )
    {
      FxVerifierLock::Lock(v31, (unsigned __int8 *)&Action, (unsigned __int8)Target);
      v15 = (unsigned __int8)Action;
    }
    else
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 + 14);
    }
    v16 = FxIoTarget::SubmitLocked((FxIoTarget *)v13, (FxRequestBase *)flags, Options, v7);
    if ( *((char *)v13 + 24) < 0 && (v32 = (FxVerifierLock *)*(v13 - 5)) != 0LL )
      FxVerifierLock::Unlock(v32, v15, v17);
    else
      KeReleaseSpinLock((PKSPIN_LOCK)v13 + 14, v15);
    LOBYTE(v7) = v16;
    if ( (v16 & 1) != 0 )
    {
      LOBYTE(v7) = v16 | 4;
      (*(void (__fastcall **)(WDFIOTARGET__ *, _IRP *))(*(_QWORD *)v43 + 104LL))(v43, v42->m_Irp.m_Irp);
    }
    else if ( (v16 & 2) != 0 )
    {
      LOBYTE(v7) = v16 | 4;
    }
  }
  else
  {
    if ( *(_WORD *)(flags + 10) )
      v34 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v34 = 0LL;
    WPP_IFR_SF_qd(
      *(_FX_DRIVER_GLOBALS **)(flags + 16),
      2u,
      0xEu,
      0x2Eu,
      WPP_FxRequestApi_cpp_Traceguids,
      v34,
      -1073741808);
    v42->m_Irp.m_Irp->IoStatus.Status = -1073741808;
    FxVerifierDbgBreakPoint(v42->m_Globals);
  }
  return (v7 & 4) != 0;
}
