/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAXM@Z @ 0x18013B264
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x18013A09C (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18013A480 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult.c)
 * Callees:
 *     ?resize@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18010C430 (-resize@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expa.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExpressionValueStack::PushConstant(CExpressionValueStack *this, float a2, __int64 a3, const char *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

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
      (__int64)this,
      (unsigned int)(v5 + 5));
  }
  v6 = *((unsigned int *)this + 24);
  *((_DWORD *)this + 24) = v6 + 1;
  v7 = 9 * v6;
  v8 = *(_QWORD *)this;
  if ( *(_DWORD *)(v8 + 72 * v6 + 64) == 11 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 72 * v6) + 16LL))(*(_QWORD *)(v8 + 72 * v6));
  *(float *)(v8 + 8 * v7) = a2;
  *(_DWORD *)(v8 + 8 * v7 + 64) = 18;
}
