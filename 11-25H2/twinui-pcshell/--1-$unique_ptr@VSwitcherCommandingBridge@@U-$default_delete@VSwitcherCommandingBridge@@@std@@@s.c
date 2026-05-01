/*
 * XREFs of ??1?$unique_ptr@VSwitcherCommandingBridge@@U?$default_delete@VSwitcherCommandingBridge@@@std@@@std@@QEAA@XZ @ 0x18048F348
 * Callers:
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x180224FDC (--1CMultitaskingViewManager@@UEAA@XZ.c)
 *     _CMultitaskingViewManager::CMultitaskingViewManager_::_1_::dtor$26 @ 0x1806C8134 (_CMultitaskingViewManager--CMultitaskingViewManager_--_1_--dtor$26.c)
 * Callees:
 *     ??R?$default_delete@VSwitcherCommandingBridge@@@std@@QEBAXPEAVSwitcherCommandingBridge@@@Z @ 0x18048F62C (--R-$default_delete@VSwitcherCommandingBridge@@@std@@QEBAXPEAVSwitcherCommandingBridge@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<SwitcherCommandingBridge>::~unique_ptr<SwitcherCommandingBridge>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SwitcherCommandingBridge>::operator()();
  return result;
}
