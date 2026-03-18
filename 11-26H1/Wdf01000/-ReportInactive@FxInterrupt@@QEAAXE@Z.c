/*
 * XREFs of ?ReportInactive@FxInterrupt@@QEAAXE@Z @ 0x140067A74
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x140067454 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     imp_WdfInterruptReportInactive @ 0x1400A2E40 (imp_WdfInterruptReportInactive.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxInterrupt::ReportInactive(FxInterrupt *this, unsigned __int8 Internal)
{
  __int64 v3; // rcx
  _FX_DRIVER_GLOBALS *v4; // rcx
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rdi
  _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS parameters; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( Internal )
    goto LABEL_2;
  if ( !this->m_Connected || !this->m_Interrupt )
  {
    m_ObjectSize = this->m_ObjectSize;
    p_m_Globals = &this->m_Globals;
    m_Globals = this->m_Globals;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 3u, 0xCu, 0xCu, WPP_InterruptObjectKm_cpp_Traceguids, _a1);
    v4 = *p_m_Globals;
    goto LABEL_12;
  }
  if ( !*(_QWORD *)(v3 + 1176) )
  {
    WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0xDu, WPP_InterruptObjectKm_cpp_Traceguids);
    v4 = this->m_Globals;
LABEL_12:
    FxVerifierDbgBreakPoint(v4);
    return;
  }
LABEL_2:
  if ( this->m_Active )
  {
    parameters.ConnectionContext.Generic = this->m_Interrupt;
    *(_QWORD *)&parameters.Version = 4LL;
    (*(void (__fastcall **)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))(v3 + 1176))(&parameters);
    this->m_Active = 0;
  }
}
