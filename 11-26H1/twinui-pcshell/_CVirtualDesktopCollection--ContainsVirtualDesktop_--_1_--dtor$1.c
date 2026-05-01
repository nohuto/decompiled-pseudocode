/*
 * XREFs of _CVirtualDesktopCollection::ContainsVirtualDesktop_::_1_::dtor$1 @ 0x1806F3FDC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CVirtualDesktopCollection::ContainsVirtualDesktop_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a2 + 32));
  }
}
