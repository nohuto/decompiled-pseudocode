/*
 * XREFs of _CXvmPowerReferenceManager::CXvmPowerReferenceManager_::_1_::dtor$1 @ 0x18016A7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CXvmPowerReferenceManager::CXvmPowerReferenceManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 136LL));
}
