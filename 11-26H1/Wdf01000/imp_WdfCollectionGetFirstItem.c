/*
 * XREFs of imp_WdfCollectionGetFirstItem @ 0x14005F680
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall imp_WdfCollectionGetFirstItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Collection,
        unsigned int a3)
{
  __int64 v4; // rax
  FxCollection *flags; // rbx
  KIRQL v6; // r8
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *Blink; // rbx
  __int16 v10; // cx
  unsigned __int64 v11; // rbx
  FxCollection_vtbl *v12; // rax
  unsigned __int8 v13; // dl
  unsigned __int16 v14; // r9
  FxVerifierLock *v15; // rcx
  FxVerifierLock *v16; // rcx
  const _GUID *v17; // [rsp+20h] [rbp-40h]
  FxCollection **p_pCollection; // [rsp+50h] [rbp-10h] BYREF
  __int16 v19; // [rsp+58h] [rbp-8h]
  __int16 v20; // [rsp+5Ah] [rbp-6h]
  int v21; // [rsp+5Ch] [rbp-4h]
  unsigned __int8 irql; // [rsp+88h] [rbp+28h] BYREF
  FxCollection *pCollection; // [rsp+90h] [rbp+30h] BYREF

  irql = 0;
  if ( !Collection )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x100EuLL);
  LOWORD(v4) = 0;
  flags = (FxCollection *)(~Collection & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Collection & 1) != 0 )
  {
    v4 = LOWORD(flags->__vftable);
    flags = (FxCollection *)((char *)flags - v4);
  }
  if ( flags->m_Type == 4110 )
  {
    pCollection = flags;
  }
  else
  {
    v20 = v4;
    pCollection = 0LL;
    v21 = 0;
    v12 = flags->__vftable;
    p_pCollection = &pCollection;
    v19 = 4110;
    if ( v12->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pCollection) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v13, a3, v14, v17, (const void *)Collection, 0x100Eu, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Collection, 0x100EuLL);
    }
    flags = pCollection;
  }
  if ( SLOBYTE(flags->m_ObjectFlags) < 0
    && (v15 = *(FxVerifierLock **)&flags[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v15, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&flags->m_NPLock.m_Lock);
  }
  Flink = pCollection->m_ListHead.Flink;
  if ( Flink == &pCollection->m_ListHead )
    Blink = 0LL;
  else
    Blink = Flink[-1].Blink;
  if ( SLOBYTE(pCollection->m_ObjectFlags) < 0
    && (v16 = *(FxVerifierLock **)&pCollection[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v16, v6, v6);
  }
  else
  {
    KeReleaseSpinLock(&pCollection->m_NPLock.m_Lock, v6);
  }
  if ( !Blink )
    return 0LL;
  v10 = WORD1(Blink->Blink);
  v11 = (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v10 )
    return 0LL;
  return v11;
}
