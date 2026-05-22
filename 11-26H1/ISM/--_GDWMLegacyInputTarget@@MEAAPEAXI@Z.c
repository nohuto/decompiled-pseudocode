/*
 * XREFs of ??_GDWMLegacyInputTarget@@MEAAPEAXI@Z @ 0x18006A8F4
 * Callers:
 *     ??_EDWMLegacyInputTarget@@OCA@EAAPEAXI@Z @ 0x1801A4CC0 (--_EDWMLegacyInputTarget@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1DWMLegacyInputTarget@@MEAA@XZ @ 0x18006A944 (--1DWMLegacyInputTarget@@MEAA@XZ.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

DWMLegacyInputTarget *__fastcall DWMLegacyInputTarget::`scalar deleting destructor'(
        DWMLegacyInputTarget *this,
        char a2)
{
  DWMLegacyInputTarget::~DWMLegacyInputTarget(this);
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
