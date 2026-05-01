/*
 * XREFs of ?OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x18046F150
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x18047C054 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnShellHotKey(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 440) )
  {
    v1 = KeyboardHosting::TabTipAdapter::OnShellHotKey();
    v2 = v1;
    if ( v1 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x646,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
      return v2;
    }
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x64A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80004005LL);
  }
  return 0LL;
}
