/*
 * XREFs of ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@$0A@@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@V21@1@Z @ 0x18026B7B4
 * Callers:
 *     ?ProcessSetExpressions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18026C254 (-ProcessSetExpressions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE.c)
 *     ?ProcessSetNestedExpressions@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x180279DDC (-ProcessSetNestedExpressions@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOUR.c)
 *     ?ProcessSetInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027C838 (-ProcessSetInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RES.c)
 * Callees:
 *     ??$_Insert_counted_range@PEAPEAVCBaseExpression@@@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@PEAPEAVCBaseExpression@@_K@Z @ 0x18019F4C4 (--$_Insert_counted_range@PEAPEAVCBaseExpression@@@-$vector@PEAVCBaseExpression@@V-$allocator@PEA.c)
 */

_QWORD *__fastcall std::vector<CBaseExpression *>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CBaseExpression *>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3,
        const void *a4,
        __int64 a5)
{
  __int64 v6; // rbx

  v6 = (__int64)&a3[-*a1] >> 3;
  std::vector<CBaseExpression *>::_Insert_counted_range<CBaseExpression * *>(
    (__int64)a1,
    a3,
    a4,
    (a5 - (__int64)a4) >> 3);
  *a2 = *a1 + 8 * v6;
  return a2;
}
