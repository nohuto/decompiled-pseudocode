/*
 * XREFs of imp_WdfCollectionGetItem @ 0x14005E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall imp_WdfCollectionGetItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Collection,
        unsigned int Index)
{
  __int64 v5; // rax
  FxCollection *flags; // rbx
  int v7; // r8d
  KIRQL v8; // r9
  FxCollection *Flink; // rdx
  _LIST_ENTRY *Blink; // rbx
  __int16 v11; // cx
  unsigned __int64 v12; // rbx
  FxCollection_vtbl *v14; // rax
  unsigned __int8 v15; // dl
  unsigned __int16 v16; // r9
  FxVerifierLock *v17; // rcx
  const _GUID *v18; // [rsp+20h] [rbp-40h]
  FxCollection **p_pCollection; // [rsp+50h] [rbp-10h] BYREF
  __int16 v20; // [rsp+58h] [rbp-8h]
  __int16 v21; // [rsp+5Ah] [rbp-6h]
  int v22; // [rsp+5Ch] [rbp-4h]
  unsigned __int8 irql; // [rsp+98h] [rbp+38h] BYREF
  FxCollection *pCollection; // [rsp+A8h] [rbp+48h] BYREF

  irql = 0;
  if ( !Collection )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x100EuLL);
  LOWORD(v5) = 0;
  flags = (FxCollection *)(~Collection & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Collection & 1) != 0 )
  {
    v5 = LOWORD(flags->__vftable);
    flags = (FxCollection *)((char *)flags - v5);
  }
  if ( flags->m_Type == 4110 )
  {
    pCollection = flags;
  }
  else
  {
    v21 = v5;
    pCollection = 0LL;
    v22 = 0;
    v14 = flags->__vftable;
    p_pCollection = &pCollection;
    v20 = 4110;
    if ( v14->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pCollection) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v15, Index, v16, v18, (const void *)Collection, 0x100Eu, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Collection, 0x100EuLL);
    }
    flags = pCollection;
  }
  if ( SLOBYTE(flags->m_ObjectFlags) < 0
    && (v17 = *(FxVerifierLock **)&flags[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v17, &irql, Index);
    v8 = irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&flags->m_NPLock.m_Lock);
  }
  if ( Index < pCollection->m_Count )
  {
    v7 = 0;
    Flink = (FxCollection *)pCollection->m_ListHead.Flink;
    while ( Flink != (FxCollection *)&pCollection->m_ListHead )
    {
      if ( v7 == Index )
      {
        if ( Flink == (FxCollection *)8 )
          break;
        Blink = Flink[-1].m_ListHead.Blink;
        goto LABEL_15;
      }
      Flink = (FxCollection *)Flink->__vftable;
      ++v7;
    }
  }
  Blink = 0LL;
LABEL_15:
  if ( SLOBYTE(pCollection->m_ObjectFlags) < 0 && *(_QWORD *)&pCollection[-1].m_NPLock.m_DbgFlagIsInitialized )
    FxVerifierLock::Unlock(*(FxVerifierLock **)&pCollection[-1].m_NPLock.m_DbgFlagIsInitialized, v8, v7);
  else
    KeReleaseSpinLock(&pCollection->m_NPLock.m_Lock, v8);
  if ( !Blink )
    return 0LL;
  v11 = WORD1(Blink->Blink);
  v12 = (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v11 )
    return 0LL;
  return v12;
}
