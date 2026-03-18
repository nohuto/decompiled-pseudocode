/*
 * XREFs of imp_WdfIoResourceRequirementsListGetIoResList @ 0x140099770
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z @ 0x140061C74 (-GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z.c)
 */

WDFIORESLIST__ *__fastcall imp_WdfIoResourceRequirementsListGetIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        unsigned int Index)
{
  unsigned __int8 v4; // r8
  _LIST_ENTRY *Item; // rbx
  unsigned __int8 v6; // r8
  FxNonPagedObject *v7; // r9
  __int16 v9; // ax
  unsigned __int64 v10; // rbx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxIoResReqList *pIoResReqList; // [rsp+48h] [rbp+20h] BYREF

  pIoResReqList = 0LL;
  irql = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pIoResReqList);
  FxNonPagedObject::Lock(pIoResReqList, &irql, v4);
  Item = FxCollectionInternal::GetItem(&pIoResReqList->FxCollectionInternal, Index);
  FxNonPagedObject::Unlock(v7, irql, v6);
  if ( !Item )
    return 0LL;
  v9 = WORD1(Item->Blink);
  v10 = (unsigned __int64)Item ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v9 )
    return 0LL;
  return (WDFIORESLIST__ *)v10;
}
