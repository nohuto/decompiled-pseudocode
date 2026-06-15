/*
 * XREFs of ?FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x180101860
 * Callers:
 *     <none>
 * Callees:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x180042CC4 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindSaDeviceByResourceId(
        CDeviceGraphObjectsStore *this,
        __int64 a2,
        struct ISaDeviceProxy **a3)
{
  __int64 v4[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( !*((_BYTE *)this + 24) )
    return 2289827866LL;
  v4[1] = a2;
  v4[0] = (__int64)off_180177388;
  v4[7] = (__int64)v4;
  return CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, v4, (__int64 *)a3);
}
