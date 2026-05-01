/*
 * XREFs of _CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1_::_1_::dtor$9 @ 0x1806F08C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x1800252D4 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__ResumeCoro_1_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 224) + 128LL;
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(_QWORD **)(a2 + 152));
}
