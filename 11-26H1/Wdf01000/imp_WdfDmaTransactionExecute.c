/*
 * XREFs of imp_WdfDmaTransactionExecute @ 0x1400607E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1400181B4 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140020570 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x140052700 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_ql @ 0x1400868F4 (WPP_IFR_SF_ql.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfDmaTransactionExecute(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        __int64 DmaTransaction,
        void *Context)
{
  __int64 v5; // rax
  unsigned __int64 flags; // rsi
  int v7; // ecx
  FxRequest *v8; // rcx
  FxObject **v9; // rbx
  __int64 v10; // rax
  int v11; // edi
  __int64 v13; // rax
  unsigned __int16 v14; // r9
  _FX_DRIVER_GLOBALS *v15; // rbx
  unsigned __int64 v16; // rdi
  const void *v17; // rax
  FxObject *v18; // rcx
  FxRequest *v19; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  FxDmaTransactionBase **p_pDmaTrans; // [rsp+50h] [rbp-28h] BYREF
  __int16 v22; // [rsp+58h] [rbp-20h]
  __int16 v23; // [rsp+5Ah] [rbp-1Eh]
  int v24; // [rsp+5Ch] [rbp-1Ch]
  FxDmaTransactionBase *pDmaTrans; // [rsp+88h] [rbp+10h] BYREF

  if ( !DmaTransaction )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1401uLL);
  LOWORD(v5) = 0;
  flags = ~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (DmaTransaction & 1) != 0 )
  {
    v5 = *(unsigned __int16 *)flags;
    flags -= v5;
  }
  if ( *(_WORD *)(flags + 8) == 5121 )
  {
    pDmaTrans = (FxDmaTransactionBase *)flags;
  }
  else
  {
    v23 = v5;
    pDmaTrans = 0LL;
    v24 = 0;
    v13 = *(_QWORD *)flags;
    p_pDmaTrans = &pDmaTrans;
    v22 = 5121;
    if ( (*(int (__fastcall **)(unsigned __int64, FxDmaTransactionBase ***))(v13 + 40))(flags, &p_pDmaTrans) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(flags + 16),
        DmaTransaction,
        (unsigned int)Context,
        v14,
        traceGuid,
        (const void *)DmaTransaction,
        0x1401u,
        (const void *)flags,
        *(unsigned __int16 *)(flags + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(flags + 16), WDF_INVALID_HANDLE, DmaTransaction, 0x1401uLL);
    }
    flags = (unsigned __int64)pDmaTrans;
  }
  v7 = *(_DWORD *)(flags + 120);
  if ( v7 != 3 )
  {
    v15 = *(_FX_DRIVER_GLOBALS **)(flags + 16);
    v16 = flags ^ 0xFFFFFFFFFFFFFFF8uLL;
    v17 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(flags + 10) )
      v17 = 0LL;
    WPP_IFR_SF_ql(
      *(_FX_DRIVER_GLOBALS **)(flags + 16),
      2u,
      0xFu,
      0x15u,
      WPP_FxDmaTransactionBase_cpp_Traceguids,
      v17,
      v7);
    if ( !*(_WORD *)(flags + 10) )
      v16 = 0LL;
    FxVerifierBugCheckWorker(v15, WDF_DMA_FATAL_ERROR, v16, *(int *)(flags + 120));
  }
  v8 = *(FxRequest **)(flags + 144);
  v9 = (FxObject **)(flags + 144);
  if ( v8 )
  {
    FxRequest::AddIrpReference(v8, DmaTransaction, (unsigned __int8)Context);
    FxObject::AddRef(*v9, (void *)flags, 274, "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    *v9 = (FxObject *)((unsigned __int64)*v9 | 1);
  }
  v10 = *(_QWORD *)flags;
  *(_DWORD *)(flags + 120) = 4;
  *(_QWORD *)(flags + 160) = Context;
  v11 = (*(__int64 (__fastcall **)(unsigned __int64))(v10 + 72))(flags);
  if ( v11 < 0 )
  {
    v18 = *v9;
    *(_DWORD *)(flags + 120) = 6;
    *(_QWORD *)(flags + 160) = 0LL;
    if ( v18 )
    {
      v19 = (FxRequest *)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFEuLL);
      *v9 = v19;
      FxRequest::ReleaseIrpReference(v19);
      (*v9)->Release(*v9, (void *)flags, 302, "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
  }
  return (unsigned int)v11;
}
