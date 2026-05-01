/*
 * XREFs of _CMultitaskingViewManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$8 @ 0x1806F0668
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x1800252D4 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::ShowRequested__ResumeCoro_1_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 144) = *(_QWORD *)(a2 + 224) + 136LL;
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(_QWORD **)(a2 + 144));
}
