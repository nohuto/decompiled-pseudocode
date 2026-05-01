/*
 * XREFs of ?InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18018C294
 * Callers:
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18018C0D8 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18018C198 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1802A1AB4 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::InvokeEnsureInputAppIsActivated(
        KeyboardHosting::TabTipAdapter *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 56LL))(*((_QWORD *)this + 9));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
