/*
 * XREFs of ?CompleteHide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18035DE48
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180045860 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18035EE14 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_78dc17297d8421306f6aba57b33a70a5___::Run @ 0x180360810 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_78dc17297d8421306f6aba57b33a70a5___--Run.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001BCBC (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x1803606C8 (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAA_NXZ @ 0x180362B98 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_38762814@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::CompleteHide(CActionCenterExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 42) != 2 )
    goto LABEL_11;
  v2 = CActionCenterExperienceManager::ReturnFocus(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x426,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = CSingleViewShellExperience::Hide((__int64)this + 128, 0LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x427,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  else
  {
LABEL_11:
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_38762814>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_38762814>::GetImpl'::`2'::impl) )
    {
      *((_DWORD *)this + 214) = 0;
      *((_DWORD *)this + 215) = 0;
    }
    result = 0LL;
    *((_OWORD *)this + 40) = 0LL;
  }
  return result;
}
