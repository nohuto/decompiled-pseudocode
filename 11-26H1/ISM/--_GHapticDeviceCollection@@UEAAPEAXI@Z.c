/*
 * XREFs of ??_GHapticDeviceCollection@@UEAAPEAXI@Z @ 0x1800DF350
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800DF858 (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

HapticDeviceCollection *__fastcall HapticDeviceCollection::`scalar deleting destructor'(
        HapticDeviceCollection *this,
        char a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &HapticDeviceCollection::`vftable';
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xAC8);
    else
      free(this);
  }
  return this;
}
