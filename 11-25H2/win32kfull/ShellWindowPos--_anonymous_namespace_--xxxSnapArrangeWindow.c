/*
 * XREFs of ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402C3448
 * Callers:
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C2E94 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z @ 0x14026EA44 (-IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1402C1B9C (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     ?xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402D02DC (-xxxInterceptInsertAfter@WindowActions@@YAXPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow(struct tagWND *a1, struct tagRECT *a2)
{
  __int64 v4; // rdx
  __int128 *v5; // rcx
  unsigned int v6; // r9d
  int v7; // edx
  unsigned int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  const struct tagWND *v11; // rdx
  __int64 v12; // rbp
  WindowActions *v13; // rcx
  HWND v14; // r8
  char v15; // bl
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  __int64 v19; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v21; // [rsp+50h] [rbp-38h] BYREF

  if ( IsRectEmptyInl(a2) )
  {
    v10 = *(_QWORD *)(v4 + 16);
    if ( v10 )
    {
      LOBYTE(v4) = 1;
      v12 = HMValidateHandleNoSecure(v10, v4);
      if ( v12 )
      {
        if ( WindowActions::IsInterceptWindow(a1, v11) )
        {
          WindowActions::xxxInterceptInsertAfter(v13, *(struct tagWND **)&a2[1].left, v14);
        }
        else
        {
          v15 = *(_BYTE *)(*(_QWORD *)(v12 + 40) + 24LL);
          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v12);
          UserSessionState = W32GetUserSessionState(v17, v16);
          ++*(_DWORD *)(UserSessionState + 70600);
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v21);
          xxxSetWindowPos(a1, v12, 0LL, 0LL, 0, 0, ((~v15 & 8) << 18) | 0x62413);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v21);
          zzzEndDeferWinEventNotify();
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v19);
        }
      }
    }
    else
    {
      xxxSetForegroundWindowWithOptions((__int64)a1, 31LL, 0, 0);
    }
    if ( (a2[1].bottom & 0x20) == 0 )
      ShellWindowPos::NotifyPosAndStateApplied(a1, 3, a2, a2[2].left);
  }
  else
  {
    v6 = *((_DWORD *)v5 + 8);
    v7 = (*(_DWORD *)(v4 + 28) >> 4) & 1;
    v8 = v7 | 2;
    v9 = (*((_BYTE *)v5 + 28) & 1) == 0;
    v21 = *v5;
    if ( v9 )
      v8 = v7;
    WindowArrangement::xxxSetSnapArrangementPos((__int64)a1, (INT *)&v21, v8, v6);
  }
}
