/*
 * XREFs of DpiDoInterfaceDereferenceGpuP @ 0x14024F020
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x140092FB4 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 */

LONG_PTR __fastcall DpiDoInterfaceDereferenceGpuP(_DWORD *a1)
{
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  DpiGetVirtualGpuType(a1, &Object);
  return ObfDereferenceObject(Object);
}
