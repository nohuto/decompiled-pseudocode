/*
 * XREFs of _CBtAudioResourceManagerBase::CreateExclusiveSaDeviceOnRenderEndpoint_::_1_::dtor$3 @ 0x180168948
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBtAudioResourceManagerBase::CreateExclusiveSaDeviceOnRenderEndpoint_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)(a2 + 144));
}
