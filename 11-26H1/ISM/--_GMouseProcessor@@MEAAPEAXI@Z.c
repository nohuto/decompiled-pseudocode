/*
 * XREFs of ??_GMouseProcessor@@MEAAPEAXI@Z @ 0x18019BB10
 * Callers:
 *     ??_EMouseProcessor@@OCI@EAAPEAXI@Z @ 0x18019BB00 (--_EMouseProcessor@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x18019BA18 (--1MouseProcessor@@MEAA@XZ.c)
 */

MouseProcessor *__fastcall MouseProcessor::`scalar deleting destructor'(MouseProcessor *this, char a2)
{
  MouseProcessor::~MouseProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x6C0);
    else
      free(this);
  }
  return this;
}
