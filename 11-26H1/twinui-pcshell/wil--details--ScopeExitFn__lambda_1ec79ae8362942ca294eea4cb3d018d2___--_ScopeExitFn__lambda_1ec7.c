/*
 * XREFs of wil::details::ScopeExitFn__lambda_1ec79ae8362942ca294eea4cb3d018d2___::_ScopeExitFn__lambda_1ec79ae8362942ca294eea4cb3d018d2___ @ 0x18052FC08
 * Callers:
 *     _TabletModeCoverWindow::CreateDesktopThumbnail_::_1_::dtor$0 @ 0x1806F3917 (_TabletModeCoverWindow--CreateDesktopThumbnail_--_1_--dtor$0.c)
 * Callees:
 *     ?DestroyDesktopThumbnail@TabletModeCoverWindow@@AEAAXXZ @ 0x1802AF974 (-DestroyDesktopThumbnail@TabletModeCoverWindow@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_1ec79ae8362942ca294eea4cb3d018d2___::_ScopeExitFn__lambda_1ec79ae8362942ca294eea4cb3d018d2___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    TabletModeCoverWindow::DestroyDesktopThumbnail(*(TabletModeCoverWindow **)a1);
  }
}
