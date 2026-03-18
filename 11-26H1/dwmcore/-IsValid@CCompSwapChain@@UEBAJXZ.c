/*
 * XREFs of ?IsValid@CCompSwapChain@@UEBAJXZ @ 0x180255CF0
 * Callers:
 *     ?SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z @ 0x1802063B4 (-SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180255B18 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompSwapChain::IsValid(CCompSwapChain *this)
{
  if ( *((_QWORD *)this + 10) )
    return *(_DWORD *)(*((_QWORD *)this + 7) + 1124LL) != 0 ? 0x8898008D : 0;
  else
    return 2291662989LL;
}
