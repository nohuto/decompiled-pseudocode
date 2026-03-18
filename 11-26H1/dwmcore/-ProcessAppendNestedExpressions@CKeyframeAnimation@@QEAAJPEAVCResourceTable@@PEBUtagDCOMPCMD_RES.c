/*
 * XREFs of ?ProcessAppendNestedExpressions@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x18024980C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ProcessSetNestedExpressions@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x180279DDC (-ProcessSetNestedExpressions@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOUR.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessAppendNestedExpressions(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY *a3,
        const void *a4,
        unsigned int a5)
{
  return CKeyframeAnimation::ProcessSetNestedExpressions(this, a2, a3, a4, a5, 1);
}
