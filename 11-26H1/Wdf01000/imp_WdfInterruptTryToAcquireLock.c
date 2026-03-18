/*
 * XREFs of imp_WdfInterruptTryToAcquireLock @ 0x1400A3090
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1400421F0 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int8 __fastcall imp_WdfInterruptTryToAcquireLock(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt)
{
  char v2; // bl
  _FX_DRIVER_GLOBALS *v4; // rdx
  FxInterrupt *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  int v8; // eax
  FxInterrupt *pFxInterrupt; // [rsp+40h] [rbp+8h] BYREF
  __int64 FxDriverGlobals; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  v5 = pFxInterrupt;
  m_Globals = pFxInterrupt->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    if ( !pFxInterrupt->m_PassiveHandling )
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0x20u, WPP_FxInterruptApi_cpp_Traceguids, Interrupt);
      FxVerifierDbgBreakPoint(pFxInterrupt->m_Globals);
      return 0;
    }
    if ( (int)FxVerifierCheckIrqlLevel(pFxInterrupt->m_Globals, 0) < 0 )
      return 0;
    v5 = pFxInterrupt;
  }
  FxDriverGlobals = 0LL;
  if ( v5->m_PassiveHandling )
  {
    v8 = FxWaitLockInternal::AcquireLock(&v5->m_WaitLock->FxWaitLockInternal, v4, (_LARGE_INTEGER *)&FxDriverGlobals);
    if ( v8 >= 0 && v8 != 258 )
      return 1;
  }
  return v2;
}
