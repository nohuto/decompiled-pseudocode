/*
 * XREFs of ?DisplaySettingsChange@TaskViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18067F190
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a1 - 8;
  *(_QWORD *)v9 = (a1 + 16) & -(__int64)(a1 != 8);
  v10 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v9, 1);
  if ( (a3 & 1) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 452LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
        (const char *)(unsigned int)v5);
    }
  }
  else if ( (a3 & 0x10) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 459LL;
      goto LABEL_8;
    }
  }
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v9);
  return v6;
}
