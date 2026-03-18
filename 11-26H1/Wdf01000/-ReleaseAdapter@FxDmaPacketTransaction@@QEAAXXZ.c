/*
 * XREFs of ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1400877F8
 * Callers:
 *     imp_WdfDmaTransactionFreeResources @ 0x140086D30 (imp_WdfDmaTransactionFreeResources.c)
 * Callees:
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x14001BEF0 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_ql @ 0x1400868F4 (WPP_IFR_SF_ql.c)
 */

void __fastcall FxDmaPacketTransaction::ReleaseAdapter(FxDmaPacketTransaction *this, __int64 a2)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  ULONG_PTR v3; // rbp
  const void *_a1; // rsi
  FxDmaTransactionState m_State; // eax
  int v7; // ecx

  m_Globals = this->m_Globals;
  v3 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x10u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
  m_State = this->m_State;
  if ( m_State == FxDmaTransactionStateInvalid
    || (unsigned int)m_State <= FxDmaTransactionStateDeleted && (v7 = 274, _bittest(&v7, m_State)) )
  {
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x11u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1, this->m_State);
    if ( !this->m_ObjectSize )
      v3 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v3, this->m_State);
  }
  LOBYTE(a2) = 1;
  FxDmaTransactionBase::ReleaseForReuse(this, a2);
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x12u, WPP_FxDmaTransactionPacket_cpp_Traceguids, _a1);
  }
}
