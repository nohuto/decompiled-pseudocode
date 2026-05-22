/*
 * XREFs of ??_ERawButtonProcessor@@UEAAPEAXI@Z @ 0x1801B6FE0
 * Callers:
 *     ??_ERawButtonProcessor@@W7EAAPEAXI@Z @ 0x1801B6FD0 (--_ERawButtonProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1RawButtonProcessor@@UEAA@XZ @ 0x1801B6F88 (--1RawButtonProcessor@@UEAA@XZ.c)
 */

RawButtonProcessor *__fastcall RawButtonProcessor::`vector deleting destructor'(RawButtonProcessor *this, char a2)
{
  RawButtonProcessor::~RawButtonProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x1A0);
    else
      free(this);
  }
  return this;
}
