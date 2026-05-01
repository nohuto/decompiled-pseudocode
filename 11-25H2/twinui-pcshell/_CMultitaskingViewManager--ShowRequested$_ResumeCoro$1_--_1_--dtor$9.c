/*
 * XREFs of _CMultitaskingViewManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$9 @ 0x1806C868A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180066C0C (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::ShowRequested__ResumeCoro_1_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 224) + 144LL;
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(__int64 **)(a2 + 152));
}
