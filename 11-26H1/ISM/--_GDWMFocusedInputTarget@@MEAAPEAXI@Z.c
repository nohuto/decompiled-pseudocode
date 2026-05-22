/*
 * XREFs of ??_GDWMFocusedInputTarget@@MEAAPEAXI@Z @ 0x18006F9E8
 * Callers:
 *     ??_EDWMFocusedInputTarget@@OCI@EAAPEAXI@Z @ 0x1801A4720 (--_EDWMFocusedInputTarget@@OCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1DWMFocusedInputTarget@@MEAA@XZ @ 0x18006FA38 (--1DWMFocusedInputTarget@@MEAA@XZ.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

DWMFocusedInputTarget *__fastcall DWMFocusedInputTarget::`scalar deleting destructor'(
        DWMFocusedInputTarget *this,
        char a2)
{
  DWMFocusedInputTarget::~DWMFocusedInputTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x58);
    else
      free(this);
  }
  return this;
}
