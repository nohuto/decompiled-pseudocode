/*
 * XREFs of ?ProcessAppendInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x1802497E8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ProcessSetInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027C838 (-ProcessSetInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RES.c)
 */

__int64 __fastcall CBaseExpression::ProcessAppendInitialValueExpressions(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY *a3,
        const void *a4,
        unsigned int a5)
{
  return CBaseExpression::ProcessSetInitialValueExpressions(this, a2, a3, a4, a5, 1);
}
