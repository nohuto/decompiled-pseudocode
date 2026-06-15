/*
 * XREFs of _CAudioResourceManager::CreateStream_::_1_::dtor$0 @ 0x180167D29
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::CreateStream_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>(a2 + 544);
}
