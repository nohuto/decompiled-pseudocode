/*
 * XREFs of imp_WdfRegistryClose @ 0x140017270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfRegistryClose(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Key)
{
  __int64 v3; // rax
  FxRegKey *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *m_Key; // rcx
  FxRegKey_vtbl *v7; // rax
  unsigned __int8 v8; // dl
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  const _GUID *v11; // [rsp+20h] [rbp-48h]
  FxRegKey **p_pKey; // [rsp+50h] [rbp-18h] BYREF
  __int16 v13; // [rsp+58h] [rbp-10h]
  __int16 v14; // [rsp+5Ah] [rbp-Eh]
  int v15; // [rsp+5Ch] [rbp-Ch]
  FxRegKey *pKey; // [rsp+78h] [rbp+10h] BYREF

  if ( !Key )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1006uLL);
  LOWORD(v3) = 0;
  flags = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Key & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxRegKey *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4102 )
  {
    pKey = flags;
  }
  else
  {
    v14 = v3;
    pKey = 0LL;
    v15 = 0;
    v7 = flags->__vftable;
    p_pKey = &pKey;
    v13 = 4102;
    if ( v7->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pKey) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v8, v9, v10, v11, (const void *)Key, 0x1006u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Key, 0x1006uLL);
    }
    flags = pKey;
  }
  m_Globals = flags->m_Globals;
  if ( FxVerifierCheckIrqlLevel(m_Globals, 0) < 0 )
  {
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    m_Key = pKey->m_Key;
    pKey->m_Key = 0LL;
    ZwClose(m_Key);
    pKey->DeleteObject(pKey);
  }
}
