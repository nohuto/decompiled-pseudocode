/*
 * XREFs of ?ProcessAppendConditions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x1802497A0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ProcessSetConditions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18026C104 (-ProcessSetConditions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_.c)
 */

__int64 __fastcall CConditionalExpression::ProcessAppendConditions(
        CConditionalExpression *this,
        struct CResourceTable *a2,
        const struct tagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY *a3,
        const void *a4,
        unsigned int a5)
{
  return CConditionalExpression::ProcessSetConditions(this, a2, a3, a4, a5, 1);
}
