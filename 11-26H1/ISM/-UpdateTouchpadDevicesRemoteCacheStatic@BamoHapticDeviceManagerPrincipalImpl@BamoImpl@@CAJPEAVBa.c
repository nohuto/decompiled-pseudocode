/*
 * XREFs of ?UpdateTouchpadDevicesRemoteCacheStatic@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180191F94
 * Callers:
 *     ?SetTouchpadDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180191960 (-SetTouchpadDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerP.c)
 * Callees:
 *     ?UpdateTouchpadDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180191EAC (-UpdateTouchpadDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoSt.c)
 */

__int64 __fastcall BamoImpl::BamoHapticDeviceManagerPrincipalImpl::UpdateTouchpadDevicesRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoHapticDeviceManagerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoHapticDeviceManagerPrincipalImpl::UpdateTouchpadDevicesRemoteCache(this, a1);
  return 0LL;
}
