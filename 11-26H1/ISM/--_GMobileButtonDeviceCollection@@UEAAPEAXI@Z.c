/*
 * XREFs of ??_GMobileButtonDeviceCollection@@UEAAPEAXI@Z @ 0x1800D96E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800D9658 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 */

MobileButtonDeviceCollection *__fastcall MobileButtonDeviceCollection::`scalar deleting destructor'(
        MobileButtonDeviceCollection *this,
        char a2)
{
  MobileButtonDeviceCollection::~MobileButtonDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xB50);
    else
      free(this);
  }
  return this;
}
