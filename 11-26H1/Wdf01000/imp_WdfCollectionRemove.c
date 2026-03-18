/*
 * XREFs of imp_WdfCollectionRemove @ 0x14002E750
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfCollectionRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Collection,
        unsigned __int64 Item)
{
  __int64 v5; // rax
  FxCollection *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  __int64 v8; // rax
  FxObject *v9; // rdi
  KIRQL v10; // si
  FxCollection *v11; // rbx
  unsigned __int8 v12; // r8
  FxCollection *i; // rcx
  _LIST_ENTRY **p_Blink; // rdx
  FxCollection *v15; // rax
  FxCollection_vtbl *v16; // r8
  void (__fastcall *v17)(FxObject *); // rcx
  signed int v18; // edi
  FxCollection_vtbl *v19; // rax
  unsigned __int8 v20; // dl
  unsigned __int16 v21; // r9
  FxObject_vtbl *v22; // rax
  unsigned __int8 v23; // dl
  unsigned __int16 v24; // r9
  FxVerifierLock *v25; // rcx
  FxVerifierLock *v26; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-50h]
  FxObject *pObject; // [rsp+50h] [rbp-20h] BYREF
  void *p_pCollection; // [rsp+58h] [rbp-18h] BYREF
  __int16 v30; // [rsp+60h] [rbp-10h]
  __int16 v31; // [rsp+62h] [rbp-Eh]
  int v32; // [rsp+64h] [rbp-Ch]
  unsigned __int8 irql; // [rsp+B8h] [rbp+48h] BYREF
  FxCollection *pCollection; // [rsp+C8h] [rbp+58h] BYREF

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
    v31 = v5;
    pCollection = 0LL;
    v32 = 0;
    v19 = flags->__vftable;
    p_pCollection = &pCollection;
    v30 = 4110;
    if ( v19->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pCollection) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v20,
        Item,
        v21,
        traceGuid,
        (const void *)Collection,
        0x100Eu,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Collection, 0x100EuLL);
    }
    flags = pCollection;
  }
  m_Globals = flags->m_Globals;
  if ( !Item )
    FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1000uLL);
  LOWORD(v8) = 0;
  v9 = (FxObject *)(~Item & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Item & 1) != 0 )
  {
    v8 = LOWORD(v9->__vftable);
    v9 = (FxObject *)((char *)v9 - v8);
  }
  if ( v9->m_Type == 4096 )
  {
    pObject = v9;
  }
  else
  {
    v31 = v8;
    pObject = 0LL;
    v32 = 0;
    v22 = v9->__vftable;
    p_pCollection = &pObject;
    v30 = 4096;
    if ( v22->QueryInterface(v9, (FxQueryInterfaceParams *)&p_pCollection) < 0 )
    {
      WPP_IFR_SF_qDqD(v9->m_Globals, v23, Item, v24, traceGuid, (const void *)Item, 0x1000u, v9, v9->m_Type);
      FxVerifierBugCheckWorker(v9->m_Globals, WDF_INVALID_HANDLE, Item, 0x1000uLL);
    }
    flags = pCollection;
  }
  if ( SLOBYTE(flags->m_ObjectFlags) < 0
    && (v25 = *(FxVerifierLock **)&flags[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v25, &irql, Item);
    v10 = irql;
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&flags->m_NPLock.m_Lock);
  }
  v11 = pCollection;
  v12 = (unsigned __int8)pObject;
  for ( i = (FxCollection *)pCollection->m_ListHead.Flink; ; i = (FxCollection *)i->__vftable )
  {
    if ( i == (FxCollection *)&pCollection->m_ListHead )
      goto LABEL_37;
    p_Blink = &i[-1].m_ListHead.Blink;
    if ( (FxObject *)i[-1].m_ListHead.Blink == pObject )
      break;
  }
  if ( i == (FxCollection *)8 )
  {
LABEL_37:
    pObject = 0LL;
    v18 = -1073741275;
    goto LABEL_20;
  }
  v15 = i;
  v16 = i->__vftable;
  if ( (FxCollection *)i->~FxObject != i
    || (v17 = (void (__fastcall *)(FxObject *))p_Blink[2], *(FxCollection **)v17 != v15) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v17 = v16;
  v16->~FxObject = v17;
  FxPoolFree(p_Blink);
  --v11->m_Count;
  v18 = 0;
  v11 = pCollection;
LABEL_20:
  if ( SLOBYTE(v11->m_ObjectFlags) < 0 && (v26 = *(FxVerifierLock **)&v11[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
    FxVerifierLock::Unlock(v26, v10, v12);
  else
    KeReleaseSpinLock(&v11->m_NPLock.m_Lock, v10);
  if ( pObject )
    pObject->Release(
      pObject,
      &pCollection->FxCollectionInternal,
      127,
      "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
  if ( v18 < 0 )
  {
    WPP_IFR_SF_qqd(
      m_Globals,
      2u,
      2u,
      0xDu,
      WPP_FxCollectionApi_cpp_Traceguids,
      (const void *)Item,
      (const void *)Collection,
      v18);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
