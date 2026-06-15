/*
 * XREFs of _SetNotificationData_::_1_::dtor$0 @ 0x18004C864
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetNotificationData_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>(a2 + 80);
}
