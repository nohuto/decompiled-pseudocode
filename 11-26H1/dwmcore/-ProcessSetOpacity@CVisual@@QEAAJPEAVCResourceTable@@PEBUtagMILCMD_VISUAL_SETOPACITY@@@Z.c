/*
 * XREFs of ?ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z @ 0x180110F80
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180110FA0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetOpacity(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETOPACITY *a3)
{
  CVisual::SetOpacity(this, *((float *)a3 + 2));
  return 0LL;
}
