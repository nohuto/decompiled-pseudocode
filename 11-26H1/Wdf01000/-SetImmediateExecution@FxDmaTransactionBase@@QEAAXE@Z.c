/*
 * XREFs of ?SetImmediateExecution@FxDmaTransactionBase@@QEAAXE@Z @ 0x140089118
 * Callers:
 *     imp_WdfDmaTransactionSetImmediateExecution @ 0x140087280 (imp_WdfDmaTransactionSetImmediateExecution.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1400868F4 (WPP_IFR_SF_ql.c)
 */

void __fastcall FxDmaTransactionBase::SetImmediateExecution(FxDmaTransactionBase *this, unsigned __int8 Value)
{
  FxDmaTransactionState m_State; // r8d
  const void *v5; // rcx
  unsigned int v6; // ecx

  m_State = this->m_State;
  if ( m_State != FxDmaTransactionStateCreated && ((m_State - 3) & 0xFFFFFFFB) != 0 )
  {
    v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v5 = 0LL;
    WPP_IFR_SF_ql(this->m_Globals, 2u, 0xFu, 0x1Eu, WPP_FxDmaTransactionBase_cpp_Traceguids, v5, m_State);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  v6 = this->m_Flags | 1;
  if ( !Value )
    v6 = this->m_Flags & 0xFFFFFFFE;
  this->m_Flags = v6;
}
