/*
 * XREFs of imp_WdfRequestRetrieveOutputWdmMdl @ 0x140009BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x140008F68 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x140009D80 (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

int __fastcall imp_WdfRequestRetrieveOutputWdmMdl(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        _MDL **Mdl)
{
  __int64 v5; // rax
  FxRequest *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int8 MajorFunction; // al
  FxRequest_vtbl *v10; // rax
  unsigned __int8 v11; // dl
  unsigned __int16 v12; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-28h] BYREF
  __int16 v15; // [rsp+58h] [rbp-20h]
  __int16 v16; // [rsp+5Ah] [rbp-1Eh]
  int v17; // [rsp+5Ch] [rbp-1Ch]
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxRequest *pRequest; // [rsp+88h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v5) = 0;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v5 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v5);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    v16 = v5;
    pRequest = 0LL;
    v17 = 0;
    v10 = flags->__vftable;
    p_pRequest = &pRequest;
    v15 = 4104;
    if ( v10->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v11,
        (unsigned int)Mdl,
        v12,
        traceGuid,
        (const void *)Request,
        0x1008u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( !Mdl )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  *Mdl = 0LL;
  MajorFunction = flags->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( MajorFunction == 4 )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, 0x2Bu, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
    return -1073741808;
  }
  else if ( (unsigned __int8)(MajorFunction - 14) > 1u )
  {
    return FxRequest::GetMdl(flags, Mdl, (unsigned __int8)Mdl);
  }
  else
  {
    return FxRequest::GetDeviceControlOutputMdl(flags, Mdl);
  }
}
