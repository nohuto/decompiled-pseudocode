/*
 * XREFs of ?reset@?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14008C0E0
 * Callers:
 *     ??$attach_to_smart_pointer@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@X@wil@@YAXAEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x14008C0C0 (--$attach_to_smart_pointer@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wis.c)
 *     ??1_NDIS_M_DRIVER_BLOCK@@QEAA@XZ @ 0x14009316C (--1_NDIS_M_DRIVER_BLOCK@@QEAA@XZ.c)
 *     ??4?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400931CC (--4-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@.c)
 *     NdisLWMRegisterMiniportDriver @ 0x140094F30 (NdisLWMRegisterMiniportDriver.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140139A28 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     NdisMRegisterWdiMiniportDriver @ 0x1401459A0 (NdisMRegisterWdiMiniportDriver.c)
 *     ?Initialize@NdisPoll@@QEAAJXZ @ 0x140146360 (-Initialize@NdisPoll@@QEAAJXZ.c)
 *     ??1DriverService@@QEAA@XZ @ 0x140148054 (--1DriverService@@QEAA@XZ.c)
 *     ??1KModule@@QEAA@XZ @ 0x140148080 (--1KModule@@QEAA@XZ.c)
 *     CreateKModule @ 0x14014810C (CreateKModule.c)
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x140148514 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 *     ndisMiniportQueryDeviceProperty @ 0x140167FF0 (ndisMiniportQueryDeviceProperty.c)
 *     ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x1401686F0 (-ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z.c)
 *     BuildServicePath @ 0x1401691D0 (BuildServicePath.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x14016ABE0 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset(void **a1, void *a2)
{
  void *v3; // rcx

  v3 = *a1;
  *a1 = a2;
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
