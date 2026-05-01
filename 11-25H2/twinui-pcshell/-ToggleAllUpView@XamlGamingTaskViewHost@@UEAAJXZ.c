/*
 * XREFs of ?ToggleAllUpView@XamlGamingTaskViewHost@@UEAAJXZ @ 0x18067C860
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ @ 0x18067A8B0 (-DismissViewAnimated@XamlGamingTaskViewHost@@UEAAJXZ.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18067BA60 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlGamingTaskViewHost::ToggleAllUpView(XamlGamingTaskViewHost *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)v6 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v6, 1);
  if ( !*((_BYTE *)this + 112) )
  {
    v2 = XamlGamingTaskViewHost::Show((__int64)this, *((IUnknown **)this + 22), *((__int64 **)this + 23));
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 261LL;
      goto LABEL_6;
    }
LABEL_7:
    v3 = 0;
    goto LABEL_8;
  }
  v2 = XamlGamingTaskViewHost::DismissViewAnimated(this);
  v3 = v2;
  if ( v2 >= 0 )
    goto LABEL_7;
  v4 = 257LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlgamingtaskviewhost.cpp",
    (const char *)(unsigned int)v2);
LABEL_8:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v6);
  return v3;
}
