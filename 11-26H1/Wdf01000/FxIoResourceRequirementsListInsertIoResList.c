/*
 * XREFs of FxIoResourceRequirementsListInsertIoResList @ 0x140098E04
 * Callers:
 *     imp_WdfIoResourceRequirementsListAppendIoResList @ 0x1400996F0 (imp_WdfIoResourceRequirementsListAppendIoResList.c)
 *     imp_WdfIoResourceRequirementsListInsertIoResList @ 0x140099800 (imp_WdfIoResourceRequirementsListInsertIoResList.c)
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x14009ABC8 (-AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z.c)
 */

int __fastcall FxIoResourceRequirementsListInsertIoResList(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        WDFIORESLIST__ *IoResList,
        unsigned int Index)
{
  int result; // eax
  FxIoResList *pIoResList; // [rsp+30h] [rbp-10h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+38h] [rbp-8h] BYREF
  FxIoResReqList *pIoResReqList; // [rsp+50h] [rbp+10h] BYREF

  pFxDriverGlobals = 0LL;
  pIoResReqList = 0LL;
  pIoResList = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pIoResReqList,
    &pFxDriverGlobals);
  FxObjectHandleGetPtr(pFxDriverGlobals, (unsigned __int64)IoResList, 0x1035u, (void **)&pIoResList);
  if ( pIoResList->m_OwningList != pIoResReqList )
    return -1073741808;
  result = FxResourceCollection::AddAt(pIoResReqList, Index, pIoResList);
  if ( result >= 0 )
  {
    pIoResList->m_AccessFlags = pIoResReqList->m_AccessFlags;
    pIoResList->m_OwningList = pIoResReqList;
  }
  return result;
}
