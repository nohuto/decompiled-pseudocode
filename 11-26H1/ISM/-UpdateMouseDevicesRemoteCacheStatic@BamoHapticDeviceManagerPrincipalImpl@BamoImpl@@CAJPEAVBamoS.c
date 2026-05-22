/*
 * XREFs of ?UpdateMouseDevicesRemoteCacheStatic@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180191D70
 * Callers:
 *     ?SetMouseDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180191790 (-SetMouseDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerPrin.c)
 * Callees:
 *     ?UpdateMouseDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180191C88 (-UpdateMouseDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubI.c)
 */

__int64 __fastcall BamoImpl::BamoHapticDeviceManagerPrincipalImpl::UpdateMouseDevicesRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoHapticDeviceManagerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoHapticDeviceManagerPrincipalImpl::UpdateMouseDevicesRemoteCache(this, a1);
  return 0LL;
}
