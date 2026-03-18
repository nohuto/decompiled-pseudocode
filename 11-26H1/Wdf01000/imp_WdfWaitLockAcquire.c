/*
 * XREFs of imp_WdfWaitLockAcquire @ 0x140010D30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfWaitLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Lock, __int64 *Timeout)
{
  FxWaitLock *flags; // rdi
  __int64 v6; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _LARGE_INTEGER *v8; // rax
  unsigned int v9; // ebx
  KIRQL CurrentIrql; // al
  FxWaitLock_vtbl *v12; // rax
  unsigned __int8 v13; // dl
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  const _GUID *v16; // [rsp+20h] [rbp-58h]
  FxWaitLock **p_pLock; // [rsp+50h] [rbp-28h] BYREF
  __int16 v18; // [rsp+58h] [rbp-20h]
  __int16 v19; // [rsp+5Ah] [rbp-1Eh]
  int v20; // [rsp+5Ch] [rbp-1Ch]
  FxWaitLock *pLock; // [rsp+88h] [rbp+10h] BYREF
  __int64 v22; // [rsp+98h] [rbp+20h] BYREF

  if ( !Lock )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1023uLL);
  flags = (FxWaitLock *)(~Lock & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v6) = 0;
  if ( (Lock & 1) != 0 )
  {
    v6 = LOWORD(flags->__vftable);
    flags = (FxWaitLock *)((char *)flags - v6);
  }
  if ( flags->m_Type == 4131 )
  {
    pLock = flags;
  }
  else
  {
    v19 = v6;
    pLock = 0LL;
    v20 = 0;
    v12 = flags->__vftable;
    p_pLock = &pLock;
    v18 = 4131;
    if ( v12->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pLock) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v13, v14, v15, v16, (const void *)Lock, 0x1023u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Lock, 0x1023uLL);
    }
    flags = pLock;
  }
  m_Globals = flags->m_Globals;
  if ( (!Timeout || *Timeout) && m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      return 3221225488LL;
    }
    flags = pLock;
  }
  v22 = 0LL;
  if ( Timeout )
    v22 = *Timeout;
  KeEnterCriticalRegion();
  v8 = (_LARGE_INTEGER *)&v22;
  if ( !Timeout )
    v8 = 0LL;
  v9 = KeWaitForSingleObject(&flags->FxWaitLockInternal, Executive, 0, 0, v8);
  if ( v9 == 258 )
    KeLeaveCriticalRegion();
  else
    flags->m_OwningThread = KeGetCurrentThread();
  return v9;
}
