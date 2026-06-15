/*
 * XREFs of _CBtAudioResourceManagerBase::GetSaDeviceForOffloadStream_::_1_::dtor$1 @ 0x180168BD6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtAudioResourceManagerBase::GetSaDeviceForOffloadStream_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>(a2 + 112);
}
