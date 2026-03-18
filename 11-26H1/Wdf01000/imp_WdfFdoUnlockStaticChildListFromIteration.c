/*
 * XREFs of imp_WdfFdoUnlockStaticChildListFromIteration @ 0x140046B60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x140046CEC (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfFdoUnlockStaticChildListFromIteration(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Fdo)
{
  __int64 v3; // rax
  FxDevice *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxPkgPnp *m_PkgPnp; // rbx
  FxChildList *v7; // rbx
  _FX_DRIVER_GLOBALS *v8; // rcx
  FxDevice_vtbl *v9; // rax
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  FxDevice **p_pDevice; // [rsp+50h] [rbp-18h] BYREF
  __int16 v14; // [rsp+58h] [rbp-10h]
  __int16 v15; // [rsp+5Ah] [rbp-Eh]
  int v16; // [rsp+5Ch] [rbp-Ch]
  FxDevice *pDevice; // [rsp+78h] [rbp+10h] BYREF

  if ( !Fdo )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v3) = 0;
  flags = (FxDevice *)(~Fdo & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Fdo & 1) != 0 )
  {
    v3 = LOWORD(flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    flags = (FxDevice *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4098 )
  {
    pDevice = flags;
  }
  else
  {
    v15 = v3;
    pDevice = 0LL;
    v16 = 0;
    v9 = flags->FxDeviceBase::FxNonPagedObject::FxObject::__vftable;
    p_pDevice = &pDevice;
    v14 = 4098;
    if ( v9->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, Fdo, v10, v11, traceGuid, (const void *)Fdo, 0x1002u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Fdo, 0x1002uLL);
    }
    flags = pDevice;
  }
  m_Globals = flags->m_Globals;
  if ( flags->m_Legacy || (m_PkgPnp = flags->m_PkgPnp, m_PkgPnp->m_Type != 4353) )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxDeviceFdoAPI_cpp_Traceguids, (const void *)Fdo);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    v7 = *(FxChildList **)&m_PkgPnp[1].m_Type;
    v8 = v7->m_Globals;
    if ( v8->FxVerboseOn )
      WPP_IFR_SF_(v8, 5u, 0xCu, 0x12u, WPP_FxChildList_cpp_Traceguids);
    FxChildList::EndScan(v7, (unsigned int *)Fdo);
  }
}
