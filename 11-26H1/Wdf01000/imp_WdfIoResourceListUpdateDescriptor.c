/*
 * XREFs of imp_WdfIoResourceListUpdateDescriptor @ 0x1400995D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     ?GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z @ 0x140061C74 (-GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfIoResourceListUpdateDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  unsigned __int8 v7; // r8
  _LIST_ENTRY *Item; // rbx
  unsigned __int8 v9; // r8
  FxNonPagedObject *v10; // r9
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 retaddr; // [rsp+68h] [rbp+18h]
  unsigned __int8 irql; // [rsp+70h] [rbp+20h] BYREF
  FxIoResList *pList; // [rsp+80h] [rbp+30h] BYREF

  pFxDriverGlobals = 0LL;
  pList = 0LL;
  irql = 0;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)ResourceList,
    0x1035u,
    (void **)&pList,
    &pFxDriverGlobals);
  if ( !Descriptor )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  FxNonPagedObject::Lock(pList, &irql, v7);
  Item = FxCollectionInternal::GetItem(&pList->FxCollectionInternal, Index);
  FxNonPagedObject::Unlock(v10, irql, v9);
  if ( Item )
  {
    *(_LIST_ENTRY *)((char *)Item + 104) = *(_LIST_ENTRY *)&Descriptor->Option;
    *(_LIST_ENTRY *)((char *)Item + 120) = *(_LIST_ENTRY *)&Descriptor->u.BusNumber.MaxBusNumber;
    pList->m_Changed = 1;
    pList->m_OwningList->m_Changed = 1;
  }
  else
  {
    WPP_IFR_SF_qdd(
      pFxDriverGlobals,
      2u,
      0xCu,
      0xDu,
      WPP_FxResourceAPI_cpp_Traceguids,
      ResourceList,
      Index,
      pList->m_Count);
    FxVerifierDbgBreakPoint(pFxDriverGlobals);
  }
}
