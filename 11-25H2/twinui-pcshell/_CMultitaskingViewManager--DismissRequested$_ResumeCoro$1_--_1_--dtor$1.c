/*
 * XREFs of _CMultitaskingViewManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806C836F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VCMultitaskingViewManager@@@winrt@@QEAA@XZ @ 0x1800EA258 (--1-$com_ptr@VCMultitaskingViewManager@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::DismissRequested__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 96) + 24LL;
  return winrt::com_ptr<CMultitaskingViewManager>::~com_ptr<CMultitaskingViewManager>(*(_QWORD **)(a2 + 48));
}
