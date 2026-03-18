/*
 * XREFs of ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x14007B054
 * Callers:
 *     imp_WdfDmaTransactionStopSystemTransfer @ 0x14007AFB0 (imp_WdfDmaTransactionStopSystemTransfer.c)
 * Callees:
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140008960 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?CancelMappedTransfer@FxDmaSystemTransaction@@IEAAEXZ @ 0x14007B100 (-CancelMappedTransfer@FxDmaSystemTransaction@@IEAAEXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDmaSystemTransaction::StopTransfer(FxDmaSystemTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 v3; // rdi
  const void *_a1; // rax
  unsigned int v5; // edx
  FxVerifierDownlevelOption v6; // r9d
  _FX_DRIVER_GLOBALS *v7; // rcx

  this->m_IsCancelled = 1;
  if ( !FxDmaSystemTransaction::CancelMappedTransfer(this) )
  {
    m_Globals = this->m_Globals;
    v3 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaTransactionSystem_cpp_Traceguids, _a1);
    if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(m_Globals, v5, 0xBu, v6) )
    {
      if ( !this->m_ObjectSize )
        v3 = 0LL;
      FxVerifierBugCheckWorker(v7, WDF_DMA_FATAL_ERROR, v3, this->m_State);
    }
  }
}
