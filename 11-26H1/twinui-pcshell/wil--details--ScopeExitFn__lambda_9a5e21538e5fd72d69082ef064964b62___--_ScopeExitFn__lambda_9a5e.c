/*
 * XREFs of wil::details::ScopeExitFn__lambda_9a5e21538e5fd72d69082ef064964b62___::_ScopeExitFn__lambda_9a5e21538e5fd72d69082ef064964b62___ @ 0x180528108
 * Callers:
 *     _WindowArrangementView::InitDropFeedback_::_1_::dtor$1 @ 0x1806F383F (_WindowArrangementView--InitDropFeedback_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_9a5e21538e5fd72d69082ef064964b62___::_ScopeExitFn__lambda_9a5e21538e5fd72d69082ef064964b62___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    IUnknown_SetSite(**(IUnknown ***)a1, 0LL);
    return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*(_QWORD *)(a1 + 8) + 72LL));
  }
  return result;
}
