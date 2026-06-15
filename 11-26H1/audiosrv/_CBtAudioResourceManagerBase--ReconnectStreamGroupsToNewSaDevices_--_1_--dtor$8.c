/*
 * XREFs of _CBtAudioResourceManagerBase::ReconnectStreamGroupsToNewSaDevices_::_1_::dtor$8 @ 0x180168CF9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtAudioResourceManagerBase::ReconnectStreamGroupsToNewSaDevices_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>(a2 + 224);
}
