/*
 * XREFs of imp_WdfInterruptSynchronize @ 0x14005C3C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall imp_WdfInterruptSynchronize(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Interrupt,
        unsigned __int8 (__fastcall *Callback)(WDFINTERRUPT__ *, void *),
        void *Context)
{
  __int64 v7; // rax
  FxInterrupt *flags; // rbx
  struct _KINTERRUPT *m_Interrupt; // rcx
  FxInterrupt_vtbl *v11; // rax
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  const _GUID *v15; // [rsp+20h] [rbp-50h]
  FxInterrupt **SynchronizeContext; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int8 (__fastcall *v17)(WDFINTERRUPT__ *, void *); // [rsp+58h] [rbp-18h]
  void *v18; // [rsp+60h] [rbp-10h]
  void *retaddr; // [rsp+98h] [rbp+28h]
  FxInterrupt *pFxInterrupt; // [rsp+A8h] [rbp+38h] BYREF

  if ( !Interrupt )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1027uLL);
  LOWORD(v7) = 0;
  flags = (FxInterrupt *)(~Interrupt & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Interrupt & 1) != 0 )
  {
    v7 = LOWORD(flags->__vftable);
    flags = (FxInterrupt *)((char *)flags - v7);
  }
  if ( flags->m_Type == 4135 )
  {
    pFxInterrupt = flags;
  }
  else
  {
    WORD1(v17) = v7;
    pFxInterrupt = 0LL;
    HIDWORD(v17) = 0;
    v11 = flags->__vftable;
    SynchronizeContext = &pFxInterrupt;
    LOWORD(v17) = 4135;
    if ( v11->QueryInterface(flags, (FxQueryInterfaceParams *)&SynchronizeContext) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v12, v13, v14, v15, (const void *)Interrupt, 0x1027u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Interrupt, 0x1027uLL);
    }
    flags = pFxInterrupt;
  }
  if ( flags->m_PassiveHandling )
  {
    if ( (int)FxVerifierCheckIrqlLevel(flags->m_Globals, 0) < 0 )
      return 0;
    flags = pFxInterrupt;
  }
  if ( !Callback )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  m_Interrupt = flags->m_Interrupt;
  SynchronizeContext = (FxInterrupt **)flags;
  v17 = Callback;
  v18 = Context;
  if ( !m_Interrupt )
    m_Interrupt = flags->m_InterruptCaptured;
  return KeSynchronizeExecution(
           m_Interrupt,
           (PKSYNCHRONIZE_ROUTINE)FxInterrupt::_InterruptSynchronizeThunk,
           &SynchronizeContext);
}
