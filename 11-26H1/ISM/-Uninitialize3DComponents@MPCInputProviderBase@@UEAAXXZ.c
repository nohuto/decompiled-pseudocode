/*
 * XREFs of ?Uninitialize3DComponents@MPCInputProviderBase@@UEAAXXZ @ 0x1800C5FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x1800C4D50 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 */

void __fastcall MPCInputProviderBase::Uninitialize3DComponents(MPCInputProviderBase *this)
{
  MPCInputProviderBase::ClearInputTargets((MPCInputProviderBase *)((char *)this - 24));
  *((_BYTE *)this + 3547) = 0;
}
