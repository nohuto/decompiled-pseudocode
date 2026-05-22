/*
 * XREFs of ??_GConsumerControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800DA9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1ConsumerControlDeviceCollection@@UEAA@XZ @ 0x1800DA964 (--1ConsumerControlDeviceCollection@@UEAA@XZ.c)
 */

ConsumerControlDeviceCollection *__fastcall ConsumerControlDeviceCollection::`scalar deleting destructor'(
        ConsumerControlDeviceCollection *this,
        char a2)
{
  ConsumerControlDeviceCollection::~ConsumerControlDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xB08);
    else
      free(this);
  }
  return this;
}
