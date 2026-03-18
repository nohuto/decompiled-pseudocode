/*
 * XREFs of ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x14019CC50
 * Callers:
 *     NtUserRegisterGhostWindow @ 0x14019CC00 (NtUserRegisterGhostWindow.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14001F054 (-GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x14005C540 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x14014BC9C (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x14014C01C (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016C5AC (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x140181470 (-RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019D61C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x140229844 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14025542C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1402AE940 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall xxxRegisterGhostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rax
  const struct tagWND *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO **v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR v19[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  if ( !(unsigned int)IsCurrentProcessDwm() )
  {
    UserSetLastError(5);
    return v4;
  }
  LOBYTE(v5) = 1;
  v6 = HMValidateHandleNoSecure((__int64)a2, v5);
  v7 = (const struct tagWND *)v6;
  if ( v6 )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v19, v6);
    if ( !_ShouldGhostWindow(v7) )
      goto LABEL_21;
    if ( GetGhostProp(v7, v8) != -1 )
      goto LABEL_21;
    if ( !IsHungWindow((const struct tagTHREADINFO **)v7) )
      goto LABEL_21;
    LOBYTE(v8) = 1;
    v10 = (struct tagTHREADINFO **)HMValidateHandleNoSecure((__int64)a1, v8);
    if ( !v10 || v10[2] != PtiCurrent(v9, v8) || !IsGhostWindowClass((const struct tagWND *)v10, v8) )
      goto LABEL_21;
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v10);
    if ( (unsigned int)SetGhostProp((struct tagWND *)v10, a2) )
    {
      if ( (unsigned int)SetGhostProp(v7, a1) )
      {
        SetGhostFNID((struct tagWND *)v10, 1);
        xxxShowGhostWindow((struct tagWND *)v10, v7);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v10)
          && !(unsigned int)IsWindowBeingDestroyed((__int64)v7)
          && (HWND)GetGhostProp((const struct tagWND *)v10, v13) == a2
          && (HWND)GetGhostProp(v7, v14) == a1 )
        {
          v4 = 1;
          goto LABEL_20;
        }
        SetGhostFNID((struct tagWND *)v10, 0);
        if ( (HWND)GetGhostProp(v7, v15) == a1 )
          RemoveGhostProp(v7, v16);
        xxxHideGhostWindow((LARGE_INTEGER *)v10, v7);
      }
      RemoveGhostProp((struct tagWND *)v10, v12);
    }
LABEL_20:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v11);
    if ( v4 )
    {
LABEL_23:
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v19, v8);
      return v4;
    }
LABEL_21:
    if ( GetGhostProp(v7, v8) == -1 )
      RemoveGhostProp(v7, v8);
    goto LABEL_23;
  }
  return v4;
}
