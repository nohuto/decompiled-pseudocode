/*
 * XREFs of ??_GComboButtonProcessor@@UEAAPEAXI@Z @ 0x1801A9440
 * Callers:
 *     ??_EComboButtonProcessor@@W7EAAPEAXI@Z @ 0x1801A9430 (--_EComboButtonProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1ComboButtonProcessor@@UEAA@XZ @ 0x1801A93EC (--1ComboButtonProcessor@@UEAA@XZ.c)
 */

ComboButtonProcessor *__fastcall ComboButtonProcessor::`scalar deleting destructor'(
        ComboButtonProcessor *this,
        char a2)
{
  ComboButtonProcessor::~ComboButtonProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x170);
    else
      free(this);
  }
  return this;
}
