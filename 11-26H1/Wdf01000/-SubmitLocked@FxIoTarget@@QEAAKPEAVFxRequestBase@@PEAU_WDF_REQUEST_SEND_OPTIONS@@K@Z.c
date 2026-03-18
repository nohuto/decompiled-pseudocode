/*
 * XREFs of ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x14002A780
 * Callers:
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x140029BA0 (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     imp_WdfRequestSend @ 0x140029C80 (imp_WdfRequestSend.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14002A290 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x14002EA78 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 * Callees:
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x140005314 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x140026E7C (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z @ 0x140063A20 (-StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BDC4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qLqd @ 0x14007F22C (WPP_IFR_SF_qLqd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z @ 0x1400838A8 (-PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     ?Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z @ 0x1400E5074 (-Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitLocked(
        FxIoTarget *this,
        unsigned __int64 Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        int Flags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  int Timer; // r14d
  char v6; // bp
  char v7; // r12
  unsigned int v8; // esi
  _WDF_REQUEST_SEND_OPTIONS *v10; // rax
  unsigned __int64 v11; // rbx
  _WDF_IO_TARGET_STATE _a3; // r8d
  unsigned int v14; // edx
  bool v15; // zf
  _LIST_ENTRY *v16; // rax
  _LIST_ENTRY *p_m_IgnoredIoListHead; // rcx
  _LIST_ENTRY *Blink; // rdx
  unsigned __int64 v19; // rbp
  MxTimer *v20; // r10
  __int64 Timeout; // rdx
  const void *v23; // rdx
  const void *v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  const void *v27; // rdx
  const void *v28; // rcx
  FxTagTracker *v29; // rcx
  _IO_STACK_LOCATION *v30; // rcx
  unsigned __int64 v31; // rcx
  const void *v32; // rdx
  const void *v33; // rcx
  unsigned __int16 *v34; // rdi
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  const void *v38; // rax
  const void *v39; // rdx
  const void *v40; // rcx
  unsigned __int64 v41; // rax
  const void *v42; // rax
  char v43; // [rsp+90h] [rbp+8h]
  char v44; // [rsp+98h] [rbp+10h]

  m_Globals = this->m_Globals;
  Timer = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v10 = Options;
  v43 = 0;
  v11 = Request;
  if ( *(_DWORD *)(Request + 208) )
  {
    v34 = (unsigned __int16 *)(Request + 10);
    v35 = Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    v36 = Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(Request + 10) )
      v36 = 0LL;
    if ( v36 )
      v11 = v36;
    WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x1Du, WPP_FxIoTarget_cpp_Traceguids, (const void *)v11);
    if ( !*v34 )
      v35 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_REQUEST_FATAL_ERROR, 3uLL, v35);
  }
  if ( !m_Globals->FxVerifierOn || !m_Globals->FxVerifierIO )
  {
    v44 = 0;
LABEL_4:
    if ( (Flags & 1) != 0 && v10->Timeout )
    {
      Timer = FxRequestBase::CreateTimer((FxRequestBase *)v11);
      if ( Timer < 0 )
      {
        v37 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
        v38 = (const void *)v11;
        if ( !*(_WORD *)(v11 + 10) )
          v37 = 0LL;
        if ( v37 )
          v38 = (const void *)v37;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxIoTarget_cpp_Traceguids, v38, Timer);
        goto LABEL_38;
      }
      v43 = 1;
      Timer = 0;
    }
    _a3 = this->m_State;
    if ( (Flags & 4) != 0 )
    {
      if ( (_a3 == WdfIoTargetDeleted || (unsigned int)(_a3 - 3) <= 1) && !this->m_Removing )
      {
        Timer = -1073741436;
        v31 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
        v32 = (const void *)v11;
        if ( !*(_WORD *)(v11 + 10) )
          v31 = 0LL;
        if ( v31 )
          v32 = (const void *)v31;
        v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v33 = 0LL;
        WPP_IFR_SF_qLqd(m_Globals, 4u, 0xEu, 0x1Fu, WPP_FxIoTarget_cpp_Traceguids, v33, _a3, v32, -1073741436);
        goto LABEL_38;
      }
      v8 = 1;
      v26 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
      v27 = (const void *)v11;
      if ( !*(_WORD *)(v11 + 10) )
        v26 = 0LL;
      if ( v26 )
        v27 = (const void *)v26;
      v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v28 = 0LL;
      WPP_IFR_SF_qqd(m_Globals, 4u, 0xEu, 0x20u, WPP_FxIoTarget_cpp_Traceguids, v28, v27, _a3);
      *(_BYTE *)(v11 + 212) |= 0x10u;
      v6 = 1;
      goto LABEL_8;
    }
    if ( _a3 == WdfIoTargetStarted )
    {
      v8 = 1;
LABEL_8:
      *(_QWORD *)(v11 + 128) = v11 + 120;
      *(_QWORD *)(v11 + 120) = v11 + 120;
      goto $Done_9;
    }
    if ( _a3 == WdfIoTargetStopped )
    {
      if ( Flags >= 0 )
      {
        v8 = 2;
        Timer = 1075838976;
        goto LABEL_8;
      }
    }
    else
    {
      v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v24 = (const void *)v11;
      if ( !this->m_ObjectSize )
        v23 = 0LL;
      v25 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(v11 + 10) )
        v25 = 0LL;
      if ( v25 )
        v24 = (const void *)v25;
      WPP_IFR_SF_qqd(m_Globals, 2u, 0xEu, 0x21u, WPP_FxIoTarget_cpp_Traceguids, v24, v23, _a3);
    }
    Timer = -1073741436;
    goto LABEL_38;
  }
  v44 = 1;
  Timer = FxIoTarget::Vf_VerifySubmitLocked(this, m_Globals, (FxRequestBase *)Request);
  if ( Timer >= 0 )
  {
    v10 = Options;
    Timer = 0;
    goto LABEL_4;
  }
$Done_9:
  if ( Timer < 0 )
    goto LABEL_38;
  *(_QWORD *)(v11 + 160) = this;
  _InterlockedIncrement(&this->m_IoCount);
  v14 = _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
  if ( *(char *)(v11 + 24) < 0 )
  {
    v29 = *(FxTagTracker **)(v11 - 48);
    if ( v29 )
      FxTagTracker::UpdateTagHistory(
        v29,
        this,
        1472,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        v14);
  }
  v15 = *(_BYTE *)(v11 + 215) == 0;
  v7 = 1;
  *(_DWORD *)(v11 + 208) = 1;
  if ( !v15 )
  {
    Timer = -1073741536;
    v8 = 2 * (_InterlockedAdd((volatile signed __int32 *)(v11 + 208), 0xFFFFFFFF) != 0);
    goto LABEL_38;
  }
  if ( (v8 & 1) == 0 )
  {
    Timer = FxIoTarget::PendRequestLocked(this, (FxRequestBase *)v11);
    v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v40 = (const void *)v11;
    if ( !this->m_ObjectSize )
      v39 = 0LL;
    v19 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v41 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v11 + 10) )
      v41 = 0LL;
    if ( v41 )
      v40 = (const void *)v41;
    WPP_IFR_SF_qqd(m_Globals, 4u, 0xEu, 0x22u, WPP_FxIoTarget_cpp_Traceguids, v40, v39, Timer);
    if ( Timer >= 0 )
      goto LABEL_18;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 208), 0xFFFFFFFF) == 1 )
      v8 = 0;
LABEL_38:
    v8 &= ~1u;
    *(_DWORD *)(*(_QWORD *)(v11 + 152) + 48LL) = Timer;
    if ( !v7 )
      return v8;
    goto LABEL_24;
  }
  v16 = (_LIST_ENTRY *)(v11 + 120);
  if ( v6 )
  {
    p_m_IgnoredIoListHead = &this->m_IgnoredIoListHead;
    Blink = this->m_IgnoredIoListHead.Blink;
    if ( Blink->Flink == &this->m_IgnoredIoListHead )
      goto LABEL_15;
LABEL_44:
    __fastfail(3u);
  }
  p_m_IgnoredIoListHead = &this->m_SentIoListHead;
  Blink = this->m_SentIoListHead.Blink;
  if ( Blink->Flink != &this->m_SentIoListHead )
    goto LABEL_44;
LABEL_15:
  v16->Flink = p_m_IgnoredIoListHead;
  *(_QWORD *)(v11 + 128) = Blink;
  Blink->Flink = v16;
  p_m_IgnoredIoListHead->Blink = v16;
  if ( IoSetCompletionRoutineEx(
         this->m_InStackDevice,
         *(PIRP *)(v11 + 152),
         FxIoTarget::_RequestCompletionRoutine,
         (PVOID)v11,
         1u,
         1u,
         1u) < 0 )
  {
    v30 = *(_IO_STACK_LOCATION **)(*(_QWORD *)(v11 + 152) + 184LL);
    v30[-1].CompletionRoutine = FxIoTarget::_RequestCompletionRoutine;
    v30[-1].Context = (void *)v11;
    v30[-1].Control = -32;
  }
  v19 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
LABEL_18:
  if ( v43 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v42 = (const void *)v11;
      if ( !*(_WORD *)(v11 + 10) )
        v19 = 0LL;
      if ( v19 )
        v42 = (const void *)v19;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x23u, WPP_FxIoTarget_cpp_Traceguids, v42);
    }
    v20 = *(MxTimer **)(v11 + 176);
    Timeout = Options->Timeout;
    *(_BYTE *)(v11 + 212) |= 4u;
    if ( v20->m_Timer.m_IsExtTimer )
      MxTimer::StartWithReturn(v20, (_LARGE_INTEGER)Timeout, 0);
    else
      KeSetCoalescableTimer(
        &v20->m_Timer.KernelTimer,
        (LARGE_INTEGER)Timeout,
        v20->m_Timer.m_Period,
        0,
        &v20->m_Timer.TimerDpc);
  }
  if ( v44 )
    FxRequestBase::SetVerifierFlags((FxRequestBase *)v11, 256);
LABEL_24:
  if ( !v8 )
  {
    (*(void (__fastcall **)(unsigned __int64, FxIoTarget *, __int64, const char *))(*(_QWORD *)v11 + 16LL))(
      v11,
      this,
      1630LL,
      "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
    FxIoTarget::DecrementIoCount(this);
  }
  return v8;
}
