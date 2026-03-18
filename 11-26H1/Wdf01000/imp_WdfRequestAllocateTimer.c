/*
 * XREFs of imp_WdfRequestAllocateTimer @ 0x14005F530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x140026E7C (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfRequestAllocateTimer(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  __int64 v3; // rax
  FxRequest *flags; // rbx
  FxRequest_vtbl *v6; // rax
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  const _GUID *v10; // [rsp+20h] [rbp-48h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-18h] BYREF
  __int16 v12; // [rsp+58h] [rbp-10h]
  __int16 v13; // [rsp+5Ah] [rbp-Eh]
  int v14; // [rsp+5Ch] [rbp-Ch]
  FxRequest *pRequest; // [rsp+78h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v3) = 0;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    v13 = v3;
    pRequest = 0LL;
    v14 = 0;
    v6 = flags->__vftable;
    p_pRequest = &pRequest;
    v12 = 4104;
    if ( v6->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v7, v8, v9, v10, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  return FxRequestBase::CreateTimer(flags);
}
