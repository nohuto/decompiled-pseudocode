/*
 * XREFs of ?Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z @ 0x1400E5074
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x14002A780 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqdqdd @ 0x14009C1D4 (WPP_IFR_SF_qqdqdd.c)
 */

__int64 __fastcall FxIoTarget::Vf_VerifySubmitLocked(
        FxIoTarget *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequestBase *Request)
{
  char m_ObjectFlags; // al
  unsigned __int64 v4; // rsi
  unsigned int v7; // ebp
  FxVerifierLock *v8; // rcx
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // bl
  __int16 v11; // ax
  const void *_a1; // rax
  unsigned __int64 v13; // rcx
  unsigned __int16 *v14; // rbx
  ULONG_PTR v15; // rdi
  unsigned __int64 v16; // rax
  char *v17; // r11
  int _a6; // r10d
  int _a4; // r14d
  unsigned __int16 m_ObjectSize; // ax
  const void *_a5; // rdi
  unsigned __int64 v22; // rcx
  const void *v23; // rdx
  unsigned __int8 irql; // [rsp+A0h] [rbp+18h] BYREF

  m_ObjectFlags = Request->m_ObjectFlags;
  irql = 0;
  v4 = (unsigned __int64)Request;
  v7 = 0;
  if ( m_ObjectFlags < 0 && (v8 = *(FxVerifierLock **)&Request[-1].m_IrpCompletionReferenceCount) != 0LL )
  {
    FxVerifierLock::Lock(v8, &irql, (unsigned __int8)Request);
    v10 = irql;
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&Request->m_NPLock.m_Lock);
  }
  v11 = *(_WORD *)(v4 + 218);
  if ( (v11 & 0x80u) != 0 )
  {
    if ( (v11 & 0x100) != 0 )
    {
      v14 = (unsigned __int16 *)(v4 + 10);
      v15 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
      v16 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(v4 + 10) )
        v16 = 0LL;
      if ( v16 )
        v4 = v16;
      WPP_IFR_SF_q(FxDriverGlobals, 2u, 0xEu, 0x1Bu, WPP_FxIoTarget_cpp_Traceguids, (const void *)v4);
      if ( !*v14 )
        v15 = 0LL;
      FxVerifierBugCheckWorker(FxDriverGlobals, WDF_REQUEST_FATAL_ERROR, 3uLL, v15);
    }
    v17 = *(char **)(v4 + 152);
    _a6 = this->m_TargetStackSize;
    _a4 = v17[67] - 1;
    if ( _a4 < _a6 )
    {
      v7 = -1073741616;
      m_ObjectSize = this->m_ObjectSize;
      _a5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a5 = 0LL;
      v22 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
      v23 = (const void *)v4;
      if ( !*(_WORD *)(v4 + 10) )
        v22 = 0LL;
      if ( v22 )
        v23 = (const void *)v22;
      WPP_IFR_SF_qqdqdd(
        FxDriverGlobals,
        (unsigned __int8)v23,
        0xEu,
        0x1Cu,
        WPP_FxIoTarget_cpp_Traceguids,
        v23,
        v17,
        _a4,
        _a5,
        _a6,
        -1073741616);
    }
  }
  else
  {
    v7 = -1073741616;
    _a1 = (const void *)v4;
    v13 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v4 + 10) )
      v13 = 0LL;
    if ( v13 )
      _a1 = (const void *)v13;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xEu, 0x1Au, WPP_FxIoTarget_cpp_Traceguids, _a1, -1073741616);
  }
  FxNonPagedObject::Unlock((FxNonPagedObject *)v4, v10, v9);
  return v7;
}
