/*
 * XREFs of ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x180211BC4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180211BF8 (-SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessForceLowColor(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_FORCELOWCOLOR *a3)
{
  CVisual::SetColorSpace(this, (enum DXGI_COLOR_SPACE_TYPE)(*((_BYTE *)a3 + 8) == 0));
  CVisual::PropagateFlags((__int64)this, 4u);
  return 0LL;
}
