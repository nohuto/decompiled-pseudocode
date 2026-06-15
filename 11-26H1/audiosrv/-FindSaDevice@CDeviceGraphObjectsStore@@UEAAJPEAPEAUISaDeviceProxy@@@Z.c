/*
 * XREFs of ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180101820
 * Callers:
 *     <none>
 * Callees:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x180042CC4 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindSaDevice(CDeviceGraphObjectsStore *this, struct ISaDeviceProxy **a2)
{
  __int64 v3[9]; // [rsp+20h] [rbp-48h] BYREF

  v3[0] = (__int64)off_1801773E8;
  v3[7] = (__int64)v3;
  return CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, v3, (__int64 *)a2);
}
