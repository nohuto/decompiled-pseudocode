/*
 * XREFs of _anonymous_namespace_::xxxUpdateTray @ 0x1400232D8
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x14023B7E4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x140023234 (-xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 */

void __fastcall anonymous_namespace_::xxxUpdateTray(struct tagWND *a1)
{
  unsigned __int64 v2; // rsi
  struct tagWND *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rbx
  struct tagWND *v7; // rbx
  struct tagDESKTOP *v8; // rcx
  struct tagTHREADINFO *v9; // rax
  unsigned int v10; // ecx
  bool v11; // zf
  struct tagWND *v12; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (unsigned __int64)a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v3 = (struct tagWND *)*((_QWORD *)a1 + 15);
    while ( v3 )
    {
      v11 = (*(_BYTE *)(*((_QWORD *)v3 + 5) + 31LL) & 0x10) == 0;
      v12 = v3;
      v3 = (struct tagWND *)*((_QWORD *)v3 + 15);
      if ( v11 )
        v12 = (struct tagWND *)v2;
      v2 = (unsigned __int64)v12;
    }
    v5 = *(_QWORD *)(W32GetUserSessionState(a1, 0LL) + 18888);
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 16) + 472LL) == v5
      && (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872) + 2120LL) & 8) != 0 )
    {
      v6 = PtiCurrent();
      if ( (((*((_DWORD *)v6 + 180) | *(_DWORD *)(**((_QWORD **)PtiCurrent() + 63) + 16LL)) & 0x800) != 0
         || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 184LL))
        && (unsigned int)IsTopLevelWindow(v2)
        && ((*(_BYTE *)(*(_QWORD *)(v2 + 40) + 31LL) & 0x10) != 0 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 4) != 0) )
      {
        if ( (unsigned __int8)IsTrayWindow(a1, 1LL) )
          v7 = a1;
        else
          v7 = (struct tagWND *)(v2 & -(__int64)((unsigned __int8)IsTrayWindow(v2, 1LL) != 0));
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, v7);
        if ( v7 )
          v8 = (struct tagDESKTOP *)*((_QWORD *)v7 + 3);
        else
          v8 = *(struct tagDESKTOP **)(v2 + 24);
        xxxSetTrayWindow(v8, v7);
        v9 = PtiCurrent();
        Win32HM_UnlockFromThread<1>((ULONG_PTR)v9, (ULONG_PTR)BugCheckParameter3);
      }
    }
    if ( !*((_QWORD *)a1 + 15) || (v10 = 23, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 4) != 0) )
      v10 = 19;
    PostIAMShellHookMessage(v10, *(_QWORD *)a1);
  }
}
