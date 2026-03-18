/*
 * XREFs of ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140015458
 * Callers:
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1400146DC (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     imp_WdfMemoryCreate @ 0x140014B20 (imp_WdfMemoryCreate.c)
 *     imp_WdfRegistryQueryMultiString @ 0x14003C530 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfLookasideListCreate @ 0x140094310 (imp_WdfLookasideListCreate.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140010970 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x14001A8D0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::_SearchForDevice(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes)
{
  void *ParentObject; // rdx
  FxObject *pParentObject; // [rsp+38h] [rbp+10h] BYREF

  pParentObject = 0LL;
  if ( !Attributes )
    return 0LL;
  ParentObject = Attributes->ParentObject;
  if ( !ParentObject )
    return 0LL;
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParentObject);
  return FxDeviceBase::_SearchForDevice(pParentObject, 0LL);
}
