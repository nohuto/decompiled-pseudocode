/*
 * XREFs of imp_WdfDmaTransactionRelease @ 0x14001BDF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x14001BEF0 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfDmaTransactionRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 DmaTransaction)
{
  __int64 v3; // rax
  FxDmaTransactionBase *flags; // rbx
  FxDmaTransactionBase_vtbl *v6; // rax
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  const _GUID *v10; // [rsp+20h] [rbp-48h]
  FxDmaTransactionBase **p_pDmaTrans; // [rsp+50h] [rbp-18h] BYREF
  __int16 v12; // [rsp+58h] [rbp-10h]
  __int16 v13; // [rsp+5Ah] [rbp-Eh]
  int v14; // [rsp+5Ch] [rbp-Ch]
  FxDmaTransactionBase *pDmaTrans; // [rsp+78h] [rbp+10h] BYREF

  if ( !DmaTransaction )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1401uLL);
  LOWORD(v3) = 0;
  flags = (FxDmaTransactionBase *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (DmaTransaction & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxDmaTransactionBase *)((char *)flags - v3);
  }
  if ( flags->m_Type == 5121 )
  {
    pDmaTrans = flags;
  }
  else
  {
    v13 = v3;
    pDmaTrans = 0LL;
    v14 = 0;
    v6 = flags->__vftable;
    p_pDmaTrans = &pDmaTrans;
    v12 = 5121;
    if ( v6->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pDmaTrans) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v7, v8, v9, v10, (const void *)DmaTransaction, 0x1401u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, DmaTransaction, 0x1401uLL);
    }
    flags = pDmaTrans;
  }
  FxDmaTransactionBase::ReleaseForReuse(flags, 0);
  return 0LL;
}
