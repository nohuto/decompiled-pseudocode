/*
 * XREFs of ?ProcessSetAutomaticBoundsExpansion@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION@@@Z @ 0x1801D7374
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLayerVisual::ProcessSetAutomaticBoundsExpansion(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LAYERVISUAL_SETAUTOMATICBOUNDSEXPANSION *a3)
{
  *((_BYTE *)this + 696) = *((_DWORD *)a3 + 2) != 0;
  return 0LL;
}
