/*
 * XREFs of ?OnMonitorFrameDismissAnimationCompleted@TaskViewHost@@UEAAJXZ @ 0x18067FC10
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::OnMonitorFrameDismissAnimationCompleted(TaskViewHost *this)
{
  char *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)this - 120;
  *(_QWORD *)v6 = ((unsigned __int64)this - 96) & -(__int64)(this != (TaskViewHost *)120);
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v6, 1);
  if ( ++*((_QWORD *)this + 29) == (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3 )
  {
    v3 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 40LL))(v2);
    v4 = v3;
    if ( v3 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20F,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
        (const char *)(unsigned int)v3);
  }
  else
  {
    v4 = 0;
  }
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v6);
  return v4;
}
