/*
 * XREFs of ?MonitorAdded@TaskViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806A6910
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::MonitorAdded(TaskViewHost *this, struct IImmersiveMonitor *a2)
{
  char *v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)this - 8;
  *(_QWORD *)v6 = ((unsigned __int64)this + 16) & -(__int64)(this != (TaskViewHost *)8);
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v6, 1);
  v3 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 40LL))(v2);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C4,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
      (const char *)(unsigned int)v3);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v6);
  return v4;
}
