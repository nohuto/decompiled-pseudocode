/*
 * XREFs of ??1?$com_ptr@VCMultitaskingViewManager@@@winrt@@QEAA@XZ @ 0x1800EA258
 * Callers:
 *     _CMultitaskingViewManager::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1806B1349 (_CMultitaskingViewManager--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806C836F (_CMultitaskingViewManager--DismissRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806C842D (_CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806C852F (_CMultitaskingViewManager--ShowRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806C8752 (_CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1_--_1_--dtor$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x1800EA2C4 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CMultitaskingViewManager>::~com_ptr<CMultitaskingViewManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref();
  return result;
}
