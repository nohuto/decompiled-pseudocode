/*
 * XREFs of _CShellSnapComponent::PerformDelayedInitialization_::_1_::dtor$34 @ 0x1806D3108
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CShellSnapComponent::PerformDelayedInitialization_::_1_::dtor_34(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 352) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 352) &= ~0x10u;
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)(a2 + 64));
  }
}
