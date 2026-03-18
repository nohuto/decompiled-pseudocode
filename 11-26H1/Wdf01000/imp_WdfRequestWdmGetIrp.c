/*
 * XREFs of imp_WdfRequestWdmGetIrp @ 0x140052770
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400594F8 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

_IRP *__fastcall imp_WdfRequestWdmGetIrp(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request, unsigned int a3)
{
  _IRP *m_Irp; // rdi
  FxRequest *flags; // rbx
  __int64 v6; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxRequest_vtbl *v9; // rax
  unsigned __int8 v10; // dl
  unsigned __int16 v11; // r9
  unsigned __int8 v12; // r8
  int IsNotCompleted; // r14d
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-28h] BYREF
  __int16 v16; // [rsp+58h] [rbp-20h]
  __int16 v17; // [rsp+5Ah] [rbp-1Eh]
  int v18; // [rsp+5Ch] [rbp-1Ch]
  unsigned __int8 PreviousIrql; // [rsp+88h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+90h] [rbp+18h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  m_Irp = 0LL;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v6) = 0;
  if ( (Request & 1) != 0 )
  {
    v6 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v6);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    v17 = v6;
    pRequest = 0LL;
    v18 = 0;
    v9 = flags->__vftable;
    p_pRequest = &pRequest;
    v16 = 4104;
    if ( v9->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v10, a3, v11, traceGuid, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( !m_Globals->FxVerifierIO )
    return flags->m_Irp.m_Irp;
  PreviousIrql = 0;
  FxNonPagedObject::Lock(flags, &PreviousIrql, a3);
  IsNotCompleted = FxRequest::VerifyRequestIsNotCompleted(flags, flags->m_Globals);
  if ( IsNotCompleted >= 0 )
    m_Irp = flags->m_Irp.m_Irp;
  else
    IsNotCompleted = -1073741808;
  FxNonPagedObject::Unlock(flags, PreviousIrql, v12);
  if ( IsNotCompleted < 0 )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x3Du, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, IsNotCompleted);
    FxVerifierDbgBreakPoint(m_Globals);
    return 0LL;
  }
  return m_Irp;
}
