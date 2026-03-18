/*
 * XREFs of imp_WdfDpcGetParentObject @ 0x1400606C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall imp_WdfDpcGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Dpc)
{
  __int64 v3; // rax
  FxDpc *flags; // rbx
  FxObject *m_Object; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v7; // rcx
  FxDpc_vtbl *v9; // rax
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  const _GUID *v13; // [rsp+20h] [rbp-48h]
  FxDpc **p_pFxDpc; // [rsp+50h] [rbp-18h] BYREF
  __int16 v15; // [rsp+58h] [rbp-10h]
  __int16 v16; // [rsp+5Ah] [rbp-Eh]
  int v17; // [rsp+5Ch] [rbp-Ch]
  FxDpc *pFxDpc; // [rsp+78h] [rbp+10h] BYREF

  if ( !Dpc )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1015uLL);
  LOWORD(v3) = 0;
  flags = (FxDpc *)(~Dpc & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Dpc & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxDpc *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4117 )
  {
    pFxDpc = flags;
  }
  else
  {
    v16 = v3;
    pFxDpc = 0LL;
    v17 = 0;
    v9 = flags->__vftable;
    p_pFxDpc = &pFxDpc;
    v15 = 4117;
    if ( v9->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pFxDpc) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v10, v11, v12, v13, (const void *)Dpc, 0x1015u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Dpc, 0x1015uLL);
    }
    flags = pFxDpc;
  }
  m_Object = flags->m_Object;
  if ( !m_Object )
    return 0LL;
  m_ObjectSize = m_Object->m_ObjectSize;
  v7 = (unsigned __int64)m_Object ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    return 0LL;
  return v7;
}
