/*
 * XREFs of wil::details::ScopeExitFn__lambda_d65be3a54a2a7ba55b2069111aeb5b07___::_ScopeExitFn__lambda_d65be3a54a2a7ba55b2069111aeb5b07___ @ 0x18051ECEC
 * Callers:
 *     _TabletModeViewManager::CreateWindowArrangementViewForDrag_::_1_::dtor$1 @ 0x1806F36FB (_TabletModeViewManager--CreateWindowArrangementViewForDrag_--_1_--dtor$1.c)
 *     _AppResizeView::InitDropFeedback_::_1_::dtor$1 @ 0x1806F38E1 (_AppResizeView--InitDropFeedback_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::ScopeExitFn__lambda_d65be3a54a2a7ba55b2069111aeb5b07___::_ScopeExitFn__lambda_d65be3a54a2a7ba55b2069111aeb5b07___(
        __int64 a1)
{
  HRESULT result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return IUnknown_SetSite(**(IUnknown ***)a1, 0LL);
  }
  return result;
}
