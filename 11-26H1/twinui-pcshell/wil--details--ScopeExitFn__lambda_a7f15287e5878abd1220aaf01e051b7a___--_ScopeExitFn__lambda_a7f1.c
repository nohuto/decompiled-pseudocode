/*
 * XREFs of wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___ @ 0x18021E484
 * Callers:
 *     _CSingleViewShellExperience::Hide_::_1_::dtor$0 @ 0x1806CCE32 (_CSingleViewShellExperience--Hide_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_a7f15287e5878abd1220aaf01e051b7a_::operator() @ 0x18001FB18 (_lambda_a7f15287e5878abd1220aaf01e051b7a_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    lambda_a7f15287e5878abd1220aaf01e051b7a_::operator()((CSingleViewShellExperience **)a1);
  }
}
