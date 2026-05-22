/*
 * XREFs of ??_EPenDeviceCollection@@UEAAPEAXI@Z @ 0x1800DEFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800DF858 (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

PenDeviceCollection *__fastcall PenDeviceCollection::`vector deleting destructor'(PenDeviceCollection *this, char a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &PenDeviceCollection::`vftable';
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
