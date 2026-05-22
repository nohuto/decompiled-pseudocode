/*
 * XREFs of ??_EGameInputProcessor@@UEAAPEAXI@Z @ 0x1801B15D0
 * Callers:
 *     ??_EGameInputProcessor@@W7EAAPEAXI@Z @ 0x1801B15C0 (--_EGameInputProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1GameInputProcessor@@UEAA@XZ @ 0x1801B1504 (--1GameInputProcessor@@UEAA@XZ.c)
 */

GameInputProcessor *__fastcall GameInputProcessor::`vector deleting destructor'(GameInputProcessor *this, char a2)
{
  GameInputProcessor::~GameInputProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xC8);
    else
      free(this);
  }
  return this;
}
