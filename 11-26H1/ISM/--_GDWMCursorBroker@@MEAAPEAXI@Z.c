/*
 * XREFs of ??_GDWMCursorBroker@@MEAAPEAXI@Z @ 0x1801CBAB0
 * Callers:
 *     ??_EDWMCursorBroker@@OBI@EAAPEAXI@Z @ 0x1801CBAA0 (--_EDWMCursorBroker@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DWMCursorBroker@@MEAA@XZ @ 0x1801CB8FC (--1DWMCursorBroker@@MEAA@XZ.c)
 */

DWMCursorBroker *__fastcall DWMCursorBroker::`scalar deleting destructor'(DWMCursorBroker *this, char a2)
{
  DWMCursorBroker::~DWMCursorBroker(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x200);
    else
      free(this);
  }
  return this;
}
