/*
 * XREFs of DxgkUnmapMdlFromIoMmuCB @ 0x14007CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x14003F3C4 (-SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x14003F6B0 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     DpiGetSysMmAdapterFromDevice @ 0x1400407B4 (DpiGetSysMmAdapterFromDevice.c)
 */

void __fastcall DxgkUnmapMdlFromIoMmuCB(__int64 a1, struct SYSMM_ADAPTER ***a2)
{
  struct SYSMM_ADAPTER *SysMmAdapterFromDevice; // rax
  struct SYSMM_ADAPTER **v4; // rbx

  SysMmAdapterFromDevice = (struct SYSMM_ADAPTER *)DpiGetSysMmAdapterFromDevice();
  v4 = *a2;
  SysMmClosePhysicalObjectByAdapter(v4, SysMmAdapterFromDevice);
  SysMmUnreferencePhysicalObject((struct SYSMM_PHYSICAL_OBJECT *)v4);
}
