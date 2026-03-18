/*
 * XREFs of ?ProcessSetOpacityFalloff@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETOPACITYFALLOFF@@@Z @ 0x18021B058
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z @ 0x18021B078 (-SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetOpacityFalloff(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_SETOPACITYFALLOFF *a3)
{
  CProjectedShadowScene::SetOpacityFalloff(this, *((float *)a3 + 2));
  return 0LL;
}
