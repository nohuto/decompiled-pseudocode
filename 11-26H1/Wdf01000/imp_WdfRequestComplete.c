/*
 * XREFs of imp_WdfRequestComplete @ 0x140037150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qiid @ 0x14005646C (WPP_IFR_SF_qiid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     Vf_VerifyRequestComplete @ 0x1400DDAF4 (Vf_VerifyRequestComplete.c)
 */

void __fastcall imp_WdfRequestComplete(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned int RequestStatus)
{
  unsigned __int64 flags; // rbx
  __int64 v6; // rax
  _FX_DRIVER_GLOBALS *v7; // rcx
  FxDeviceBase *v8; // rdi
  _FX_DRIVER_GLOBALS *v9; // rcx
  char m_Globals_high; // al
  FxRequest_vtbl *v11; // rax
  unsigned __int8 v12; // dl
  unsigned __int16 v13; // r9
  const void *v14; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-28h] BYREF
  __int16 v17; // [rsp+58h] [rbp-20h]
  __int16 v18; // [rsp+5Ah] [rbp-1Eh]
  int v19; // [rsp+5Ch] [rbp-1Ch]
  FxRequest *pRequest; // [rsp+88h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  flags = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(v6) = 0;
  if ( (Request & 1) != 0 )
  {
    v6 = *(unsigned __int16 *)flags;
    flags -= v6;
  }
  if ( *(_WORD *)(flags + 8) == 4104 )
  {
    pRequest = (FxRequest *)flags;
  }
  else
  {
    v18 = v6;
    pRequest = 0LL;
    v19 = 0;
    v11 = *(FxRequest_vtbl **)flags;
    p_pRequest = &pRequest;
    v17 = 4104;
    if ( v11->QueryInterface((FxObject *)flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(flags + 16),
        v12,
        RequestStatus,
        v13,
        traceGuid,
        (const void *)Request,
        0x1008u,
        (const void *)flags,
        *(unsigned __int16 *)(flags + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(flags + 16), WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = (unsigned __int64)pRequest;
  }
  v7 = *(_FX_DRIVER_GLOBALS **)(flags + 16);
  if ( v7->FxVerifierOn )
  {
    if ( Vf_VerifyRequestComplete(v7, (FxRequest *)flags) < 0 )
      return;
    flags = (unsigned __int64)pRequest;
  }
  v8 = *(FxDeviceBase **)(flags + 96);
  v9 = *(_FX_DRIVER_GLOBALS **)(flags + 16);
  if ( v9->FxVerboseOn )
  {
    v14 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(flags + 10) )
      v14 = 0LL;
    WPP_IFR_SF_qiid(
      v9,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      v14,
      *(const void **)(flags + 152),
      *(_QWORD *)(*(_QWORD *)(flags + 152) + 56LL),
      RequestStatus);
  }
  if ( v8 )
    m_Globals_high = HIBYTE(v8[1].m_Globals);
  else
    m_Globals_high = 0;
  *(_BYTE *)(flags + 236) = m_Globals_high;
  FxRequest::CompleteInternal((FxRequest *)flags, RequestStatus, RequestStatus);
}
