/*
 * XREFs of _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$6 @ 0x180168D2F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)(a2 + 272));
}
