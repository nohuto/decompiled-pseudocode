/*
 * XREFs of ?ProcessAppendCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x180249758
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ProcessSetCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027E32C (-ProcessSetCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETC.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessAppendCasters(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY *a3,
        const void *a4,
        unsigned int a5)
{
  return CProjectedShadowScene::ProcessSetCasters(this, a2, a3, a4, a5, 1);
}
