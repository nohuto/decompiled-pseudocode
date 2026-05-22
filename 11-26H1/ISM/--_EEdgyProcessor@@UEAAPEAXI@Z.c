/*
 * XREFs of ??_EEdgyProcessor@@UEAAPEAXI@Z @ 0x180156B00
 * Callers:
 *     ??_EEdgyProcessor@@W7EAAPEAXI@Z @ 0x180156AF0 (--_EEdgyProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1EdgyProcessor@@UEAA@XZ @ 0x180156A24 (--1EdgyProcessor@@UEAA@XZ.c)
 */

EdgyProcessor *__fastcall EdgyProcessor::`vector deleting destructor'(EdgyProcessor *this, char a2)
{
  EdgyProcessor::~EdgyProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x228);
    else
      free(this);
  }
  return this;
}
