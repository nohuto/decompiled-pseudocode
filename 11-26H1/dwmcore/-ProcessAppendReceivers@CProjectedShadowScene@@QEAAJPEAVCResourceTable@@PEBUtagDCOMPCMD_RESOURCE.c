/*
 * XREFs of ?ProcessAppendReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x180249830
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ProcessSetReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027E458 (-ProcessSetReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SE.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessAppendReceivers(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY *a3,
        const void *a4,
        unsigned int a5)
{
  return CProjectedShadowScene::ProcessSetReceivers(this, a2, a3, a4, a5, 1);
}
