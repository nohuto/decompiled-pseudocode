/*
 * XREFs of _MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor$2 @ 0x1801D7919
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>((_QWORD *)(a2 + 48));
}
