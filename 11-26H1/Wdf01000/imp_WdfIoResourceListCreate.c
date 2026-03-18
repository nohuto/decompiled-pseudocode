/*
 * XREFs of imp_WdfIoResourceListCreate @ 0x140099180
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ??0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z @ 0x14001B834 (--0FxResourceCollection@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GGE@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoResourceListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFIORESLIST__ **ResourceList)
{
  _FX_DRIVER_GLOBALS *v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned int v9; // r9d
  FX_POOL **v10; // rax
  FX_POOL **v11; // rdi
  FxIoResReqList *v12; // rbx
  int v13; // ebx
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF
  FxIoResReqList *pIoResReqList; // [rsp+78h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pIoResReqList = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pIoResReqList,
    &pFxDriverGlobals);
  v6 = pFxDriverGlobals;
  if ( !ResourceList )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  *ResourceList = 0LL;
  result = FxValidateObjectAttributes(v6, Attributes, 1);
  if ( (int)result >= 0 )
  {
    v10 = FxObjectHandleAlloc2(pFxDriverGlobals, v8, 0xA0uLL, v9, Attributes, 0, FxObjectTypeExternal);
    v11 = v10;
    if ( v10 )
    {
      v12 = pIoResReqList;
      FxResourceCollection::FxResourceCollection((FxResourceCollection *)v10, pFxDriverGlobals, 0x1035u, 0xA0u, 0);
      v11[19] = (FX_POOL *)v12;
      *v11 = (FX_POOL *)FxIoResList::`vftable';
      *((_BYTE *)v11 + 144) = v12->m_AccessFlags;
      v13 = FxObject::Commit((FxObject *)v11, Attributes, (void **)ResourceList, pIoResReqList, 1u);
      if ( v13 < 0 )
        FxObject::DeleteFromFailedCreate((FxObject *)v11);
      return (unsigned int)v13;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
