/*
 * XREFs of _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$6 @ 0x1801681A7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>(a2 + 208);
}
