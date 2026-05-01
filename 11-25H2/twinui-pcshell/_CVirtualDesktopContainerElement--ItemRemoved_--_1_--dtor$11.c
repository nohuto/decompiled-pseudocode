/*
 * XREFs of _CVirtualDesktopContainerElement::ItemRemoved_::_1_::dtor$11 @ 0x1806C9A79
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CVirtualDesktopContainerElement::ItemRemoved_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 232) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 232) &= ~2u;
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a2 + 80));
  }
}
