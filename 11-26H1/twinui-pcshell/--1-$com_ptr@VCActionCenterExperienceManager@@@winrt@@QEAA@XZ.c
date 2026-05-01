/*
 * XREFs of ??1?$com_ptr@VCActionCenterExperienceManager@@@winrt@@QEAA@XZ @ 0x180363E18
 * Callers:
 *     _CActionCenterExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806E61B3 (_CActionCenterExperienceManager--DismissRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806E654D (_CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x180369EA0 (-unconditional_release_ref@-$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CActionCenterExperienceManager>::~com_ptr<CActionCenterExperienceManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CActionCenterExperienceManager>::unconditional_release_ref();
  return result;
}
