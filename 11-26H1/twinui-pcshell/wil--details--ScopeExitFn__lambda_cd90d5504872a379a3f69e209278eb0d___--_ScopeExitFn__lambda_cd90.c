/*
 * XREFs of wil::details::ScopeExitFn__lambda_cd90d5504872a379a3f69e209278eb0d___::_ScopeExitFn__lambda_cd90d5504872a379a3f69e209278eb0d___ @ 0x1804A2D6C
 * Callers:
 *     _CAppThumbnailWindow::Close_::_1_::dtor$0 @ 0x1806F098F (_CAppThumbnailWindow--Close_--_1_--dtor$0.c)
 * Callees:
 *     ?Uninitialize@CAppThumbnailWindow@@IEAAXXZ @ 0x1804A9DE8 (-Uninitialize@CAppThumbnailWindow@@IEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_cd90d5504872a379a3f69e209278eb0d___::_ScopeExitFn__lambda_cd90d5504872a379a3f69e209278eb0d___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CAppThumbnailWindow::Uninitialize(*(CAppThumbnailWindow **)a1);
  }
}
