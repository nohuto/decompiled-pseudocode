/*
 * XREFs of ??_ELampArrayDevice@@UEAAPEAXI@Z @ 0x1800E6890
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1LampArrayDevice@@UEAA@XZ @ 0x1800E6738 (--1LampArrayDevice@@UEAA@XZ.c)
 */

LampArrayDevice *__fastcall LampArrayDevice::`vector deleting destructor'(LampArrayDevice *this, char a2)
{
  LampArrayDevice::~LampArrayDevice(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xE8);
    else
      free(this);
  }
  return this;
}
