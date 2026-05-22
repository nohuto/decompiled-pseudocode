/*
 * XREFs of ??_EKeyboardModifierState@@EEAAPEAXI@Z @ 0x18019D140
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1KeyboardModifierState@@EEAA@XZ @ 0x18019D0EC (--1KeyboardModifierState@@EEAA@XZ.c)
 */

KeyboardModifierState *__fastcall KeyboardModifierState::`vector deleting destructor'(
        KeyboardModifierState *this,
        char a2)
{
  KeyboardModifierState::~KeyboardModifierState(this);
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
