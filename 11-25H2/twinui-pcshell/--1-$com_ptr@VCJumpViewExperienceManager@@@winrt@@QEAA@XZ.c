/*
 * XREFs of ??1?$com_ptr@VCJumpViewExperienceManager@@@winrt@@QEAA@XZ @ 0x180385268
 * Callers:
 *     _CJumpViewExperienceManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806BF424 (_CJumpViewExperienceManager--DismissRequested$_ResumeCoro$1_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCJumpViewExperienceManager@@@winrt@@AEAAXXZ @ 0x180387C50 (-unconditional_release_ref@-$com_ptr@VCJumpViewExperienceManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CJumpViewExperienceManager>::~com_ptr<CJumpViewExperienceManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CJumpViewExperienceManager>::unconditional_release_ref();
  return result;
}
