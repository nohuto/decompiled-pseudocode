/*
 * XREFs of ?PushStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@XZ @ 0x18010B120
 * Callers:
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAXAEBUD2DMatrix@@@Z @ 0x1801098BC (-PushConstant@CExpressionValueStack@@QEAAXAEBUD2DMatrix@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180109910 (-PushConstant@CExpressionValueStack@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x18010A690 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAX_N@Z @ 0x18010B024 (-PushConstant@CExpressionValueStack@@QEAAX_N@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAXAEBUD2DVector4@@@Z @ 0x18010B060 (-PushConstant@CExpressionValueStack@@QEAAXAEBUD2DVector4@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAXAEBUD2DQuaternion@@@Z @ 0x18010B0A0 (-PushConstant@CExpressionValueStack@@QEAAXAEBUD2DQuaternion@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x18010B0E0 (-PushConstant@CExpressionValueStack@@QEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAXAEBUD2DVector3@@@Z @ 0x18010B314 (-PushConstant@CExpressionValueStack@@QEAAXAEBUD2DVector3@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAXAEBUD2DVector2@@@Z @ 0x1801D8074 (-PushConstant@CExpressionValueStack@@QEAAXAEBUD2DVector2@@@Z.c)
 *     ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18026FAB0 (-CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@PEAUCalculateValueRes.c)
 * Callees:
 *     ?resize@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18010C430 (-resize@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expa.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct CExpressionValue *__fastcall CExpressionValueStack::PushStackValue(
        CExpressionValueStack *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((unsigned int *)this + 24);
  if ( v5 == 0x8E38E38E38E38E39uLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3) )
  {
    if ( (unsigned int)~(_DWORD)v5 < 5 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x44,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
        a4);
    detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::resize(
      this,
      (unsigned int)(v5 + 5));
  }
  v6 = *((unsigned int *)this + 24);
  *((_DWORD *)this + 24) = v6 + 1;
  return (struct CExpressionValue *)(*(_QWORD *)this + 72 * v6);
}
