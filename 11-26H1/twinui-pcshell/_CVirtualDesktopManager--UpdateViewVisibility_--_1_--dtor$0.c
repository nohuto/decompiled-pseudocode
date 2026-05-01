/*
 * XREFs of _CVirtualDesktopManager::UpdateViewVisibility_::_1_::dtor$0 @ 0x1806D508B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::UpdateViewVisibility_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>(*(_QWORD **)(a2 + 96));
}
