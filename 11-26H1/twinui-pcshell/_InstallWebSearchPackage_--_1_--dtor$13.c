/*
 * XREFs of _InstallWebSearchPackage_::_1_::dtor$13 @ 0x1806E80F7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InstallWebSearchPackage_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  return winrt::com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>::~com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>(
           (_QWORD *)(a2 + 128),
           a2);
}
