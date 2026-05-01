/*
 * XREFs of wil::details::ScopeExitFn__lambda_f1fc60c32b66e0ca43838d8f5435288d___::_ScopeExitFn__lambda_f1fc60c32b66e0ca43838d8f5435288d___ @ 0x180505D2C
 * Callers:
 *     _WindowArrangementView::InitDragVisual_::_1_::dtor$1 @ 0x1806CB2C4 (_WindowArrangementView--InitDragVisual_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

HRESULT __fastcall wil::details::ScopeExitFn__lambda_f1fc60c32b66e0ca43838d8f5435288d___::_ScopeExitFn__lambda_f1fc60c32b66e0ca43838d8f5435288d___(
        _BYTE *a1)
{
  HRESULT result; // eax

  if ( a1[8] )
  {
    a1[8] = 0;
    (*(void (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)a1 + 32LL))(**(_QWORD **)a1, 4LL);
    return IUnknown_SetSite(**(IUnknown ***)a1, 0LL);
  }
  return result;
}
