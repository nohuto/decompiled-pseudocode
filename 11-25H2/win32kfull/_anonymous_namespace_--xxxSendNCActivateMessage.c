/*
 * XREFs of _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1401D4008
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023A4E0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x14023B7E4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14001D970 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14015BC98 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

bool __fastcall anonymous_namespace_::xxxSendNCActivateMessage(struct tagWND *a1, unsigned __int64 a2)
{
  struct tagWND *TopLevelWindow; // rbx
  char v4; // di
  bool v5; // zf
  __int64 v7; // rdx
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  TopLevelWindow = a1;
  v4 = 1;
  if ( !(_WORD)a2 || !(unsigned int)CoreWindowProp::IsComponent(a1, a2) )
  {
    v5 = xxxSendMessage(TopLevelWindow, 0x86u) == 0;
    return !v5;
  }
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(TopLevelWindow, v7);
  if ( TopLevelHostForComponent )
    TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)TopLevelHostForComponent);
  if ( TopLevelWindow
    && *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18896)
    && *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 18896) + 136LL) != TopLevelWindow )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)TopLevelWindow);
    v13 = xxxSendNotifyMessage(TopLevelWindow, 0x86u, a2, 0LL, 1);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v14);
    v5 = v13 == 0;
    return !v5;
  }
  return v4;
}
