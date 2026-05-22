/*
 * XREFs of ??_GInputForwardProcessor@@UEAAPEAXI@Z @ 0x1801AB910
 * Callers:
 *     ??_EInputForwardProcessor@@W7EAAPEAXI@Z @ 0x1801AB900 (--_EInputForwardProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1InputForwardProcessor@@UEAA@XZ @ 0x1801AB844 (--1InputForwardProcessor@@UEAA@XZ.c)
 */

InputForwardProcessor *__fastcall InputForwardProcessor::`scalar deleting destructor'(
        InputForwardProcessor *this,
        char a2)
{
  InputForwardProcessor::~InputForwardProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x60);
    else
      free(this);
  }
  return this;
}
