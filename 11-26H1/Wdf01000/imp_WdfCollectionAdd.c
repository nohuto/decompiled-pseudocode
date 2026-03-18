/*
 * XREFs of imp_WdfCollectionAdd @ 0x14005E390
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfCollectionAdd(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Collection,
        unsigned __int64 Object)
{
  char v5; // si
  __int64 v6; // rax
  FxCollection *flags; // rbx
  __int64 v8; // rax
  FxObject *v9; // rdi
  KIRQL v10; // r14
  FxObject *v11; // rdi
  void *v12; // rax
  FxCollectionInternal *v13; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FX_POOL **v15; // rax
  _LIST_ENTRY *Blink; // r8
  FxTagTracker *m_Lock; // rcx
  _LIST_ENTRY *v19; // rcx
  unsigned int v20; // edx
  FxCollection_vtbl *v21; // rax
  unsigned __int8 v22; // dl
  unsigned __int16 v23; // r9
  FxObject_vtbl *v24; // rax
  unsigned __int8 v25; // dl
  unsigned __int16 v26; // r9
  FxVerifierLock *v27; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-50h]
  FxObject *pObject; // [rsp+50h] [rbp-20h] BYREF
  __m128i v30; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  unsigned __int8 irql; // [rsp+A8h] [rbp+38h] BYREF
  FxCollection *pCollection; // [rsp+B8h] [rbp+48h] BYREF

  irql = 0;
  if ( !Collection )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x100EuLL);
  v5 = 1;
  LOWORD(v6) = 0;
  flags = (FxCollection *)(~Collection & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Collection & 1) != 0 )
  {
    v6 = LOWORD(flags->__vftable);
    flags = (FxCollection *)((char *)flags - v6);
  }
  if ( flags->m_Type == 4110 )
  {
    pCollection = flags;
  }
  else
  {
    v30.m128i_i16[5] = v6;
    pCollection = 0LL;
    v30.m128i_i32[3] = 0;
    v21 = flags->__vftable;
    v30.m128i_i64[0] = (__int64)&pCollection;
    v30.m128i_i16[4] = 4110;
    if ( v21->QueryInterface(flags, (FxQueryInterfaceParams *)&v30) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v22,
        Object,
        v23,
        RefType,
        (const void *)Collection,
        0x100Eu,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Collection, 0x100EuLL);
    }
    flags = pCollection;
  }
  if ( !Object )
    FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1000uLL);
  LOWORD(v8) = 0;
  v9 = (FxObject *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Object & 1) != 0 )
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
    v30.m128i_i16[5] = v8;
    pObject = 0LL;
    v30.m128i_i32[3] = 0;
    v24 = v9->__vftable;
    v30.m128i_i64[0] = (__int64)&pObject;
    v30.m128i_i16[4] = 4096;
    if ( v24->QueryInterface(v9, (FxQueryInterfaceParams *)&v30) < 0 )
    {
      WPP_IFR_SF_qDqD(v9->m_Globals, v25, Object, v26, RefType, (const void *)Object, 0x1000u, v9, v9->m_Type);
      FxVerifierBugCheckWorker(v9->m_Globals, WDF_INVALID_HANDLE, Object, 0x1000uLL);
    }
    flags = pCollection;
  }
  if ( SLOBYTE(flags->m_ObjectFlags) < 0
    && (v27 = *(FxVerifierLock **)&flags[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v27, &irql, Object);
    v10 = irql;
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&flags->m_NPLock.m_Lock);
  }
  v11 = pObject;
  v12 = retaddr;
  v30.m128i_i64[0] = 0LL;
  v13 = &pCollection->FxCollectionInternal;
  v30.m128i_i64[1] = 64LL;
  m_Globals = pCollection->m_Globals;
  if ( !m_Globals->FxPoolTrackingOn )
    v12 = 0LL;
  v15 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v30, 0x18uLL, m_Globals->Tag, v12);
  if ( v15 )
  {
    Blink = v13->m_ListHead.Blink;
    v19 = (_LIST_ENTRY *)(v15 + 1);
    if ( Blink->Flink != &v13->m_ListHead )
      __fastfail(3u);
    v19->Flink = &v13->m_ListHead;
    v15[2] = (FX_POOL *)Blink;
    Blink->Flink = v19;
    v13->m_ListHead.Blink = v19;
    *v15 = (FX_POOL *)v11;
    v20 = _InterlockedIncrement(&v11->m_Refcnt);
    if ( (v11->m_ObjectFlags & 0x80) != 0 )
    {
      m_Lock = (FxTagTracker *)v11[-1].m_SpinLock.m_Lock;
      if ( m_Lock )
        FxTagTracker::UpdateTagHistory(
          m_Lock,
          v13,
          185,
          "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp",
          TagAddRef,
          v20);
    }
    ++v13->m_Count;
  }
  else
  {
    v5 = 0;
  }
  if ( (pCollection->m_ObjectFlags & 0x80) != 0 && *(_QWORD *)&pCollection[-1].m_NPLock.m_DbgFlagIsInitialized )
    FxVerifierLock::Unlock(
      *(FxVerifierLock **)&pCollection[-1].m_NPLock.m_DbgFlagIsInitialized,
      v10,
      (unsigned __int8)Blink);
  else
    KeReleaseSpinLock(&pCollection->m_NPLock.m_Lock, v10);
  return v5 == 0 ? 0xC0000001 : 0;
}
