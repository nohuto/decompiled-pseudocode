/*
 * XREFs of _AppViewDataSourceAdapter::HandleTaskGroupSwitchItemAdded_::_1_::dtor$1 @ 0x1806DF36F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewDataSourceAdapter::HandleTaskGroupSwitchItemAdded_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>((_QWORD *)(a2 + 56));
}
