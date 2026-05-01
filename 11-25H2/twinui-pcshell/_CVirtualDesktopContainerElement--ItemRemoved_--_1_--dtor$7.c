/*
 * XREFs of _CVirtualDesktopContainerElement::ItemRemoved_::_1_::dtor$7 @ 0x1806C9A31
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CVirtualDesktopContainerElement::ItemRemoved_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 232) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 232) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a2 + 208));
  }
}
