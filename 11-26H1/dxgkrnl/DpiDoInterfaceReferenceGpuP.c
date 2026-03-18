/*
 * XREFs of DpiDoInterfaceReferenceGpuP @ 0x14024F080
 * Callers:
 *     DpiFdoHandleQueryFlexibleIovInterface @ 0x14024F0C0 (DpiFdoHandleQueryFlexibleIovInterface.c)
 *     DpiFdoHandleQueryPartitioningDeviceInterface @ 0x14024F2F0 (DpiFdoHandleQueryPartitioningDeviceInterface.c)
 *     DpiFdoHandleQuerySrIovInterface @ 0x14024F480 (DpiFdoHandleQuerySrIovInterface.c)
 * Callees:
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x140092FB4 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 */

LONG_PTR __fastcall DpiDoInterfaceReferenceGpuP(_DWORD *a1)
{
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  DpiGetVirtualGpuType(a1, &Object);
  return ObfReferenceObject(Object);
}
