/*
 * XREFs of ?DisplaySettingsChange@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806A9350
 * Callers:
 *     ?DisplaySettingsChange@XamlSnapAssistViewHost@@WJA@EAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806A93C0 (-DisplaySettingsChange@XamlSnapAssistViewHost@@WJA@EAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITO.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x180215450 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlSnapAssistViewHost::DisplaySettingsChange(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[2]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)v5 = (a1 + 16) & -(__int64)(a1 != 16);
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(*(__int64 *)v5, 1);
  v2 = CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(a1 - 8);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CC,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v2);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)v5);
  return v3;
}
