/*
 * XREFs of CalcWindowFullScreen @ 0x1401F3F0C
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x140053B74 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     CalcWindowsFullScreen @ 0x1401F3ED0 (CalcWindowsFullScreen.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GetMonitorRectForWindow @ 0x1400908AC (GetMonitorRectForWindow.c)
 *     UnionRect @ 0x1401524B8 (UnionRect.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1401A8180 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     RemoveWindowFullScreen @ 0x14021536C (RemoveWindowFullScreen.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall CalcWindowFullScreen(struct tagWND *a1)
{
  bool v2; // di
  __int64 v3; // rdx
  struct tagMONITOR *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF

  v15 = 0LL;
  v2 = 0;
  if ( IsTopLevelWindow((__int64)a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v4 = _MonitorFromWindowInternal(a1, 2u, 0);
    if ( v4 )
    {
      v5 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v5 + 30) & 0xC4) == 0xC4 )
      {
        v6 = *(_QWORD *)(v5 + 88);
        v14 = *(_OWORD *)(v5 + 104);
        if ( v6 != *(_QWORD *)(v5 + 104) || *(_QWORD *)(v5 + 96) != *(_QWORD *)(v5 + 112) )
        {
          v7 = *(_DWORD *)(v5 + 288) & 0xF;
          if ( v7 == 3 )
          {
            WindowDpiLastNotify = (*(_DWORD *)(v5 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v5 + 232) & 0x400) != 0 )
          {
            WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
          }
          else if ( !v7
                 && (v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 64LL) & 1) != 0 )
          {
            WindowDpiLastNotify = 96;
          }
          else
          {
            WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
          }
          DWORD1(v14) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) + GetDpiDependentMetric(2, WindowDpiLastNotify);
        }
      }
      else
      {
        v14 = *(_OWORD *)(v5 + 88);
      }
      v13 = *(_OWORD *)GetMonitorRectForWindow((__int64)&v13, (__int64)v4, a1);
      UnionRect(&v15, (int *)&v14, (int *)&v13);
      v3 = v15 - v14;
      if ( (_QWORD)v15 == (_QWORD)v14 )
        v3 = *((_QWORD *)&v15 + 1) - *((_QWORD *)&v14 + 1);
      v2 = v3 == 0;
    }
    v10 = *((unsigned int *)a1 + 95);
    if ( v2 != ((*((_DWORD *)a1 + 95) & 0x400) != 0) )
    {
      LODWORD(v10) = v10 ^ 0x400;
      *((_DWORD *)a1 + 95) = v10;
      if ( *(_QWORD *)(W32GetUserSessionState(v10, v3) + 18888)
        && *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 18888) + 128LL) == a1 )
      {
        if ( v2 )
          EtwTraceForegroundWindowFullScreenStart(0LL);
        else
          EtwTraceForegroundWindowFullScreenStop(0LL);
      }
      PostShellHookMessagesEx((LastWokenThread *)(!v2 + 53), *(_QWORD *)a1);
    }
  }
  else if ( (*((_DWORD *)a1 + 95) & 0x400) != 0 )
  {
    RemoveWindowFullScreen(a1);
  }
}
