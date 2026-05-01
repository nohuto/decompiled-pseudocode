/*
 * XREFs of _GetPidlsFromTaskbarLayout_::_1_::dtor$6 @ 0x1806C9210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPidlsFromTaskbarLayout_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return winrt::com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>::~com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>((_QWORD *)(a2 + 72));
}
