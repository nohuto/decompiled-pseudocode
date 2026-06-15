/*
 * XREFs of _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$3 @ 0x180169C66
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 80LL));
}
