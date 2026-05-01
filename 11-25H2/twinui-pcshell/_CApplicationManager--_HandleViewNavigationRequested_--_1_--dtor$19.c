/*
 * XREFs of _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$19 @ 0x1806A862A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor_19(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 216) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 216) &= ~8u;
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a2 + 112));
  }
}
