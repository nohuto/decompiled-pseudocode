/*
 * XREFs of ??4?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026B88C
 * Callers:
 *     ?ProcessSetExpressions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18026C254 (-ProcessSetExpressions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE.c)
 *     ?ProcessSetNestedExpressions@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x180279DDC (-ProcessSetNestedExpressions@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOUR.c)
 *     ?ProcessSetInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027C838 (-ProcessSetInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RES.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ @ 0x180024CE4 (-_Tidy@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ.c)
 */

_QWORD *__fastcall std::vector<CBaseExpression *>::operator=(_QWORD *a1, _QWORD *a2)
{
  if ( a1 != a2 )
  {
    std::vector<CLight *>::_Tidy((__int64)a1);
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  return a1;
}
