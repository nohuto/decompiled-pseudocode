/*
 * XREFs of ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140062690
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpQueryCapabilities@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1400626A8 (-PnpQueryCapabilities@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgFdo::_PnpQueryCapabilities(FxPkgFdo *This, FxIrp *Irp)
{
  return FxPkgFdo::PnpQueryCapabilities(This, Irp);
}
