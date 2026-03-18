/*
 * XREFs of xxxSetDeskWallpaper @ 0x14012F684
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x14005BB80 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x14012F1C4 (DwmAsyncNotifyWallpaperChange.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x14012F610 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     ?GetCurrentWallpaperSettings@@YAXPEAU_UNICODE_STRING@@PEAUtagWALLPAPERSETTINGS@@@Z @ 0x14012F85C (-GetCurrentWallpaperSettings@@YAXPEAU_UNICODE_STRING@@PEAUtagWALLPAPERSETTINGS@@@Z.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x14012F8D4 (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x14012FB38 (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x14012FB54 (LoadWallpaperFilenameFromRegistry.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(struct _UNICODE_STRING *a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdx
  _WORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int16 v9; // ax
  _WORD *v10; // rax
  struct tagTHREADINFO *v11; // rax
  struct tagWND *ShellWindow; // rdi
  __int64 v13; // rbx
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  struct tagTHREADINFO *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rax
  __int64 v23; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v25[4]; // [rsp+40h] [rbp-228h] BYREF
  _BYTE v26[524]; // [rsp+44h] [rbp-224h] BYREF

  memset_0(v25, 0, 0x204uLL);
  v4 = 0;
  GetCurrentWallpaperSettings(a1, (struct tagWALLPAPERSETTINGS *)v25);
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, v26, 256LL);
  }
  else if ( a2 != -2 )
  {
    v7 = 256LL;
    v8 = a2 - (_QWORD)v26;
    v6 = v26;
    do
    {
      if ( v7 == -2147483390 )
        break;
      v9 = *(_WORD *)((char *)v6 + v8);
      if ( !v9 )
        break;
      *v6++ = v9;
      --v7;
    }
    while ( v7 );
    v10 = v6 - 1;
    if ( v7 )
      v10 = v6;
    *v10 = 0;
  }
  v11 = PtiCurrent((__int64)v6, v5);
  ShellWindow = _GetShellWindow(*((struct tagDESKTOP **)v11 + 62));
  v13 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
  if ( (PsGetCurrentProcess() == v13
     || (CurrentProcess = PsGetCurrentProcess(), (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && ShellWindow )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)ShellWindow);
    v17 = xxxSendNotifyMessage(ShellWindow, 0x34u, 5uLL, 0LL, 1);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v23);
  }
  else
  {
    v4 = 1;
    v17 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)v25);
  }
  if ( v17 && v4 )
  {
    v19 = PtiCurrent(v16, v15);
    if ( (unsigned int)IsThreadDesktopComposed(v19) )
    {
      v22 = (void *)ReferenceDwmApiPort(v21, v20);
      DwmAsyncNotifyWallpaperChange(v22);
    }
    xxxNotifyShellOfWallpaperChange(v21, v20);
  }
  return v17;
}
