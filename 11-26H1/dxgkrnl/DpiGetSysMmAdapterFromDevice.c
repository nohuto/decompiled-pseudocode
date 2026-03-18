/*
 * XREFs of DpiGetSysMmAdapterFromDevice @ 0x1400407B4
 * Callers:
 *     DxgkMapMdlToIoMmuCB @ 0x14003EDD0 (DxgkMapMdlToIoMmuCB.c)
 *     DxgkAllocateContiguousMemoryCB @ 0x14003EE40 (DxgkAllocateContiguousMemoryCB.c)
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x14003EF60 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     DxgkOpenPhysicalMemoryObjectCB @ 0x14003F350 (DxgkOpenPhysicalMemoryObjectCB.c)
 *     DxgkFreePagesFromMdlCB @ 0x14003F390 (DxgkFreePagesFromMdlCB.c)
 *     DxgkAllocatePagesForMdlCB @ 0x14003FAD0 (DxgkAllocatePagesForMdlCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x14007CAB0 (DxgkUnmapMdlFromIoMmuCB.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DpiGetFdoFromDevice @ 0x14004083C (DpiGetFdoFromDevice.c)
 */

__int64 DpiGetSysMmAdapterFromDevice()
{
  __int64 FdoFromDevice; // rbx

  FdoFromDevice = DpiGetFdoFromDevice();
  if ( !FdoFromDevice )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5112;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FdoContext != nullptr", 5112LL, 0LL, 0LL, 0LL, 0LL);
  }
  return *(_QWORD *)(FdoFromDevice + 5824);
}
