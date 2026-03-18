/*
 * XREFs of ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x14003F6B0
 * Callers:
 *     DxgkDestroyPhysicalMemoryObjectCB @ 0x14003F1D0 (DxgkDestroyPhysicalMemoryObjectCB.c)
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x14003F220 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 *     DxgkFreePagesFromMdlCB @ 0x14003F390 (DxgkFreePagesFromMdlCB.c)
 *     SmmClosePhysicalObject @ 0x14003F43C (SmmClosePhysicalObject.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x14007CAB0 (DxgkUnmapMdlFromIoMmuCB.c)
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1403D7D20 (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z.c)
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1403F6678 (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 * Callees:
 *     SmmDestroyPhysicalObject @ 0x14003F6D4 (SmmDestroyPhysicalObject.c)
 */

void __fastcall SysMmUnreferencePhysicalObject(struct SYSMM_PHYSICAL_OBJECT *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 10, 0xFFFFFFFF) == 1 )
    SmmDestroyPhysicalObject(a1);
}
