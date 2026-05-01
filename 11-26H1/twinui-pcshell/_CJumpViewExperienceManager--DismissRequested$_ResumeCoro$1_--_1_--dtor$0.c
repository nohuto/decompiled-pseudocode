/*
 * XREFs of _CJumpViewExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E72E6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VCJumpViewExperienceManager@@@winrt@@QEAA@XZ @ 0x18038C190 (--1-$com_ptr@VCJumpViewExperienceManager@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CJumpViewExperienceManager::DismissRequested__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 64) + 16LL;
  return winrt::com_ptr<CJumpViewExperienceManager>::~com_ptr<CJumpViewExperienceManager>(*(_QWORD **)(a2 + 40));
}
