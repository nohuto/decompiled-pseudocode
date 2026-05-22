/*
 * XREFs of ??_GInputStateManager@@MEAAPEAXI@Z @ 0x1800CCC20
 * Callers:
 *     ??_EInputStateManager@@OBI@EAAPEAXI@Z @ 0x1800CCC10 (--_EInputStateManager@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1InputStateManager@@MEAA@XZ @ 0x1800CC9AC (--1InputStateManager@@MEAA@XZ.c)
 */

InputStateManager *__fastcall InputStateManager::`scalar deleting destructor'(
        InputStateManager *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // di

  v4 = a2;
  InputStateManager::~InputStateManager(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xD0);
    else
      free(this);
  }
  return this;
}
