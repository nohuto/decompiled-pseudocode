/*
 * XREFs of ?QueryInterface@FxObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x140061B40
 * Callers:
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x140041FC8 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?QueryInterface@FxIoTargetRemote@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x140061A80 (-QueryInterface@FxIoTargetRemote@@MEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxFileObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x140061AC0 (-QueryInterface@FxFileObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxDriver@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x140061B10 (-QueryInterface@FxDriver@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 *     ?QueryInterface@FxSystemWorkItem@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x140096290 (-QueryInterface@FxSystemWorkItem@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxObject::QueryInterface(FxObject *this, FxQueryInterfaceParams *Params)
{
  if ( Params->Type != 4096 )
    return 3221226169LL;
  *Params->Object = this;
  return 0LL;
}
