/*
 * XREFs of xxxFlashEnabledPopup @ 0x140110684
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140259D40 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     xxxMessageBeep @ 0x1401107D4 (xxxMessageBeep.c)
 *     DWP_GetEnabledPopup @ 0x1401CB488 (DWP_GetEnabledPopup.c)
 *     xxxFlashWindow @ 0x140253F78 (xxxFlashWindow.c)
 */

__int64 __fastcall xxxFlashEnabledPopup(__int64 a1, __int64 a2)
{
  __int64 EnabledPopup; // rax
  struct tagWND *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 20948) & 1) == 0 )
  {
    EnabledPopup = DWP_GetEnabledPopup(a1);
    v4 = (struct tagWND *)EnabledPopup;
    if ( EnabledPopup )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, EnabledPopup);
      W32GetUserSessionState(v6, v5);
      UPDWORDPointer(8196LL);
      xxxFlashWindow(v4);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v7);
    }
  }
  return xxxMessageBeep(0LL);
}
