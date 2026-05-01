/*
 * XREFs of ?OnMonitorFrameDismissAnimationCompleted@TaskViewHost@@UEAAJXZ @ 0x1806A6CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::OnMonitorFrameDismissAnimationCompleted(TaskViewHost *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // ebx
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)((char *)this - 120);
  *(_QWORD *)v7 = ((unsigned __int64)this - 96) & -(__int64)(this != (TaskViewHost *)120);
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v7, 1);
  v3 = v2[44] + 1LL;
  *((_QWORD *)this + 29) = v3;
  if ( v3 == (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 40LL))(v2);
    v5 = v4;
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21A,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
        (const char *)(unsigned int)v4);
  }
  else
  {
    v5 = 0;
  }
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v7);
  return v5;
}
