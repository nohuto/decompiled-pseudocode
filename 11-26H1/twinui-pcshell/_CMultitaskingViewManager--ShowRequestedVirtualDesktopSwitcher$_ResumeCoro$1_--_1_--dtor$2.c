/*
 * XREFs of _CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806F0794
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x1800252D4 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__ResumeCoro_1_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 224) + 56LL;
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(_QWORD **)(a2 + 104));
}
