/*
 * XREFs of ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x14008793C
 * Callers:
 *     imp_WdfDmaTransactionAllocateResources @ 0x140086B90 (imp_WdfDmaTransactionAllocateResources.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x14001BEF0 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14001FA78 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x140052700 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x140062380 (-_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z.c)
 *     ?InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z @ 0x140066E14 (-InitializeTransferContext@FxDmaEnabler@@QEAAXPEAXW4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_ql @ 0x1400868F4 (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qld @ 0x140087F24 (WPP_IFR_SF_qld.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDmaPacketTransaction::ReserveAdapter(
        FxDmaPacketTransaction *this,
        unsigned int NumberOfMapRegisters,
        unsigned int DmaDirection,
        void (__fastcall *Callback)(WDFDMATRANSACTION__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  ULONG_PTR v7; // rsi
  const void *v8; // r12
  FxDmaTransactionState globals; // ecx
  const void *_a3; // rax
  unsigned int *p_m_MapRegistersReserved; // rbp
  FxDmaEnabler *m_DmaEnabler; // rax
  _FxDmaDescription *p_m_SimplexAdapterInfo; // rcx
  _BYTE *v16; // rdx
  _FxDmaDescription *v17; // rax
  void **p_m_DmaAcquiredContext; // r14
  FxDmaEnabler *v19; // rcx
  FxDmaTransactionProgramOrReserveDma *p_m_DmaAcquiredFunction; // r15
  FxDmaEnabler *v21; // rcx
  __int64 v22; // rdx
  int v23; // esi
  FxDmaPacketTransaction_vtbl *v24; // rax
  unsigned int v25; // r9d
  __int64 v26; // rdx
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v28; // rcx

  m_Globals = this->m_Globals;
  v7 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v8 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v8);
  globals = this->m_State;
  if ( NumberOfMapRegisters )
  {
    if ( globals != FxDmaTransactionStateCreated && ((globals - 3) & 0xFFFFFFFB) != 0 )
    {
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0xDu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v8, globals);
      if ( !this->m_ObjectSize )
        v7 = 0LL;
      FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v7, this->m_State);
    }
  }
  else if ( globals != FxDmaTransactionStateInitialized )
  {
    _a3 = (const void *)v7;
    if ( !this->m_ObjectSize )
      _a3 = 0LL;
    WPP_IFR_SF_qld(
      m_Globals,
      (unsigned __int8)WPP_FxDmaTransactionPacket_cpp_Traceguids,
      DmaDirection,
      0xCu,
      WPP_FxDmaTransactionPacket_cpp_Traceguids,
      _a3,
      globals,
      -1073741811);
    if ( !this->m_ObjectSize )
      v7 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v7, this->m_State);
  }
  p_m_MapRegistersReserved = &this->m_MapRegistersReserved;
  if ( this->m_MapRegistersReserved )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v8);
    if ( !this->m_ObjectSize )
      v7 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v7, this->m_State);
  }
  m_DmaEnabler = this->m_DmaEnabler;
  p_m_SimplexAdapterInfo = &m_DmaEnabler->m_SimplexAdapterInfo;
  v16 = (char *)m_DmaEnabler + 380;
  if ( DmaDirection )
  {
    v17 = &m_DmaEnabler->m_DuplexAdapterInfo[1];
    if ( (*v16 & 0x10) == 0 )
      v17 = p_m_SimplexAdapterInfo;
    p_m_SimplexAdapterInfo = v17;
  }
  this->m_AdapterInfo = p_m_SimplexAdapterInfo;
  if ( NumberOfMapRegisters )
  {
    *p_m_MapRegistersReserved = NumberOfMapRegisters;
  }
  else
  {
    v25 = p_m_SimplexAdapterInfo->NumberOfMapRegisters;
    if ( (*v16 & 4) != 0 )
    {
      v23 = FxDmaTransactionBase::_CalculateRequiredMapRegisters(
              this->m_StartMdl,
              this->m_StartOffset,
              this->m_TransactionLength,
              v25,
              0LL,
              &this->m_MapRegistersReserved);
      if ( v23 < 0 )
      {
        LOBYTE(v26) = 1;
        FxDmaTransactionBase::ReleaseForReuse(this, v26);
        p_m_DmaAcquiredContext = &this->m_DmaAcquiredContext;
        p_m_DmaAcquiredFunction = &this->m_DmaAcquiredFunction;
        goto LABEL_38;
      }
    }
    else
    {
      *p_m_MapRegistersReserved = v25;
    }
  }
  p_m_DmaAcquiredContext = &this->m_DmaAcquiredContext;
  v19 = this->m_DmaEnabler;
  this->m_StartMdl = 0LL;
  this->m_StartOffset = 0LL;
  this->m_CurrentFragmentMdl = 0LL;
  this->m_CurrentFragmentOffset = 0LL;
  this->m_Remaining = 0LL;
  this->m_TransactionLength = 0LL;
  p_m_DmaAcquiredFunction = &this->m_DmaAcquiredFunction;
  this->m_DmaAcquiredFunction.Method.ProgramDma = (unsigned __int8 (__fastcall *)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *))Callback;
  this->m_DmaAcquiredContext = Context;
  this->m_DmaDirection = DmaDirection;
  if ( FxDmaEnabler::GetDmaDescription(v19, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    FxDmaEnabler::InitializeTransferContext(v21, this->m_TransferContext, DmaDirection);
  v23 = this->InitializeResources(this);
  if ( v23 < 0 )
  {
    LOBYTE(v22) = 1;
    FxDmaTransactionBase::ReleaseForReuse(this, v22);
  }
  else
  {
    v24 = this->__vftable;
    this->m_State = FxDmaTransactionStateReserved;
    v23 = v24->StartTransfer(this);
    if ( v23 >= 0 )
      goto LABEL_40;
  }
LABEL_38:
  m_EncodedRequest = this->m_EncodedRequest;
  this->m_State = FxDmaTransactionStateTransferFailed;
  p_m_DmaAcquiredFunction->Method.ProgramDma = 0LL;
  *p_m_DmaAcquiredContext = 0LL;
  *p_m_MapRegistersReserved = 0;
  if ( m_EncodedRequest )
  {
    v28 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
    this->m_EncodedRequest = v28;
    FxRequest::ReleaseIrpReference(v28);
    this->m_EncodedRequest->Release(
      this->m_EncodedRequest,
      this,
      302,
      "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
  }
LABEL_40:
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0xFu, WPP_FxDmaTransactionPacket_cpp_Traceguids, v8, v23);
  return (unsigned int)v23;
}
