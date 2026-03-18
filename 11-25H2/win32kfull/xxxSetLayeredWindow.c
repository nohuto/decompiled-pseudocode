/*
 * XREFs of xxxSetLayeredWindow @ 0x14005C15C
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ComposeWindow @ 0x14004D908 (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1401F46B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14002EA3C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     xxxRedrawWindow @ 0x140030830 (xxxRedrawWindow.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14003364C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140044D78 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x14004A2FC (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncTextChange @ 0x14004A34C (DwmAsyncTextChange.c)
 *     TrackLayeredZorder @ 0x14004BACC (TrackLayeredZorder.c)
 *     UserGetRedirectedWindowOrigin @ 0x14004BE20 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 *     DwmAsyncChildStyleChange @ 0x14004F614 (DwmAsyncChildStyleChange.c)
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     CreateVisRgnTracker @ 0x14005B558 (CreateVisRgnTracker.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x14005BB60 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     IsWindowBeingDestroyed @ 0x14005C540 (IsWindowBeingDestroyed.c)
 *     CreateSprite @ 0x14005C580 (CreateSprite.c)
 *     SendDwmIconChange @ 0x14005C6EC (SendDwmIconChange.c)
 *     GreUpdateSpriteClipRgn @ 0x14005D774 (GreUpdateSpriteClipRgn.c)
 *     UpdateWindowSpriteMonitor @ 0x140090008 (UpdateWindowSpriteMonitor.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1401C7E1C (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     GreGetSprite @ 0x1401FF5EC (GreGetSprite.c)
 *     xxxUpdateWindows @ 0x14021D9D8 (xxxUpdateWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(WindowActions *this, int a2, __int64 *a3)
{
  int v3; // ebx
  WindowActions *TopLevelWindow; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  unsigned int updated; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  HRGN ExplicitClipRgn; // r14
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *v27; // rax
  __int64 DCEx; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  HDC v31; // rbx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 RectRgnIndirect; // rax
  struct tagWND *v35; // rbx
  HRGN v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 Sprite; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdi
  int v46; // ebx
  void *v47; // rax
  struct tagSIZE v48; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v50; // [rsp+B0h] [rbp+40h] BYREF
  int v51; // [rsp+B8h] [rbp+48h] BYREF
  int v52; // [rsp+BCh] [rbp+4Ch]

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (WindowActions *)GetTopLevelWindow((__int64)this);
  if ( TopLevelWindow
    && (TopLevelWindow == this
     || *((_WORD *)this + 128) >= 0x602u
     || IsChildWindowDpiIsolationEnabled(this, *((struct tagWND **)this + 13)) && IsChildWindowDpiBoundary(this)) )
  {
    v3 = 1;
  }
  LOBYTE(v8) = IsDesktopWindow((__int64)this);
  if ( (!v8 || !(unsigned int)IsWindowDesktopComposed(v10)) && !v3 )
    return 2151546883LL;
  v11 = *(unsigned int *)(*((_QWORD *)this + 5) + 232LL);
  if ( (v11 & 2) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(this) )
    {
      v14 = *((_QWORD *)this + 5);
      UserSessionState = W32GetUserSessionState(v13, v12);
      result = CreateSprite(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL), this, v14 + 88, a3);
      updated = result;
      if ( (int)result >= 0 )
      {
        SetOrClrWF(1, this, 0xA08u, 1);
        CreateVisRgnTracker(this, 1);
        TrackLayeredZorder(this);
        if ( IsTopLevelWindow((__int64)this) )
        {
          ExplicitClipRgn = tagWND::GetExplicitClipRgn(this);
          if ( ExplicitClipRgn )
          {
            v21 = *(_QWORD *)this;
            v22 = W32GetUserSessionState(v19, v18);
            GreUpdateSpriteClipRgn(*(_QWORD *)(*(_QWORD *)(v22 + 56968) + 48LL), v21, ExplicitClipRgn, 0LL);
          }
        }
        v23 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)this + 5) + 256LL), v18);
        UpdateWindowSpriteMonitor(this, v23);
        if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)this) )
        {
          SendDwmIconChange(this);
          v24 = *(_QWORD *)this;
          v27 = (void *)ReferenceDwmApiPort(v26, v25);
          DwmAsyncTextChange(v27, v24);
        }
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)BugCheckParameter3);
        zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)this, 17LL, 0LL);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)BugCheckParameter3);
        if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x10) != 0 && a2 )
        {
          DCEx = _GetDCEx(*((_QWORD *)this + 13), 0LL, 3LL);
          v31 = (HDC)DCEx;
          if ( DCEx )
          {
            v32 = *((_QWORD *)this + 5);
            v50 = 0LL;
            BugCheckParameter3[0] = *(_QWORD *)(v32 + 88);
            v48.cx = *(_DWORD *)(v32 + 96) - *(_DWORD *)(v32 + 88);
            v48.cy = *(_DWORD *)(v32 + 100) - *(_DWORD *)(v32 + 92);
            UserGetRedirectedWindowOrigin(DCEx, (__int64)&v50);
            v33 = *((_QWORD *)this + 5);
            v51 = *(_DWORD *)(v33 + 88) - v50;
            v52 = *(_DWORD *)(v33 + 92) - HIDWORD(v50);
            updated = zzzUpdateLayeredWindow(
                        this,
                        (__int64)v31,
                        (const struct tagPOINT *)BugCheckParameter3,
                        &v48,
                        v31,
                        (__int64)&v51,
                        0,
                        0LL,
                        0xCu,
                        0LL);
            _ReleaseDC(v31);
          }
          RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)this + 5) + 88LL, v29, v30);
          v35 = (struct tagWND *)*((_QWORD *)this + 13);
          v36 = (HRGN)RectRgnIndirect;
          BugCheckParameter3[1] = 0LL;
          BugCheckParameter3[0] = -1LL;
          if ( v35 )
          {
            Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)BugCheckParameter3, (__int64)v35);
            GreOffsetRgn(
              v36,
              (unsigned int)-*(_DWORD *)(*((_QWORD *)v35 + 5) + 104LL),
              (unsigned int)-*(_DWORD *)(*((_QWORD *)v35 + 5) + 108LL));
          }
          xxxRedrawWindow(v35, 0LL, (__int64)v36, 1157);
          if ( v35 )
            Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(BugCheckParameter3, v37);
          xxxUpdateWindows(this, v36);
          GreDeleteObject(v36);
          Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(BugCheckParameter3, v38);
        }
        return updated;
      }
      return result;
    }
    return 2151546883LL;
  }
  v39 = *(_QWORD *)this;
  v40 = W32GetUserSessionState(v11, v9);
  Sprite = GreGetSprite(*(_QWORD *)(*(_QWORD *)(v40 + 56968) + 48LL), v39);
  v43 = *((_QWORD *)this + 5);
  *(_DWORD *)(v43 + 232) &= ~2u;
  *((_DWORD *)this + 95) |= 0x8000u;
  if ( a3 )
    *a3 = Sprite;
  v44 = *((_QWORD *)this + 5);
  v45 = *(_QWORD *)this;
  v46 = *(_DWORD *)(v44 + 232);
  v47 = (void *)ReferenceDwmApiPort(v43, v42);
  DwmAsyncChildStyleChange(v47, v45, -268435456, v46);
  return 0LL;
}
