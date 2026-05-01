/*
 * XREFs of ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180364C68
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18003A800 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180365DA8 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28132f5df19164a3808f46d0aa9e9f4d___::Run @ 0x180367880 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28132f5df19164a3808f46d0aa9e9f4d___--Run.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001F810 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x18036773C (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAA_NXZ @ 0x180369C18 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::CompleteHide(CActionCenterExperienceManager *this)
{
  char *v1; // rdi
  int v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this + 128;
  if ( *((_DWORD *)this + 42) != 2 )
    goto LABEL_11;
  v3 = CActionCenterExperienceManager::ReturnFocus(this);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x430,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  v4 = CSingleViewShellExperience::Hide((__int64)v1, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x431,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
LABEL_11:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_38762814>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_38762814>::GetImpl'::`2'::impl) )
      *((_QWORD *)this + 107) = 0LL;
    result = 0LL;
    *((_OWORD *)this + 40) = 0LL;
  }
  return result;
}
