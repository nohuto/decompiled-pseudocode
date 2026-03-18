/*
 * XREFs of ?Vf_VerifyForwardRequestToParent@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1400E5478
 * Callers:
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x14004FD0C (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140084660 (-VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DD300 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyForwardRequestToParent(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIoQueue *DestQueue,
        FxRequest *Request)
{
  FxDeviceBase *m_DeviceBase; // rax
  int IsDriverOwned; // edi
  FxDeviceBase *v10; // rcx
  unsigned __int16 v11; // r9
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rcx
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v15; // r15
  unsigned __int8 v16; // r8
  unsigned __int16 v17; // ax
  const void *v18; // rbp
  FxDeviceBase *v19; // r8
  unsigned __int16 v20; // ax
  const void *_a2; // rcx
  bool v22; // zf
  unsigned __int16 v23; // ax
  const void *v24; // rbx
  __int64 v25; // rax
  unsigned __int16 v26; // ax
  const void *v27; // r8
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  irql = 0;
  if ( !*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags )
  {
    IsDriverOwned = -1073741808;
    v10 = DestQueue->m_DeviceBase;
    v11 = 32;
LABEL_3:
    m_ObjectSize = v10->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, v11, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741808);
LABEL_32:
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return (unsigned int)IsDriverOwned;
  }
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 && (Flink = Request[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, (unsigned __int8)DestQueue);
    v15 = irql;
  }
  else
  {
    v15 = KeAcquireSpinLockRaiseToDpc(&Request->m_NPLock.m_Lock);
  }
  IsDriverOwned = FxRequest::VerifyRequestIsDriverOwned(Request, FxDriverGlobals);
  if ( IsDriverOwned >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(Request, FxDriverGlobals);
    else
      IsDriverOwned = 0;
  }
  FxNonPagedObject::Unlock(Request, v15, v16);
  if ( IsDriverOwned >= 0 )
  {
    if ( DestQueue == this )
    {
      IsDriverOwned = -1073741808;
      v17 = this->m_ObjectSize;
      v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v17 )
        v18 = 0LL;
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0x21u, WPP_FxIoQueue_cpp_Traceguids, v18, -1073741808);
      goto LABEL_32;
    }
    v19 = this->m_DeviceBase;
    v10 = DestQueue->m_DeviceBase;
    if ( *(FxDeviceBase **)&v19[1].m_ObjectFlags != v10 )
    {
      v11 = 34;
      IsDriverOwned = -1073741808;
      goto LABEL_3;
    }
    if ( Request->m_Reserved )
    {
      IsDriverOwned = -1073741808;
      v20 = v10->m_ObjectSize;
      _a2 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v22 = v20 == 0;
      v23 = Request->m_ObjectSize;
      if ( v22 )
        _a2 = 0LL;
      v24 = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v23 )
        v24 = 0LL;
      WPP_IFR_SF_qqd(FxDriverGlobals, 2u, 0xDu, 0x23u, WPP_FxIoQueue_cpp_Traceguids, v24, _a2, 0xC0000010);
      goto LABEL_32;
    }
    v25 = *(_QWORD *)&v19[3].m_SpinLock.m_DbgFlagIsInitialized;
    if ( v25 && !*(_BYTE *)(v25 + 1787) )
    {
      IsDriverOwned = -1073741808;
      v26 = v19->m_ObjectSize;
      v27 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v26 )
        v27 = 0LL;
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0x24u, WPP_FxIoQueue_cpp_Traceguids, v27, -1073741808);
      goto LABEL_32;
    }
  }
  return (unsigned int)IsDriverOwned;
}
