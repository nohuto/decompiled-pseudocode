/*
 * XREFs of ??_EDockProcessor@@UEAAPEAXI@Z @ 0x1801BC7A0
 * Callers:
 *     ??_EDockProcessor@@WBA@EAAPEAXI@Z @ 0x1801BC790 (--_EDockProcessor@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DockProcessor@@UEAA@XZ @ 0x1801BC730 (--1DockProcessor@@UEAA@XZ.c)
 */

DockProcessor *__fastcall DockProcessor::`vector deleting destructor'(DockProcessor *this, char a2)
{
  DockProcessor::~DockProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x50);
    else
      free(this);
  }
  return this;
}
