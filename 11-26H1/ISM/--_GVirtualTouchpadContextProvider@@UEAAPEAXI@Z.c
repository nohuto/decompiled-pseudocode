/*
 * XREFs of ??_GVirtualTouchpadContextProvider@@UEAAPEAXI@Z @ 0x1801A56B0
 * Callers:
 *     ??_EVirtualTouchpadContextProvider@@W7EAAPEAXI@Z @ 0x1801A56A0 (--_EVirtualTouchpadContextProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1VirtualTouchpadContextProvider@@UEAA@XZ @ 0x1801A5620 (--1VirtualTouchpadContextProvider@@UEAA@XZ.c)
 */

VirtualTouchpadContextProvider *__fastcall VirtualTouchpadContextProvider::`scalar deleting destructor'(
        VirtualTouchpadContextProvider *this,
        char a2)
{
  VirtualTouchpadContextProvider::~VirtualTouchpadContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x98);
    else
      free(this);
  }
  return this;
}
