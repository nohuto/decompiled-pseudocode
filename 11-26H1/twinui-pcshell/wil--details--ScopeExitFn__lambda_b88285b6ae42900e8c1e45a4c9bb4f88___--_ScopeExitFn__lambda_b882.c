/*
 * XREFs of wil::details::ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___::_ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___ @ 0x1805519FC
 * Callers:
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805545A0 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     _CVirtualDesktopManager::RemoveDesktopInternal_::_1_::dtor$2 @ 0x1806F40A2 (_CVirtualDesktopManager--RemoveDesktopInternal_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_b88285b6ae42900e8c1e45a4c9bb4f88_::operator() @ 0x180552128 (_lambda_b88285b6ae42900e8c1e45a4c9bb4f88_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___::_ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_b88285b6ae42900e8c1e45a4c9bb4f88_::operator()();
  }
  return result;
}
