/*
 * XREFs of _CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806E61B3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VCActionCenterExperienceManager@@@winrt@@QEAA@XZ @ 0x180363E18 (--1-$com_ptr@VCActionCenterExperienceManager@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::DismissRequested__ResumeCoro_1_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a2 + 40) + 24LL;
  return winrt::com_ptr<CActionCenterExperienceManager>::~com_ptr<CActionCenterExperienceManager>(*(_QWORD **)(a2 + 72));
}
