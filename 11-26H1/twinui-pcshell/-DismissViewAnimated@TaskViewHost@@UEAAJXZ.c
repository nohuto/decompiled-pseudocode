/*
 * XREFs of ?DismissViewAnimated@TaskViewHost@@UEAAJXZ @ 0x1806A6050
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AnimateDismissFrames@TaskViewHost@@AEAAXXZ @ 0x1806A5FD0 (-AnimateDismissFrames@TaskViewHost@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55073957@@@details@wil@@QEAA_NXZ @ 0x1806A80F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55073957@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::DismissViewAnimated(TaskViewHost *this)
{
  int v3[2]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)v3 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v3, 1);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55073957>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55073957>::GetImpl'::`2'::impl)
    || *((_QWORD *)this + 26) )
  {
    TaskViewHost::AnimateDismissFrames(this);
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x17C,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
      (const char *)0x8000FFFFLL);
  }
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v3);
  return 0LL;
}
