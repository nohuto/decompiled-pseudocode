/*
 * XREFs of ??_GLightDismissProcessor@@EEAAPEAXI@Z @ 0x1801603C0
 * Callers:
 *     ??_ELightDismissProcessor@@G7EAAPEAXI@Z @ 0x1801603B0 (--_ELightDismissProcessor@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180076BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

LightDismissProcessor *__fastcall LightDismissProcessor::`scalar deleting destructor'(
        LightDismissProcessor *this,
        char a2)
{
  *(_QWORD *)this = &LightDismissProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x18);
    else
      free(this);
  }
  return this;
}
