/*
 * XREFs of imp_WdfCmResourceListRemoveByDescriptor @ 0x140099030
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x14003BB54 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfCmResourceListRemoveByDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor)
{
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  FxCollectionInternal *v7; // rsi
  _LIST_ENTRY *i; // rbx
  FxCollectionEntry *p_Blink; // rbx
  FxObject *m_Object; // rdi
  unsigned __int64 retaddr; // [rsp+58h] [rbp+28h]
  unsigned __int8 irql; // [rsp+60h] [rbp+30h] BYREF
  FxCmResList *pList; // [rsp+70h] [rbp+40h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+78h] [rbp+48h] BYREF

  pFxDriverGlobals = 0LL;
  pList = 0LL;
  irql = 0;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)List,
    0x1036u,
    (void **)&pList,
    &pFxDriverGlobals);
  if ( !Descriptor )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( (pList->m_AccessFlags & 2) != 0 )
  {
    FxNonPagedObject::Lock(pList, &irql, v5);
    v7 = &pList->FxCollectionInternal;
    for ( i = pList->m_ListHead.Flink; ; i = p_Blink->m_ListEntry.Flink )
    {
      p_Blink = (FxCollectionEntry *)&i[-1].Blink;
      m_Object = 0LL;
      if ( p_Blink == (FxCollectionEntry *)v7 )
        break;
      m_Object = p_Blink->m_Object;
      if ( RtlCompareMemory(&p_Blink->m_Object[1], Descriptor, 0x14uLL) == 20 )
      {
        pList->m_Changed = 1;
        FxCollectionInternal::RemoveEntry(&pList->FxCollectionInternal, p_Blink);
        break;
      }
    }
    FxNonPagedObject::Unlock(pList, irql, v6);
    if ( m_Object )
      m_Object->DeleteObject(m_Object);
  }
  else
  {
    WPP_IFR_SF_q(pFxDriverGlobals, 2u, 0xCu, 0x11u, WPP_FxResourceAPI_cpp_Traceguids, List);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
}
