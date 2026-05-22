/*
 * XREFs of ??_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z @ 0x1800D2620
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1AugmentedInputDeviceCollection@@UEAA@XZ @ 0x1800D25E4 (--1AugmentedInputDeviceCollection@@UEAA@XZ.c)
 */

void **__fastcall AugmentedInputDeviceCollection::`scalar deleting destructor'(void **this, char a2)
{
  AugmentedInputDeviceCollection::~AugmentedInputDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        (BamoImpl::BamoMPCConstantManagerClientProxyImpl *)this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xAE0);
    else
      free(this);
  }
  return this;
}
