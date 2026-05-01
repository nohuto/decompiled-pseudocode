/*
 * XREFs of _CApplicationManager::TerminateApplication_::_1_::dtor$6 @ 0x1806CFD43
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CApplicationManager::TerminateApplication_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 128) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 128) &= ~2u;
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a2 + 64));
  }
}
