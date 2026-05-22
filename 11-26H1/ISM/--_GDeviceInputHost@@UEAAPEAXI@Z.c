/*
 * XREFs of ??_GDeviceInputHost@@UEAAPEAXI@Z @ 0x1800A20A0
 * Callers:
 *     ??_EDeviceInputHost@@W7EAAPEAXI@Z @ 0x1800A2090 (--_EDeviceInputHost@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DeviceInputHost@@UEAA@XZ @ 0x1800A1FFC (--1DeviceInputHost@@UEAA@XZ.c)
 */

DeviceInputHost *__fastcall DeviceInputHost::`scalar deleting destructor'(DeviceInputHost *this, char a2)
{
  DeviceInputHost::~DeviceInputHost(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x48);
    else
      free(this);
  }
  return this;
}
