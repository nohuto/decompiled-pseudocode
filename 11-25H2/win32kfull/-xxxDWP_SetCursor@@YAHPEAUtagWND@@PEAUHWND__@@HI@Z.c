/*
 * XREFs of ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140259D40
 * Callers:
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14004C394 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     xxxFlashEnabledPopup @ 0x140110684 (xxxFlashEnabledPopup.c)
 *     xxxActiveWindowTracking @ 0x14018CE4C (xxxActiveWindowTracking.c)
 *     _GetMenuState @ 0x1401BBFB4 (_GetMenuState.c)
 *     xxxGetSysMenu @ 0x1401BC884 (xxxGetSysMenu.c)
 *     xxxActivateEnabledPopup @ 0x14026E024 (xxxActivateEnabledPopup.c)
 */

__int64 __fastcall xxxDWP_SetCursor(struct tagWND *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rdx
  struct tagCURSOR *v9; // rbx
  __int64 v10; // rax
  struct tagWND *v11; // rsi
  _QWORD *SysMenu; // rax
  int MenuState; // esi
  __int64 v14; // rdx
  __int64 DesktopWindow; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagTHREADINFO **v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rax
  struct tagCURSOR *v22; // rcx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-18h] BYREF

  if ( a4 )
  {
    if ( a3 == 10 || a3 == 11 )
    {
      v9 = *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + 25744);
      goto LABEL_15;
    }
    if ( a3 != 12 )
    {
      if ( a3 == 13 )
      {
LABEL_12:
        v9 = *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + 24640);
        goto LABEL_15;
      }
      if ( a3 == 14 )
      {
LABEL_11:
        v9 = *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + 25192);
LABEL_15:
        LOBYTE(v8) = 1;
        v10 = HMValidateHandleNoSecure(a2, v8);
        v11 = (struct tagWND *)v10;
        if ( !v10 )
          return 0LL;
        if ( (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 30LL) & 8) == 0
          || (Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v10),
              SysMenu = (_QWORD *)xxxGetSysMenu(v11, 1LL),
              MenuState = GetMenuState(SysMenu, 61440LL),
              Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v14),
              MenuState == -1)
          || (MenuState & 3) == 0 )
        {
          zzzSetCursor(v9, v17);
          return 1LL;
        }
        goto LABEL_43;
      }
      if ( a3 != 15 )
      {
        if ( a3 != 16 )
        {
          if ( a3 != 17 )
            goto LABEL_10;
          goto LABEL_12;
        }
        goto LABEL_11;
      }
    }
    v9 = *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + 26296);
    goto LABEL_15;
  }
LABEL_10:
  DesktopWindow = GetDesktopWindow((__int64)a1);
  v19 = 0LL;
  if ( v17 != DesktopWindow )
    v19 = (struct tagTHREADINFO **)v17;
  if ( v19 )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v19);
    if ( xxxSendTransformableMessageTimeout(
           v19,
           32LL,
           a2,
           (struct tagDRAWITEMSTRUCT *)((unsigned __int16)a3 | ((unsigned __int16)a4 << 16)),
           0,
           0,
           0LL,
           1,
           1) )
    {
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v20);
      return 1LL;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v20);
  }
  if ( !a4 )
    goto LABEL_43;
  LOBYTE(v17) = 1;
  v21 = HMValidateHandleNoSecure(a2, v17);
  if ( !v21 )
    return 0LL;
  if ( a3 == -2 )
  {
    v23 = a4 - 512;
    if ( !v23 )
    {
      v18 = *(unsigned int *)(W32GetUserSessionState(v18, v17) + 66804);
      if ( (v18 & 1) != 0 )
        xxxActiveWindowTracking((__int64)a1);
      goto LABEL_43;
    }
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 3;
      if ( v25 )
      {
        v26 = v25 - 3;
        if ( v26 )
        {
          if ( v26 != 4 )
            goto LABEL_43;
        }
      }
    }
    else
    {
      v27 = *(_QWORD *)(*((_QWORD *)PtiCurrent(v18, v17) + 59) + 128LL);
      xxxActivateEnabledPopup(a1);
      v18 = *((_QWORD *)PtiCurrent(v29, v28) + 59);
      if ( v27 != *(_QWORD *)(v18 + 128) )
        goto LABEL_43;
    }
    xxxFlashEnabledPopup((__int64)a1, v17);
    goto LABEL_43;
  }
  if ( a3 != 1 )
  {
LABEL_43:
    v22 = *(struct tagCURSOR **)(W32GetUserSessionState(v18, v17) + 21880);
LABEL_44:
    zzzSetCursor(v22, v17);
    return 0LL;
  }
  v22 = *(struct tagCURSOR **)(*(_QWORD *)(v21 + 136) + 88LL);
  if ( v22 )
    goto LABEL_44;
  return 0LL;
}
