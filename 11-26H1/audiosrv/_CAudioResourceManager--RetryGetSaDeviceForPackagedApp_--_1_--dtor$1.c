/*
 * XREFs of _CAudioResourceManager::RetryGetSaDeviceForPackagedApp_::_1_::dtor$1 @ 0x180168171
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::RetryGetSaDeviceForPackagedApp_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(a2 + 96);
}
