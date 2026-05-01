/*
 * XREFs of _VirtualDesktopGestureWindow::AddThumbnailToThumbnailCollection_::_1_::dtor$1 @ 0x1806CBFB3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall VirtualDesktopGestureWindow::AddThumbnailToThumbnailCollection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 88) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 88) &= ~2u;
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a2 + 32));
  }
}
