/*
 * XREFs of imp_WdfCollectionGetLastItem @ 0x140070210
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int64 __fastcall imp_WdfCollectionGetLastItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // dl
  _LIST_ENTRY *Blink; // rbx
  __int16 v5; // cx
  unsigned __int64 v6; // rbx
  FxVerifierLock *v8; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxCollection *pCollection; // [rsp+40h] [rbp+18h] BYREF

  pCollection = 0LL;
  irql = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Collection,
    0x100Eu,
    (void **)&pCollection);
  if ( SLOBYTE(pCollection->m_ObjectFlags) < 0
    && (v8 = *(FxVerifierLock **)&pCollection[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v8, &irql, v2);
    v3 = irql;
  }
  else
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&pCollection->m_NPLock.m_Lock);
  }
  if ( pCollection->m_ListHead.Flink == &pCollection->m_ListHead )
    Blink = 0LL;
  else
    Blink = pCollection->m_ListHead.Blink[-1].Blink;
  FxNonPagedObject::Unlock(pCollection, v3, (unsigned __int8)pCollection);
  if ( !Blink )
    return 0LL;
  v5 = WORD1(Blink->Blink);
  v6 = (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v5 )
    return 0LL;
  return v6;
}
