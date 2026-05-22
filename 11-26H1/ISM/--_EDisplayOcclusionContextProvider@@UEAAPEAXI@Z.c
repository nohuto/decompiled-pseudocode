/*
 * XREFs of ??_EDisplayOcclusionContextProvider@@UEAAPEAXI@Z @ 0x1801A6270
 * Callers:
 *     ??_EDisplayOcclusionContextProvider@@W7EAAPEAXI@Z @ 0x1801A6260 (--_EDisplayOcclusionContextProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DisplayOcclusionContextProvider@@UEAA@XZ @ 0x1801A61EC (--1DisplayOcclusionContextProvider@@UEAA@XZ.c)
 */

DisplayOcclusionContextProvider *__fastcall DisplayOcclusionContextProvider::`vector deleting destructor'(
        DisplayOcclusionContextProvider *this,
        char a2)
{
  DisplayOcclusionContextProvider::~DisplayOcclusionContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x70);
    else
      free(this);
  }
  return this;
}
