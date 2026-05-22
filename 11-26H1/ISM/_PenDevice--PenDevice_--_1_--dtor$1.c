/*
 * XREFs of _PenDevice::PenDevice_::_1_::dtor$1 @ 0x1801DC7D2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenDevice::PenDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>((_QWORD *)(*(_QWORD *)(a2 + 48) + 80LL));
}
