/*
 * XREFs of ?EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ @ 0x1804E2370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z @ 0x1804E2ED0 (-_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CAppTransitionManager::EndAppTransitionAnimationRequest(CAppTransitionManager *this)
{
  CAppTransitionManager *v1; // rbx
  int v2; // eax
  unsigned int v3; // ebx
  int v5[2]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (CAppTransitionManager *)((char *)this - 88);
  *(_QWORD *)v5 = ((unsigned __int64)this + 32) & -(__int64)(this != (CAppTransitionManager *)88);
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v5, 1);
  v2 = CAppTransitionManager::_EndDWMTransitionRequest(v1, 0);
  v3 = v2;
  if ( v2 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x147,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v2);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v5);
  return v3;
}
