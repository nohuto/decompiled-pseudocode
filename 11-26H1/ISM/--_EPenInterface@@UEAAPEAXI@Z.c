/*
 * XREFs of ??_EPenInterface@@UEAAPEAXI@Z @ 0x180193EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1PenInterface@@UEAA@XZ @ 0x180193E58 (--1PenInterface@@UEAA@XZ.c)
 */

PenInterface *__fastcall PenInterface::`vector deleting destructor'(PenInterface *this, char a2)
{
  PenInterface::~PenInterface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xA8);
    else
      free(this);
  }
  return this;
}
