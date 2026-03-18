/*
 * XREFs of ?SetOutputToCurrentTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAXXZ @ 0x180017FD8
 * Callers:
 *     std::_Func_impl_no_alloc__CBlurRenderingGraphBuilder::Build_::_2_::_lambda_2__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x180017FA0 (std--_Func_impl_no_alloc__CBlurRenderingGraphBuilder--Build_--_2_--_lambda_2__long_CExternalEffe.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExternalEffectGraph::CGraphRenderingContext::SetOutputToCurrentTarget(
        CExternalEffectGraph::CGraphRenderingContext *this)
{
  __int64 *v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx

  v2 = (__int64 *)*((_QWORD *)this + 3);
  v3 = *((_QWORD *)this + 6);
  v4 = 112LL * *((unsigned int *)this + 9);
  v5 = *v2;
  v6 = *(_QWORD *)(v4 + v3);
  *v2 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v7 = *(_QWORD *)(v4 + v3 + 8);
  v8 = v2[1];
  v2[1] = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *((_BYTE *)v2 + 16) = *(_BYTE *)(v4 + v3 + 16);
  *(_DWORD *)(*((_QWORD *)this + 3) + 40LL) |= *(_DWORD *)(v4 + v3 + 40);
  *(_OWORD *)(*((_QWORD *)this + 3) + 84LL) = *(_OWORD *)(v4 + v3 + 84);
}
