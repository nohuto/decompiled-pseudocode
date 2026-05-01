/*
 * XREFs of ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@1@Z @ 0x180296400
 * Callers:
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x1800F2D10 (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1801D7D4C (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x180296454 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 */

__int64 __fastcall ShellPositionerManager::PerformPositionerHandoff(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = ShellPositionerManager::PerformPositionerHandoff(a1, a2, 0LL, 0LL, 0LL, a3, a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BC,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
