/*
 * XREFs of _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$7 @ 0x180164EBD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SaDeviceParams *__fastcall CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>((SaDeviceParams **)(a2 + 120));
}
